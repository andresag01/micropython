include ../../py/mkenv.mk

# qstr definitions (must come before including py.mk)
QSTR_DEFS = qstrdefsport.h

# include py core make definitions
include $(TOP)/py/py.mk

CROSS_COMPILE =

MICROPY_FORCE_32BIT = 1
MICROPY_PY_TERMIOS = 0
MICROPY_PY_SOCKET = 0
MICROPY_PY_THREAD_GIL = 0
MICROPY_PY_USE_READLINE = 0
MICROPY_PY_WEBREPL = 0

INC += -I.
INC += -I$(TOP)
INC += -I$(BUILD)

CFLAGS = $(INC) -Wall -Werror -std=c99 -m32 -Wpointer-arith -Wuninitialized \
	-O0 -g3 -fdata-sections -ffunction-sections -DNDEBUG \
	-DMICROPY_USE_READLINE=$(MICROPY_PY_USE_READLINE) \
	-DMICROPY_PY_SOCKET=$(MICROPY_PY_SOCKET) \
	-DMICROPY_PY_THREAD_GIL=$(MICROPY_PY_THREAD_GIL) \
	-DMICROPY_PY_WEBREPL=$(MICROPY_PY_WEBREPL)

LDFLAGS = #-Wl,-map,$@.map -Wl,-dead_strip

SRC_C = main.c
SRC_S =

OBJ = $(PY_O) $(addprefix $(BUILD)/, $(SRC_C:.c=.o) $(SRC_S:.s=.o))

all: $(BUILD)/upython

$(BUILD)/upython: $(OBJ)
	$(ECHO) "LINK $@"
	$(Q)$(LD) $(LDFLAGS) -o $@ $^ $(LIBS)

include $(TOP)/py/mkrules.mk
