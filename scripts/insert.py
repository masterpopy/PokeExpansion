#!/usr/bin/env python3

import os
import subprocess
import sys
import shutil
import binascii
import textwrap
import sys
import argparse

if sys.version_info < (3, 4):
    print('Python 3.4 or later is required.')
    sys.exit(1)

PathVar = os.environ.get('Path')
Paths = PathVar.split(';')
PATH = ""
for candidatePath in Paths:
    if "devkitARM" in candidatePath:
        PATH = candidatePath
        break
if PATH == "":
    PATH = 'C://devkitPro//devkitARM//bin'
    if os.path.isdir(PATH) == False:
        print("...\nDevkit not found.")
        sys.exit(1)

PREFIX = 'arm-none-eabi-'
OBJCOPY = os.path.join(PATH, PREFIX + 'objcopy')
OBJDUMP = os.path.join(PATH, PREFIX + 'objdump')
NM = os.path.join(PATH, PREFIX + 'nm')
AS = os.path.join(PATH, PREFIX + 'as')
CC = os.path.join(PATH, PREFIX + 'gcc')
CXX = os.path.join(PATH, PREFIX + 'g++')


def get_text_section():
    # Dump sections
    out = subprocess.check_output([OBJDUMP, '-t', 'build/linked.o'])
    lines = out.decode().split('\n')

    # Find text section
    text = filter(lambda x: x.strip().endswith('.text'), lines)
    section = (list(text))[0]

    # Get the offset
    offset = int(section.split(' ')[0], 16)

    return offset


def symbols(subtract=0):
    out = subprocess.check_output([NM, 'build/linked.o'])
    lines = out.decode().split('\n')

    name = ''

    ret = {}
    for line in lines:
        parts = line.strip().split()

        if (len(parts) < 3):
            continue

        if (parts[1].lower() not in {'t', 'd'}):
            continue

        offset = int(parts[0], 16)
        ret[parts[2]] = offset - subtract

    return ret


def insert(rom):
    INSERT_LOC = 0x1b00000
    rom.seek(INSERT_LOC)
    with open('build/output.bin', 'rb') as binary:
        data = binary.read()
    rom.write(data)
    return INSERT_LOC


def hook(rom, space, hook_at, register=0):
    # Align 2
    if hook_at & 1:
        hook_at -= 1

    rom.seek(hook_at)

    register &= 7

    if hook_at % 4:
        data = bytes([0x01, 0x48 | register, 0x00 | (register << 3), 0x47, 0x0, 0x0])
    else:
        data = bytes([0x00, 0x48 | register, 0x00 | (register << 3), 0x47])

    space += 0x08000001
    data += (space.to_bytes(4, 'little'))
    rom.write(bytes(data))


def funcwrap(rom, space, hook_at, nparams, isreturning):
    # Align 2
    if hook_at & 1:
        hook_at -= 1

    rom.seek(hook_at)
    nparams = nparams - 1

    if nparams < 4:
        data = bytes(
            [0x10, 0xB5, 0x3, 0x4C, 0x0, 0xF0, 0x3, 0xF8, 0x10, 0xBC, (isreturning + 1), 0xBC, (isreturning << 3), 0x47,
             0x20, 0x47])
    else:
        k = nparams - 3
        data = bytes([0x10, 0xB5, 0x82, 0xB0])
        for i in range(k + 2):
            data += bytes([i + 2, 0x9C, i, 0x94])
        data += bytes([0x0, 0x9C, (nparams - 1), 0x94, 0x1, 0x9C, nparams, 0x94, 0x2, 0xB0, (k + 8), 0x4C,
                       0x0, 0xF0, ((k << 1) + 13), 0xF8, 0x82, 0xB0, nparams, 0x9C, 0x1, 0x94, (nparams - 1), 0x9C, 0x0,
                       0x94])
        for i in reversed(range(k + 2)):
            data += bytes([i, 0x9C, i + 2, 0x94])
        data += bytes([0x2, 0xB0, 0x10, 0xBC, (isreturning + 1), 0xBC, (isreturning << 3), 0x47, 0x20, 0x47])

    space += 0x08000001
    data += (space.to_bytes(4, 'little'))
    rom.write(bytes(data))


def repoint(rom, space, repoint_at, slidefactor=0):
    rom.seek(repoint_at)

    space += (0x08000000 + slidefactor)
    data = (space.to_bytes(4, 'little'))
    rom.write(bytes(data))


def bytereplace(rom, offset, data):
    ar = offset
    words = data.split()
    for i in range(0, len(words)):
        rom.seek(ar)
        intbyte = int(words[i], 16)
        rom.write(bytes(intbyte.to_bytes(1, 'big')))
        ar += 1


def bytereplace_count(rom, offset, value, bytecount):
    rom.seek(offset)
    rom.write(value.to_bytes(bytecount, byteorder='little'))


def repoint_list(rom, space, list, len):
    for i in range(0, len):
        repoint(rom, space, list[i])


