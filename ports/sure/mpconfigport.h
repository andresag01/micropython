#include <stdint.h>

#define MICROPY_ALLOC_GC_STACK_SIZE         (1)
#define MICROPY_GC_ALLOC_THRESHOLD          (0)
#define MICROPY_ALLOC_PATH_MAX              (512)
#define MICROPY_MODULE_DICT_SIZE            (1)
#define MICROPY_MALLOC_USES_ALLOCATED_SIZE  (1)
#define MICROPY_QSTR_BYTES_IN_LEN           (1)
#define MICROPY_QSTR_BYTES_IN_HASH          (1)
#define MICROPY_STACKLESS                   (0)
#define MICROPY_STACKLESS_STRICT            (0)
#define MICROPY_NO_ALLOCA                   (1)

#define MICROPY_EMIT_X64                    (1)
#define MICROPY_EMIT_X86                    (0)
#define MICROPY_EMIT_THUMB                  (0)
#define MICROPY_EMIT_INLINE_THUMB           (0)
#define MICROPY_EMIT_INLINE_THUMB_ARMV7M    (0)
#define MICROPY_EMIT_INLINE_THUMB_FLOAT     (0)
#define MICROPY_EMIT_ARM                    (0)
#define MICROPY_EMIT_XTENSA                 (0)
#define MICROPY_EMIT_INLINE_XTENSA          (0)

#define MICROPY_ENABLE_COMPILER             (1)
#define MICROPY_DYNAMIC_COMPILER            (0)

#define MICROPY_COMP_CONST_FOLDING          (1)
#define MICROPY_COMP_MODULE_CONST           (0)
#define MICROPY_COMP_CONST                  (0)
#define MICROPY_COMP_DOUBLE_TUPLE_ASSIGN    (0)
#define MICROPY_COMP_TRIPLE_TUPLE_ASSIGN    (0)
#define MICROPY_COMP_RETURN_IF_EXPR         (0)

#define MICROPY_MEM_STATS                   (1)

#define MICROPY_DEBUG_PRINTERS              (1)
#define MICROPY_DEBUG_VERBOSE               (1)

#define MICROPY_OPT_COMPUTED_GOTO                   (0)
#define MICROPY_OPT_CACHE_MAP_LOOKUP_IN_BYTECODE    (0)
#define MICROPY_OPT_MPZ_BITWISE                     (0)

#define MICROPY_READER_POSIX                (0)
#define MICROPY_READER_VFS                  (0)

#define MICROPY_ENABLE_GC                   (0)
#define MICROPY_ENABLE_FINALISER            (0)

#define MICROPY_STACK_CHECK                 (0)

#define MICROPY_ENABLE_EMERGENCY_EXCEPTION_BUF  (0)

#define MICROPY_HELPER_REPL                 (0)
#define MICROPY_REPL_EMACS_KEYS             (0)
#define MICROPY_REPL_AUTO_INDENT            (0)
#define MICROPY_HELPER_LEXER_UNIX           (0)

#define MICROPY_LONGINT_IMPL                (MICROPY_LONGINT_IMPL_NONE)

#define MICROPY_ENABLE_SOURCE_LINE          (0)
#define MICROPY_ENABLE_DOC_STRING           (0)

#define MICROPY_ERROR_REPORTING             (MICROPY_ERROR_REPORTING_TERSE)

#define MICROPY_WARNINGS                    (0)

#define MICROPY_FLOAT_IMPL                  (MICROPY_FLOAT_IMPL_NONE)
#define MICROPY_FLOAT_HIGH_QUALITY_HASH     (0)

#define MICROPY_CPYTHON_COMPAT              (0)
#define MICROPY_FULL_CHECKS                 (1)
#define MICROPY_STREAMS_NON_BLOCK           (0)
#define MICROPY_STREAMS_POSIX_API           (0)
#define MICROPY_MODULE_BUILTIN_INIT         (0)
#define MICROPY_MODULE_WEAK_LINKS           (0)
#define MICROPY_MODULE_FROZEN_STR           (0)
#define MICROPY_MODULE_FROZEN_MPY           (0)
#define MICROPY_CAN_OVERRIDE_BUILTINS       (0)

#define MICROPY_BUILTIN_METHOD_CHECK_SELF_ARG (0)

#define MICROPY_USE_INTERNAL_ERRNO          (0)

#define MICROPY_USE_INTERNAL_PRINTF         (0)
#define MICROPY_ENABLE_SCHEDULER            (0)
#define MICROPY_SCHEDULER_DEPTH             (0)
#define MICROPY_VFS                         (0)

