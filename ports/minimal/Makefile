include ../../py/mkenv.mk

CROSS = 0

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

ifeq ($(CROSS), 1)
CROSS_COMPILE = arm-none-eabi-
endif

INC += -I.
INC += -I$(TOP)
INC += -I$(BUILD)

ifeq ($(CROSS), 1)
DFU = $(TOP)/tools/dfu.py
PYDFU = $(TOP)/tools/pydfu.py
CFLAGS_CORTEX_M4 = -mthumb -mtune=cortex-m4 -mabi=aapcs-linux -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -fsingle-precision-constant -Wdouble-promotion
CFLAGS = $(INC) -Wall -Werror -Werror=vla -std=c99 -nostdlib $(CFLAGS_CORTEX_M4) $(COPT)
LDFLAGS = -nostdlib -T stm32f405.ld -Map=$@.map --cref --gc-sections
else
LD = gcc
CFLAGS = $(INC) -Wall -Werror -Werror=vla -std=c99 $(COPT)
LDFLAGS = -Wl,-Map=$@.map,--cref -Wl,--gc-sections
MPTFLAGS = -f -mlongint-impl=mpz -mmpz-dig-size=32
endif

# Tune for Debugging or Optimization
ifeq ($(DEBUG), 1)
CFLAGS += -O0 -ggdb
else
CFLAGS += -Os -DNDEBUG
CFLAGS += -fdata-sections -ffunction-sections
endif

LIBS =

SRC_C = \
	main.c \
	uart_core.c \
	lib/utils/stdout_helpers.c \
	lib/utils/pyexec.c \
	lib/libc/string0.c \
	$(BUILD)/_frozen_mpy.c \

OBJ = $(PY_O) $(addprefix $(BUILD)/,$(SRC_C:.c=.o))

ifeq ($(CROSS), 1)
all: $(BUILD)/firmware.dfu
else
all: $(BUILD)/firmware.elf
endif

%.mpy: %.py
	$(ECHO) "MPC $<"
	$(Q)$(TOP)/mpy-cross/mpy-cross -X emit=bytecode -o $@ $<

$(BUILD)/_frozen_mpy.c: $(BUILD)/genhdr/qstrdefs.generated.h $(FROZEN_SCRIPTS:.py=.mpy)
	$(ECHO) "MPT $@"
	$(Q)$(TOP)/tools/mpy-tool.py $(MPTFLAGS) -q $(BUILD)/genhdr/qstrdefs.preprocessed.h $(FROZEN_SCRIPTS:.py=.mpy) > $@

$(BUILD)/firmware.elf: $(OBJ)
	$(ECHO) "LD $@"
	$(Q)$(LD) $(LDFLAGS) -o $@ $^ $(LIBS)
	$(Q)$(SIZE) $@

$(BUILD)/firmware.bin: $(BUILD)/firmware.elf
	$(Q)$(OBJCOPY) -O binary -j .isr_vector -j .text -j .data $^ $(BUILD)/firmware.bin

$(BUILD)/firmware.dfu: $(BUILD)/firmware.bin
	$(ECHO) "Create $@"
	$(Q)$(PYTHON) $(DFU) -b 0x08000000:$(BUILD)/firmware.bin $@

deploy: $(BUILD)/firmware.dfu
	$(ECHO) "Writing $< to the board"
	$(Q)$(PYTHON) $(PYDFU) -u $<

spotless:
	$(MAKE) clean
	$(RM) -f $(FROZEN_SCRIPTS:.py=.mpy)

# Run emulation build on a POSIX system with suitable terminal settings
run:
	stty raw opost -echo
	build/firmware.elf
	@echo Resetting terminal...
# This sleep is useful to spot segfaults
	sleep 1
	reset

test: $(BUILD)/firmware.elf
	$(Q)/bin/echo -e "print('hello world!', list(x+1 for x in range(10)), end='eol\\\\n')\\r\\n\\x04" | $(BUILD)/firmware.elf | tail -n2 | grep "^hello world! \\[1, 2, 3, 4, 5, 6, 7, 8, 9, 10\\]eol"

include $(TOP)/py/mkrules.mk
