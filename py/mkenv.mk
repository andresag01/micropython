ifneq ($(lastword a b),b)
$(error These Makefiles require make 3.81 or newer)
endif

# Set TOP to be the path to get from the current directory (where make was
# invoked) to the top of the tree. $(lastword $(MAKEFILE_LIST)) returns
# the name of this makefile relative to where make was invoked.
#
# We assume that this file is in the py directory so we use $(dir ) twice
# to get to the top of the tree.

THIS_MAKEFILE := $(lastword $(MAKEFILE_LIST))
TOP := $(patsubst %/py/mkenv.mk,%,$(THIS_MAKEFILE))

# Turn on increased build verbosity by defining BUILD_VERBOSE in your main
# Makefile or in your environment. You can also use V=1 on the make command
# line.

ifeq ("$(origin V)", "command line")
BUILD_VERBOSE=$(V)
endif
ifndef BUILD_VERBOSE
BUILD_VERBOSE = 0
endif
ifeq ($(BUILD_VERBOSE),0)
Q = @
else
Q =
endif
# Since this is a new feature, advertise it
ifeq ($(BUILD_VERBOSE),0)
$(info Use make V=1 or set BUILD_VERBOSE in your environment to increase build verbosity.)
endif

# default settings; can be overridden in main Makefile

PY_SRC ?= $(TOP)/py
BUILD ?= build

RM = rm
ECHO = @echo
CP = cp
MKDIR = mkdir
SED = sed
PYTHON = python

AS = arm-none-eabi-as
CC = /Users/andresag/Documents/repos/llvm_repos_unpatched/llvm/build/bin/clang
LLC = /Users/andresag/Documents/repos/llvm_repos_unpatched/llvm/build/bin/llc
CXX = /Users/andresag/Documents/repos/llvm_repos_unpatched/llvm/build/bin/clang++
LD = arm-none-eabi-ld
OBJCOPY = arm-none-eabi-objcopy
OBJDUMP = arm-none-eabi-objdump
READELF = arm-none-eabi-readelf
SIZE = arm-none-eabi-size
STRIP = arm-none-eabi-strip
AR = arm-none-eabi-ar
M4 = m4
ifeq ($(MICROPY_FORCE_32BIT),1)
CC += -m32
CXX += -m32
LD += -m32
endif

MAKE_FROZEN = $(TOP)/tools/make-frozen.py
MPY_CROSS = $(TOP)/mpy-cross/mpy-cross
MPY_TOOL = $(TOP)/tools/mpy-tool.py

all:
.PHONY: all

.DELETE_ON_ERROR:

MKENV_INCLUDED = 1
