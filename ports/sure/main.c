#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "py/compile.h"
#include "py/runtime.h"
#include "py/repl.h"
#include "py/mperrno.h"
#include "py/gc.h"
#include "py/stackctrl.h"
#include "py/builtin.h"

#include "script.h"
#include "utils.h"

#define FORCED_EXIT (0x100)

// If exc is SystemExit, return value where FORCED_EXIT bit set,
// and lower 8 bits are SystemExit value. For all other exceptions,
// return 1.
STATIC int handle_uncaught_exception(mp_obj_base_t *exc) {
    // check for SystemExit
    if (mp_obj_is_subclass_fast(MP_OBJ_FROM_PTR(exc->type), MP_OBJ_FROM_PTR(&mp_type_SystemExit))) {
        // None is an exit value of 0; an int is its value; anything else is 1
        mp_obj_t exit_val = mp_obj_exception_get_value(MP_OBJ_FROM_PTR(exc));
        mp_int_t val = 0;
        if (exit_val != mp_const_none && !mp_obj_get_int_maybe(exit_val, &val)) {
            val = 1;
        }
        return FORCED_EXIT | (val & 255);
    }

    // Report all other exceptions
    mp_obj_print_exception(&mp_plat_print, MP_OBJ_FROM_PTR(exc));
    return 1;
}

STATIC void run_script(const char *src, mp_parse_input_kind_t input_kind) {
    nlr_buf_t nlr;
    int ret;
    if (nlr_push(&nlr) == 0) {
        mp_lexer_t *lex = mp_lexer_new_from_str_len(MP_QSTR__lt_stdin_gt_, src, strlen(src), 0);
        qstr source_name = lex->source_name;
        mp_parse_tree_t parse_tree = mp_parse(lex, input_kind);
        mp_obj_t module_fun = mp_compile(&parse_tree, source_name, MP_EMIT_OPT_NONE, true);
        mp_call_function_0(module_fun);
        nlr_pop();
    } else {
        // uncaught exception
        ret = handle_uncaught_exception(nlr.ret_val);
        if (ret == 1) {
            // Real uncaught exception
            printf("Uncaught exception!\n");
            fail(97);
        } else {
            // System exit returned something
            printf("System returned 0x%04X\n", ret & ~FORCED_EXIT);
            if ((ret & ~FORCED_EXIT) != 0) {
                fail(96);
            }
        }
    }
}

int main(void)
{
    /*
     * Set the stack limits, which is 1KB less than the real stack size. This
     * is be able to recover if the stack limit is hit
     */
    mp_stack_set_top(&_stack_end);
#if MICROPY_STACK_CHECK
    mp_stack_set_limit((char *)&_stack_end - (char *)&_stack_start);
#endif /* MICROPY_STACK_CHECK */

#if MICROPY_ENABLE_GC
    /* Initialise the GC */
    gc_init(&_heap_start, &_heap_end);
#if MICROPY_GC_ALLOC_THRESHOLD
    /* Set the collection threshold to 50% */
    size_t heap_blocks = gc_get_num_blocks();
    gc_set_threshold(heap_blocks);
#endif /* MICROPY_GC_ALLOC_THRESHOLD */
#endif /* MICROPY_ENABLE_GC */

    /* Initialise MicroPython */
    mp_init();

    /* Run the script */
    run_script(PYTHON_SCRIPT, MP_PARSE_FILE_INPUT);

#if MICROPY_PY_MICROPYTHON_MEM_INFO
    mp_micropython_mem_info(1, NULL);
#endif

    /* Shutdown MicroPython */
    mp_deinit();

    /* Return success to the system */
    return 0;
}

/*
 * The following three functions are there for no good reason as those features
 * are not enabled in the config
 */
mp_lexer_t *mp_lexer_new_from_file(const char *filename) {
    mp_raise_OSError(MP_ENOENT);
}

mp_import_stat_t mp_import_stat(const char *path) {
    return MP_IMPORT_STAT_NO_EXIST;
}

mp_obj_t mp_builtin_open(size_t n_args, const mp_obj_t *args, mp_map_t *kwargs) {
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_KW(mp_builtin_open_obj, 1, mp_builtin_open);

void NORETURN nlr_jump_fail(void *val) {
    fail(99);
}

void NORETURN __fatal_error(const char *msg) {
    fail(98);
}
