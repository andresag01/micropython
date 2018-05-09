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

INC += -I.
INC += -I$(TOP)
INC += -I$(BUILD)

LDSCRIPT = memmap.ld
SYSROOT = /Users/andresag/Documents/repos/llvm_repos_unpatched/llvm/build/lib/clang/7.0.0/include

CFLAGS = $(INC) --sysroot $(SYSROOT) --target=thumb -O2 -Wall -emit-llvm \
	-nostdlib -ffreestanding -mfloat-abi=soft \
	-ffunction-sections -fdata-sections -fno-builtin -fno-stack-protector \
	-momit-leaf-frame-pointer -DNDEBUG \
	-DMICROPY_USE_READLINE=$(MICROPY_PY_USE_READLINE) \
	-DMICROPY_PY_SOCKET=$(MICROPY_PY_SOCKET) \
	-DMICROPY_PY_THREAD_GIL=$(MICROPY_PY_THREAD_GIL) \
	-DMICROPY_PY_WEBREPL=$(MICROPY_PY_WEBREPL)
LLCFLAGS = -march=thumb -function-sections -data-sections \
	-disable-simplify-libcalls -mtriple=arm-non-eabi
LDFLAGS = -nostdlib -static --gc-sections -T $(LDSCRIPT)
ASFLAGS = -mthumb

SRC_C = main.c sbrk.c dlmalloc.c
SRC_S = startup.asm

OBJ = $(PY_O) $(addprefix $(BUILD)/, $(SRC_C:.c=.o) $(SRC_S:.s=.o))

all: $(BUILD)/upython

$(BUILD)/upython: $(OBJ)
	$(ECHO) "LINK $@"
	$(Q)$(LD) $(LDFLAGS) -o $@ $^ $(LIBS)

include $(TOP)/py/mkrules.mk
