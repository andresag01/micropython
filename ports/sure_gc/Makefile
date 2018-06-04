MICROPY_FORCE_32BIT = 0
MICROPY_PY_TERMIOS = 0
MICROPY_PY_SOCKET = 0
MICROPY_PY_THREAD_GIL = 0
MICROPY_PY_USE_READLINE = 0
MICROPY_PY_WEBREPL = 0

include ../../py/mkenv.mk

# qstr definitions (must come before including py.mk)
QSTR_DEFS = qstrdefsport.h

# include py core make definitions
include $(TOP)/py/py.mk

# Select the script to compile into the binary
SELECT_SCRIPT ?= 1

# Select memory size values for linker script
RAM_SIZE ?= 900
MIN_STACK_SIZE ?= 50

INC += -I.
INC += -I$(TOP)
INC += -I$(BUILD)

LDSCRIPT = memmap.ld
#SYSROOT = /Users/andresag/Documents/repos/llvm_repos_unpatched/llvm/build/lib/clang/7.0.0/include
SYSROOT = /usr/local/Cellar/arm-none-eabi-gcc/7-2017-q4-major/gcc/bin/../arm-none-eabi/include

LDSCRIPT = memmap.ld
PFLAGS_SCRIPT ?= ./scripts/get_code_pflags.py
SORT_READELF_SCRIPT ?= ./scripts/sort_readelf.py

OPT_LEVEL = 2

CFLAGS = $(INC) -isystem $(SYSROOT) --sysroot $(SYSROOT) -O$(OPT_LEVEL) \
	-mcpu=cortex-m0 -fno-short-enums \
	--target=thumb -Wall -emit-llvm -nostdlib -ffreestanding -mfloat-abi=soft \
	-ffunction-sections -fdata-sections -fno-builtin -fno-stack-protector \
	-momit-leaf-frame-pointer -DNDEBUG \
	-DMICROPY_USE_READLINE=$(MICROPY_PY_USE_READLINE) \
	-DMICROPY_PY_SOCKET=$(MICROPY_PY_SOCKET) \
	-DMICROPY_PY_THREAD_GIL=$(MICROPY_PY_THREAD_GIL) \
	-DMICROPY_PY_WEBREPL=$(MICROPY_PY_WEBREPL) \
	-DSELECT_SCRIPT=$(SELECT_SCRIPT)
LLCFLAGS = -mtriple=arm-none-eabi -march=thumb -float-abi=soft \
	-function-sections -O$(OPT_LEVEL) -data-sections -disable-simplify-libcalls
LDFLAGS = -static -nostdlib --gc-sections -Map $(@:.elf=.map)
ASFLAGS = -mthumb
SIZEFLAGS = --format=sysv --radix=10
READELFFLAGS ?= -a -teg
OBJDUMPFLAGS ?= -h -C -S -s -d
# Do not set K to MIN_STACK_SIZE because its for startup.s
M4FLAGS = --define=RAM_SIZE=$(RAM_SIZE)K \
	--define=MIN_STACK_SIZE=$(MIN_STACK_SIZE)

SRC_C = main.c utils.c printf.c
SRC_S = startup.s sure_malloc.s idiv.s idivmod.s memset.s crt.s lmul.s ldivmod.s

OBJ = $(addprefix $(BUILD)/, $(SRC_S:.s=.o) $(SRC_C:.c=.o)) $(PY_O)

all: $(BUILD)/micropython.elf

%.s: %.raw
	$(ECHO) "M4 $<"
	$(Q)$(M4) $(M4FLAGS) $< > $@

$(BUILD)/micropython.elf: $(OBJ)
	$(ECHO) "M4 $(LDSCRIPT)"
	$(Q)$(M4) $(M4FLAGS) $(LDSCRIPT) > $(BUILD)/$(LDSCRIPT:.ld=.m4)
	$(ECHO) "LINK $@"
	$(Q)$(LD) $(LDFLAGS) -T $(BUILD)/$(LDSCRIPT:.ld=.m4) -o $@ $^
	$(ECHO) "OBJCOPY $@"
	$(Q)$(OBJCOPY) $@ -O binary $(@:.elf=.bin)
	$(ECHO) "SIZE $@"
	$(Q)$(SIZE) $(SIZEFLAGS) $@ > $(@:.elf=.size)
	$(ECHO) "RELF $@"
	$(Q)$(READELF) $(READELFFLAGS) $@ > $(@:.elf=.readelf)
	$(ECHO) "OBJDUMP $@"
	$(Q)$(OBJDUMP) $(OBJDUMPFLAGS) $@ > $(@:.elf=.objdump)
	$(ECHO) "SORTRELF $@"
	$(Q)$(SORT_READELF_SCRIPT) $(@:.elf=.sorted_readelf) $(@:.elf=.size) $(@:.elf=.readelf)
	$(ECHO) "PFLAG $@"
	$(Q)$(PFLAGS_SCRIPT) $(@:.elf=.pflag) $(@:.elf=.objdump) $(@:.elf=.size) $(@:.elf=.readelf) micropython.pflagcmd

include $(TOP)/py/mkrules.mk