def expand_ball(rom, table):
    to_repoint_tiles = [0x0001D0, 0x076510, 0x0767C0, 0x076AD4, 0x076B0C]
    repoint_list(rom, table["ball_tiles"], to_repoint_tiles, len(to_repoint_tiles))

    to_repoint_pals = [0x0001D4, 0x076514, 0x0767C4, 0x076ADC, 0x076B10]
    repoint_list(rom, table["ball_pals"], to_repoint_pals, len(to_repoint_pals))

    to_repoint_templates = [0x075538, 0x076518, 0x0767C8, 0x170ED0, 0x171010, 0x1C4A74]
    repoint_list(rom, table["ball_templates"], to_repoint_templates, len(to_repoint_templates))

    stars_tiles = [0x171D8C, 0x1729D4]
    repoint_list(rom, table["ball_stars_tiles"], stars_tiles, len(stars_tiles))

    stars_pals = [0x171D94, 0x1729D8]
    repoint_list(rom, table["ball_stars_pals"], stars_pals, len(stars_pals))

    stars_IDs = [0x171AA8, 0x171F38, 0x1720B4, 0x1721B8, 0x1722B4, 0x1723C0, 0x1724EC, 0x172644, 0x17277C, 0x1728C8]
    repoint_list(rom, table["Ball_Stars"], stars_IDs, len(stars_IDs))

    ball_tasks_IDs = [0x171E18, 0x172990]
    repoint_list(rom, table["ball_anim_tasks"], ball_tasks_IDs, len(ball_tasks_IDs))

    stars_templates = [0x171F30, 0x1720B0, 0x1721B4, 0x1722B8, 0x1723BC, 0x1724F0, 0x172648, 0x172774, 0x1728CC]
    repoint_list(rom, table["ball_stars_templates"], stars_templates, len(stars_templates))

    ball_fade = [0x172A54, 0x172AA0, 0x172B04, 0x172BE0]
    repoint_list(rom, table["ball_fadepoke_table"], ball_fade, len(ball_fade))

    repoint(rom, table["getattributes_origingame"], 0x06A79C)
    repoint(rom, table["setattributes_origingame"], 0x06AEC8)
    repoint(rom, table["getattributes_lvl"], 0x06A798)
    repoint(rom, table["setattributes_lvl"], 0x06AEC4)
    repoint(rom, table["getattributes_ball"], 0x06A7A0)
    repoint(rom, table["setattributes_ball"], 0x06AECC)

    # Don't call item_to_ball function as argument is already ballID
    to_bytereplace = [0x0754CE, 0x07567C, 0x075D3A, 0x170C14, 0x1C4A14]
    for i in range(0, len(to_bytereplace)):
        bytereplace_count(rom, to_bytereplace[i], 0, 4)
    # correct luxury ball ID in happiness boost
    bytereplace_count(rom, 0x06DA64, 0xA, 1)
    # limiter
    bytereplace_count(rom, 0x1711A4, 31, 1)
    bytereplace_count(rom, 0x171B08, 31, 1)

    hook(rom, table["item_to_ball"], 0x170D84, 1)
    hook(rom, table["FT1_use_new_balls"], 0x03E952, 0)
    hook(rom, table["third_frame_ball_hook"], 0x076AA0, 0)


with open("test.gba", 'rb+') as rom:
    print("Inserting data")
    offset = get_text_section()
    table = symbols(offset)
    where = insert(rom)

    # Adjust symbol table
    for entry in table:
        table[entry] += where

    # Read hooks from a file
    with open('hooks', 'r') as hooklist:
        for line in hooklist:
            if line.strip().startswith('#'): continue

            symbol, address, register = line.split()
            offset = int(address, 16) - 0x08000000
            try:
                code = table[symbol]
            except KeyError:
                print('Symbol missing:', symbol)
                continue

            hook(rom, code, offset, int(register))

    # Read repoints from a file
    with open('repoints', 'r') as repointlist:
        for line in repointlist:
            if line.strip().startswith('#'): continue
            if len(line.split()) == 2:
                symbol, address = line.split()
                offset = int(address, 16) - 0x08000000
                try:
                    code = table[symbol]
                except KeyError:
                    print('Symbol missing:', symbol)
                    continue

                repoint(rom, code, offset)
            if len(line.split()) == 3:
                symbol, address, slide = line.split()
                offset = int(address, 16) - 0x08000000
                try:
                    code = table[symbol]
                except KeyError:
                    print('Symbol missing:', symbol)
                    continue
                repoint(rom, code, offset, int(slide))

    # Read routine repoints from a file
    with open('routinepointers', 'r') as pointerlist:
        for line in pointerlist:
            if line.strip().startswith('#'): continue

            symbol, address = line.split()
            offset = int(address, 16) - 0x08000000
            try:
                code = table[symbol]
            except KeyError:
                print('Symbol missing:', symbol)
                continue

            repoint(rom, code, offset, 1)

    # Read routine rewrite wrapper from a file
    with open('functionrewrites', 'r') as frwlist:
        for line in frwlist:
            if line.strip().startswith('#'): continue

            symbol, address, nparam, isreturning = line.split()
            offset = int(address, 16) - 0x08000000
            try:
                code = table[symbol]
            except KeyError:
                print('Symbol missing:', symbol)
                continue

            funcwrap(rom, code, offset, int(nparam), int(isreturning))

    # Insert byte changes
    with open('bytereplacement', 'r') as replacelist:
        for line in replacelist:
            if line.strip().startswith('#'): continue
            offset = int(line[:8], 16) - 0x08000000
            bytereplace(rom, offset, line[9:])

    expand_ball(rom, table)
    width = max(map(len, table.keys())) + 1
    offset_file = open("function_offsets.ini", 'w')
    for key in sorted(table.keys()):
        fstr = ('{:' + str(width) + '} {:08X}')
        offset_file.write(fstr.format(key + ':', table[key] + 0x08000000) + '\n')
    offset_file.close()
