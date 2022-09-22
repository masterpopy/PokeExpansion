
ifeq ($(CC),)
HOSTCC := gcc
else
HOSTCC := $(CC)
endif

ifeq ($(CXX),)
HOSTCXX := g++
else
HOSTCXX := $(CXX)
endif


SRC_DIR := src
BUILDDIR := build
PREPROC = tools/preproc.exe
#要使用这个功能必须保证你出来的头文件是项目里有的，否则会出错
SCANINC = tools/scaninc.exe

ELF = $(BUILDDIR)/linked.o
ROM = $(BUILDDIR)/output.bin

C_SRCS := $(wildcard $(SRC_DIR)/*.c)
ASM_SRCS := $(wildcard $(SRC_DIR)/*.s)
C_OBJS := $(patsubst $(SRC_DIR)/%.c,$(BUILDDIR)/%.o,$(C_SRCS))
ASM_OBJS := $(patsubst $(SRC_DIR)/%.s,$(BUILDDIR)/%.o,$(ASM_SRCS))

GCC := arm-none-eabi-gcc
CPP := arm-none-eabi-cpp
AS := arm-none-eabi-as
LD := arm-none-eabi-ld
OBJCOPY = arm-none-eabi-objcopy

.PHONY : all
# Clear the default suffixes
.SUFFIXES:
# Don't delete intermediate files
.SECONDARY:
# Delete files that weren't built properly
.DELETE_ON_ERROR:

# Secondary expansion is required for dependency variables in object rules.
.SECONDEXPANSION:

all : $(ROM)

CFLAGS = -mthumb -mno-thumb-interwork -mcpu=arm7tdmi -I $(SRC_DIR) -fno-inline -march=armv4t -Wall -O2
CPPFLAGS := -Wno-trigraphs
ASFLAGS = -mcpu=arm7tdmi -mthumb -I $(SRC_DIR)

$(shell mkdir -p $(BUILDDIR))
c_dep = $(shell $(SCANINC) $(SRC_DIR)/$*.c)



%.s: ;
%.png: ;
%.pal: ;
%.aif: ;

%.1bpp: %.png  ; $(GFX) $< $@
%.4bpp: %.png  ; $(GFX) $< $@
%.8bpp: %.png  ; $(GFX) $< $@
%.gbapal: %.pal ; $(GFX) $< $@
%.gbapal: %.png ; $(GFX) $< $@
%.lz: % ; $(GFX) $< $@
%.rl: % ; $(GFX) $< $@


$(BUILDDIR)/%.o : $(SRC_DIR)/%.c $$(c_dep)
	$(CPP) $(CPPFLAGS) $< | $(PREPROC) $< charmap.txt -i | $(GCC) $(CFLAGS) -o $(BUILDDIR)/$*.o -x c -c -

$(BUILDDIR)/%.o : $(SRC_DIR)/%.s
	$(PREPROC) $< charmap.txt | $(AS) $(ASFLAGS) -o $(BUILDDIR)/$*.o

$(ELF): $(C_OBJS) $(ASM_OBJS)
	$(LD) BPEE.ld -T linker.ld -o $@ $^

$(ROM): $(ELF)
	$(OBJCOPY) -O binary $< $@

#$(shell python scripts/insert)
