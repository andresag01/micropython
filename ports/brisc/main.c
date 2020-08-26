#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "py/compile.h"
#include "py/runtime.h"
#include "py/gc.h"
#include "py/mperrno.h"
#include "lib/utils/pyexec.h"

#ifndef __cpu0__
#error "Not building for BeyondRISC"
#endif /* __cpu0__ */

#if MICROPY_ENABLE_COMPILER
#error "MICROPY_ENABLE_COMPILER must be disabled in BeyondRISC"
#elif MICROPY_ENABLE_GC
#error "MICROPY_ENABLE_GC must be disabled in BeyondRISC"
#endif

//#define SCRIPT_MODULE_PATH "frozen/frozentest.py"
//#define SCRIPT_MODULE_PATH "frozen/bm_unpack_sequence.py"
//#define SCRIPT_MODULE_PATH "frozen/bm_deltablue.py"
//#define SCRIPT_MODULE_PATH "frozen/bm_fannkuch.py"
//#define SCRIPT_MODULE_PATH "frozen/bm_hexion.py"
//#define SCRIPT_MODULE_PATH "frozen/bm_json_dumps.py"
//#define SCRIPT_MODULE_PATH "frozen/bm_json_loads.py"
//#define SCRIPT_MODULE_PATH "frozen/bm_meteor_contest.py"
//#define SCRIPT_MODULE_PATH "frozen/bm_nqueens.py"
//#define SCRIPT_MODULE_PATH "frozen/bm_pyflate.py"
//#define SCRIPT_MODULE_PATH "frozen/bm_regex_effbot.py"

#define xstr(a) str(a)
#define str(a) #a

//#define SCRIPTS_COUNT		    11
#define SCRIPTS_COUNT		    1
#define MAX_SCRIPT_NAME_LENGTH	30
static const char scripts[SCRIPTS_COUNT][30] = {
    SCRIPT_MODULE_PATH
//	  "frozen/frozentest.py"
//	, "frozen/bm_unpack_sequence.py"
//	, "frozen/bm_deltablue.py"
//	, "frozen/bm_fannkuch.py"
//	, "frozen/bm_hexion.py"
//	, "frozen/bm_json_dumps.py"
//	, "frozen/bm_json_loads.py"
//	, "frozen/bm_meteor_contest.py"
//	, "frozen/bm_nqueens.py"
//	, "frozen/bm_pyflate.py"
//	, "frozen/bm_regex_effbot.py"
};

#if MICROPY_ENABLE_GC
#define HEAP_SIZE_BYTES		5000000
static char *stack_top;
static char heap[HEAP_SIZE_BYTES];
#endif /* MICROPY_ENABLE_GC */

int main(void) {
	int i;
#if MICROPY_ENABLE_GC
    int stack_dummy;
    stack_top = (char*)&stack_dummy;

    gc_init(heap, heap + sizeof(heap));
#endif /* MICROPY_ENABLE_GC */

	//printString("Initializing interpreter...\n");
    mp_init();

	for (i = 0; i < SCRIPTS_COUNT; i++)
	{
		//printString("Executing ");
        //printString(scripts[i]);
        //printString("...\n");

		pyexec_frozen_module(scripts[i]);

		//printString("Ending ");
        //printString(scripts[i]);
        //printString("\n\n");
	}

	//printString("Deinitializing interpreter...\n");
    mp_deinit();

    return 0;
}

#if MICROPY_ENABLE_GC
void gc_collect(void) {
    // WARNING: This gc_collect implementation doesn't try to get root
    // pointers from CPU registers, and thus may function incorrectly.
    void *dummy;
    gc_collect_start();
    gc_collect_root(&dummy, ((mp_uint_t)stack_top - (mp_uint_t)&dummy) / sizeof(mp_uint_t));
    gc_collect_end();
    gc_dump_info();
}
#endif /* MICOPY_ENABLE_GC */

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

void nlr_jump_fail(void *val) {
	(void)val;
    abort();
}

void NORETURN __fatal_error(const char *msg) {
	(void)msg;
    abort();
}

#ifndef NDEBUG
void MP_WEAK __assert_func(const char *file, int line, const char *func, const char *expr) {
    printString("Assertion ");
    printString(expr);
    printString(" failed, at file ");
    printString(file);
    putchar(':');
    printHex(line);
    putchar('\n');
    __fatal_error("Assertion failed");
}
#endif /* NDEBUG */
