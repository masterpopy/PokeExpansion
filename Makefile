
SRC_DIR := src
BUILDDIR := build
PREPROC = tools/preproc.exe

ELF = $(BUILDDIR)/linked.o
ROM = $(BUILDDIR)/output.bin

C_SRCS := $(wildcard $(SRC_DIR)/*.c)
ASM_SRCS := $(wildcard $(SRC_DIR)/*.s)
C_OBJS := $(patsubst $(SRC_DIR)/%.c,$(BUILDDIR)/%.o,$(C_SRCS))
ASM_OBJS := $(patsubst $(SRC_DIR)/%.s,$(BUILDDIR)/%.o,$(ASM_SRCS))

GCC := arm-none-eabi-gcc
AS := arm-none-eabi-as
LD := arm-none-eabi-ld
OBJCOPY = arm-none-eabi-objcopy

all : $(ROM)

CFLAGS = -mthumb -mno-thumb-interwork -mcpu=arm7tdmi -I $(SRC_DIR) -fno-inline -mlong-calls -march=armv4t -Wall -O2
ASFLAGS = -mcpu=arm7tdmi -mthumb -I $(SRC_DIR)
$(shell mkdir -p $(BUILDDIR))

$(BUILDDIR)/%.o : $(SRC_DIR)/%.c
	$(PREPROC) $< charmap.txt | $(GCC) $(CFLAGS) -o $(BUILDDIR)/$*.o -x c -c -

$(BUILDDIR)/%.o : $(SRC_DIR)/%.s
	$(PREPROC) $< charmap.txt | $(AS) $(ASFLAGS) -o $(BUILDDIR)/$*.o

$(ELF): $(C_OBJS) $(ASM_OBJS)
	$(LD) BPEE.ld -T linker.ld -o $@ $(C_OBJS) $(ASM_OBJS)

$(ROM): $(ELF)
	$(OBJCOPY) -O binary $< $@

$(shell python scripts/insert)
