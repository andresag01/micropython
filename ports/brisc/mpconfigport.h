#include <stdint.h>
#include <inttypes.h>

// options to control how MicroPython is built

// You can disable the built-in MicroPython compiler by setting the following
// config option to 0.  If you do this then you won't get a REPL prompt, but you
// will still be able to execute pre-compiled scripts, compiled with mpy-cross.
#define MICROPY_ENABLE_COMPILER                 (0)

#define MICROPY_QSTR_BYTES_IN_HASH              (1)
#define MICROPY_QSTR_EXTRA_POOL                 mp_qstr_frozen_const_pool
#define MICROPY_ALLOC_PATH_MAX                  (256)
#define MICROPY_ALLOC_PARSE_CHUNK_INIT          (16)
#define MICROPY_EMIT_X64                        (0)
#define MICROPY_EMIT_THUMB                      (0)
#define MICROPY_EMIT_INLINE_THUMB               (0)
#define MICROPY_COMP_MODULE_CONST               (0)
#define MICROPY_COMP_CONST                      (0)
#define MICROPY_COMP_DOUBLE_TUPLE_ASSIGN        (0)
#define MICROPY_COMP_TRIPLE_TUPLE_ASSIGN        (0)
#define MICROPY_MEM_STATS                       (0)
#define MICROPY_DEBUG_PRINTERS                  (0)
#define MICROPY_ENABLE_GC                       (0)
#define MICROPY_GC_ALLOC_THRESHOLD              (0)
#define MICROPY_REPL_EVENT_DRIVEN               (0)
#define MICROPY_HELPER_REPL                     (1)
#define MICROPY_HELPER_LEXER_UNIX               (0)
#define MICROPY_ENABLE_SOURCE_LINE              (0)
#define MICROPY_ENABLE_DOC_STRING               (0)
#define MICROPY_ERROR_REPORTING                 (MICROPY_ERROR_REPORTING_TERSE)
#define MICROPY_BUILTIN_METHOD_CHECK_SELF_ARG   (1)
#define MICROPY_PY_ASYNC_AWAIT                  (0)
#define MICROPY_PY_BUILTINS_BYTEARRAY           (1)
#define MICROPY_PY_BUILTINS_MEMORYVIEW          (0)
#define MICROPY_PY_BUILTINS_ENUMERATE           (1)
#define MICROPY_PY_BUILTINS_FILTER              (1)
#define MICROPY_PY_BUILTINS_FROZENSET           (1)
#define MICROPY_PY_BUILTINS_REVERSED            (1)
#define MICROPY_PY_BUILTINS_SET                 (1)
#define MICROPY_PY_BUILTINS_SLICE               (1)
#define MICROPY_PY_BUILTINS_PROPERTY            (0)
#define MICROPY_PY_BUILTINS_MIN_MAX             (1)
#define MICROPY_PY___FILE__                     (0)
#define MICROPY_PY_GC                           (0)
#define MICROPY_PY_ARRAY                        (1)
#define MICROPY_PY_ATTRTUPLE                    (0)
#define MICROPY_PY_COLLECTIONS                  (0)
#define MICROPY_PY_MATH                         (0)
#define MICROPY_PY_CMATH                        (0)
#define MICROPY_PY_IO                           (1)
#define MICROPY_PY_STRUCT                       (0)
#define MICROPY_PY_SYS                          (1)
#define MICROPY_PY_SYS_EXIT                     (1)
#define MICROPY_MODULE_FROZEN_MPY               (1)
#define MICROPY_MODULE_FROZEN_STR               (0)
#define MICROPY_CPYTHON_COMPAT                  (0)
#define MICROPY_LONGINT_IMPL                    (MICROPY_LONGINT_IMPL_MPZ)
#define MICROPY_FLOAT_IMPL                      (MICROPY_FLOAT_IMPL_NONE)
#define MICROPY_STACKLESS                       (0)
#define MICROPY_STACKLESS_STRICT                (0)
#define MICROPY_STACK_CHECK                     (0)
#define MICROPY_NO_ALLOCA                       (1)
#define MICROPY_USE_INTERNAL_PRINTF             (0)
#define MICROPY_USE_INTERNAL_ERRNO              (1)

#define MICROPY_PY_UCTYPES                      (0)
#define MICROPY_PY_UZLIB                        (0)
#define MICROPY_PY_UJSON                        (1)
#define MICROPY_PY_URE                          (1)
#define MICROPY_PY_UHEAPQ                       (0)
#define MICROPY_PY_UTIMEQ                       (0)
#define MICROPY_PY_UHASHLIB                     (1)
#define MICROPY_PY_UBINASCII                    (0)
#define MICROPY_PY_UBINASCII_CRC32              (0)
#define MICROPY_PY_URANDOM                      (0)
#define MICROPY_PY_URANDOM_EXTRA_FUNCS          (0)
#define MICROPY_PY_MACHINE                      (0)
#define MICROPY_PY_MACHINE_PULSE                (0)
#define MICROPY_PY_MACHINE_I2C                  (0)
#define MICROPY_PY_MACHINE_SPI                  (0)
#define MICROPY_PY_USSL                         (0)
#define MICROPY_PY_USSL_FINALISER               (0)
#define MICROPY_PY_WEBSOCKET                    (0)
#define MICROPY_PY_FRAMEBUF                     (0)
#define MICROPY_PY_BTREE                        (0)

// type definitions for the specific machine

// This is supposed to be for Thumb's benefit as their architecture requires
// setting the LSB to 1 for legacy reasons to signal that the processor is
// jumping to execute Thumb code rather than ARM. This is ridiculous and we do
// not need it in BeyondRISC, x86, etc. Just leave it here for reference
#define MICROPY_MAKE_POINTER_CALLABLE(p)        (p)

// This port is intended to be 32-bit, but unfortunately, int32_t for
// different targets may be defined in different ways - either as int
// or as long. This requires different printf formatting specifiers
// to print such value. So, we avoid int32_t and use int directly.
#define UINT_FMT "%" PRIu32
#define INT_FMT "%d"
typedef int32_t mp_int_t; // must be pointer size
typedef uint32_t mp_uint_t; // must be pointer size

// This appears to be used when interfacing with stream-handling functions from
// the underlying system. See py/stream.c and py/stream.h, but it is not clear
// what the type's size is supposed to be. I think the width is supposed to be
// whatever is used by the system as signaled through the _FILE_OFFSET_BITS
// macro
typedef long mp_off_t;

#define MP_PLAT_PRINT_STRN(str, len) mp_hal_stdout_tx_strn_cooked(str, len)

// extra built in names to add to the global namespace
#define MICROPY_PORT_BUILTINS \
    { MP_ROM_QSTR(MP_QSTR_open), MP_ROM_PTR(&mp_builtin_open_obj) },

#define MICROPY_HW_BOARD_NAME "minimal"
#define MICROPY_HW_MCU_NAME "brisc-functional-simulator"

#define MICROPY_PORT_ROOT_POINTERS \
    const char *readline_hist[8];
