CROSS = 1

include ../../py/mkenv.mk

FROZEN_DIR = frozen

FROZEN_SCRIPTS = $(FROZEN_DIR)/frozentest.py	\
	$(FROZEN_DIR)/bm_nqueens.py					\
	$(FROZEN_DIR)/bm_deltablue.py				\
	$(FROZEN_DIR)/bm_fannkuch.py				\
	$(FROZEN_DIR)/bm_hexion.py					\
	$(FROZEN_DIR)/bm_json_dumps.py				\
	$(FROZEN_DIR)/bm_json_loads.py				\
	$(FROZEN_DIR)/bm_meteor_contest.py			\
	$(FROZEN_DIR)/bm_unpack_sequence.py			\
	$(FROZEN_DIR)/bm_nqueens.py					\
	$(FROZEN_DIR)/bm_pyflate.py					\
	$(FROZEN_DIR)/bm_regex_effbot.py

# qstr definitions (must come before including py.mk)
QSTR_DEFS = qstrdefsport.h

# include py core make definitions
include $(TOP)/py/py.mk

SYSROOT_DIR ?= /dir/that/does/not/exist

INC += -I.
INC += -I$(TOP)
INC += -I$(BUILD)

OLEVEL = 2

ENTRY_FUNC = _start
ARCH = cpu0
CFLAGS = -O$(OLEVEL) -emit-llvm -nostdlib -target $(ARCH) -ffreestanding \
		-fno-stack-check -fno-stack-protector $(INC) \
		-isystem $(SYSROOT_DIR) --sysroot $(SYSROOT_DIR)
LFLAGS = -relocation-model=pic -march=$(ARCH) -O$(OLEVEL) -filetype=asm
AFLAGS = --prog-handle 1       \
	--handle-bits 15           \
	--instructions $(INSTR_DB) \
	--entry $(ENTRY_FUNC)
MPTFLAGS = -f -mlongint-impl=mpz -mmpz-dig-size=16

# Tune for Optimization
CFLAGS += -O$(OLEVEL) -DNDEBUG

LIBS =

SRC_C = \
	main.c \
	uart_core.c \
	string.c \
	stdlib.c \
	stdio.c \
	lib/utils/stdout_helpers.c \
	lib/utils/pyexec.c \
	$(BUILD)/_frozen_mpy.c \

OBJ = $(PY_O) $(addprefix $(BUILD)/,$(SRC_C:.c=.o))

all: $(BUILD)/firmware.elf

%.mpy: %.py
	$(ECHO) "MPC $<"
	$(Q)$(TOP)/mpy-cross/mpy-cross -X emit=bytecode -o $@ $<

$(BUILD)/_frozen_mpy.c: $(BUILD)/genhdr/qstrdefs.generated.h $(FROZEN_SCRIPTS:.py=.mpy)
	$(ECHO) "MPT $@"
	$(Q)$(TOP)/tools/mpy-tool.py $(MPTFLAGS) -q $(BUILD)/genhdr/qstrdefs.preprocessed.h $(FROZEN_SCRIPTS:.py=.mpy) > $@

$(BUILD)/firmware.elf: $(OBJ) startup.asm
	$(ECHO) "LD $@"
	$(Q)$(ASM)  --output $@ --disassemble $(@:.elf=.disasm) --input $^ $(AFLAGS)

spotless:
	$(MAKE) clean
	$(RM) -f $(FROZEN_SCRIPTS:.py=.mpy)

include $(TOP)/py/mkrules.mk