#define MICROPY_PY_FUNCTION_ATTRS               (0)
#define MICROPY_PY_DESCRIPTORS                  (0)
#define MICROPY_PY_DELATTR_SETATTR              (0)
#define MICROPY_PY_ASYNC_AWAIT                  (0)
#define MICROPY_PY_STR_BYTES_CMP_WARN           (0)
#define MICROPY_PY_BUILTINS_STR_UNICODE         (0)
#define MICROPY_PY_BUILTINS_STR_CENTER          (0)
#define MICROPY_PY_BUILTINS_STR_PARTITION       (0)
#define MICROPY_PY_BUILTINS_STR_SPLITLINES      (0)
#define MICROPY_PY_BUILTINS_BYTEARRAY           (1)
#define MICROPY_PY_BUILTINS_MEMORYVIEW          (0)
#define MICROPY_PY_BUILTINS_SET                 (1)
#define MICROPY_PY_BUILTINS_SLICE               (1)
#define MICROPY_PY_BUILTINS_SLICE_ATTRS         (1)
#define MICROPY_PY_BUILTINS_FROZENSET           (1)
#define MICROPY_PY_BUILTINS_PROPERTY            (1)
#define MICROPY_PY_BUILTINS_RANGE_ATTRS         (1)
#define MICROPY_PY_BUILTINS_TIMEOUTERROR        (0)
#define MICROPY_PY_ALL_SPECIAL_METHODS          (0)
#define MICROPY_PY_ALL_INPLACE_SPECIAL_METHODS  (0)
#define MICROPY_PY_REVERSE_SPECIAL_METHODS      (0)
#define MICROPY_PY_BUILTINS_COMPILE             (1)
#define MICROPY_PY_BUILTINS_ENUMERATE           (1)
#define MICROPY_PY_BUILTINS_EXECFILE            (0)
#define MICROPY_PY_BUILTINS_FILTER              (1)
#define MICROPY_PY_BUILTINS_REVERSED            (1)
#define MICROPY_PY_BUILTINS_NOTIMPLEMENTED      (0)
#define MICROPY_PY_BUILTINS_INPUT               (0)
#define MICROPY_PY_BUILTINS_MIN_MAX             (1)
#define MICROPY_PY_BUILTINS_POW3                (1)
#define MICROPY_PY_BUILTINS_HELP                (0)
#define MICROPY_PY_BUILTINS_HELP_MODULES        (0)
#define MICROPY_PY___FILE__                     (0)
#define MICROPY_PY_MICROPYTHON_MEM_INFO         (0)
#define MICROPY_PY_ARRAY                        (1)
#define MICROPY_PY_ARRAY_SLICE_ASSIGN           (1)
#define MICROPY_PY_ATTRTUPLE                    (1)
#define MICROPY_PY_COLLECTIONS                  (1)
#define MICROPY_PY_COLLECTIONS_ORDEREDDICT      (1)
#define MICROPY_PY_MATH                         (1)
#define MICROPY_PY_MATH_SPECIAL_FUNCTIONS       (1)
#define MICROPY_PY_CMATH                        (1)
#define MICROPY_PY_GC                           (0)
#define MICROPY_PY_GC_COLLECT_RETVAL            (0)
#define MICROPY_PY_IO                           (0)
#define MICROPY_PY_IO_RESOURCE_STREAM           (0)
#define MICROPY_PY_IO_FILEIO                    (0)
#define MICROPY_PY_IO_BYTESIO                   (0)
#define MICROPY_PY_IO_BUFFEREDWRITER            (0)
#define MICROPY_PY_STRUCT                       (1)
#define MICROPY_PY_SYS                          (1)
#define MICROPY_PY_SYS_MAXSIZE                  (1)
#define MICROPY_PY_SYS_MODULES                  (1)
#define MICROPY_PY_SYS_EXC_INFO                 (0)
#define MICROPY_PY_SYS_EXIT                     (1)
#define MICROPY_PY_SYS_GETSIZEOF                (0)
#define MICROPY_PY_SYS_STDFILES                 (0)
#define MICROPY_PY_SYS_STDIO_BUFFER             (0)
#define MICROPY_PY_UERRNO                       (0)
#define MICROPY_PY_UERRNO_ERRORCODE             (0)
#define MICROPY_PY_USELECT                      (0)
#define MICROPY_PY_UTIME_MP_HAL                 (0)
#define MICROPY_PY_THREAD                       (0)

#define MICROPY_PY_UCTYPES                      (1)
#define MICROPY_PY_UZLIB                        (1)
#define MICROPY_PY_UJSON                        (0)
#define MICROPY_PY_URE                          (1)
#define MICROPY_PY_UHEAPQ                       (1)
#define MICROPY_PY_UTIMEQ                       (0)
#define MICROPY_PY_UHASHLIB                     (1)
#define MICROPY_PY_UBINASCII                    (1)
#define MICROPY_PY_UBINASCII_CRC32              (1)
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

//#define MICROPY_MAKE_POINTER_CALLABLE(p) ((void*)((mp_uint_t)(p) | 1))
//#define MP_PLAT_PRINT_STRN(str, len)            (void)0
#define MP_PLAT_PRINT_STRN(str, len)    \
    {                                   \
        size_t i;                       \
        for (i = 0; i < len; i++)       \
        {                               \
            printf("%c", str[i]);       \
        }                               \
    }

typedef int32_t mp_int_t; // must be pointer size
typedef uint32_t mp_uint_t; // must be pointer size
typedef long mp_off_t;
