/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013, 2014 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <stdio.h>
#include <stdint.h>

#include "py/obj.h"
#include "py/gc.h"
#include "py/mpthread.h"
#include "utils.h"

#if MICROPY_ENABLE_GC

mp_uint_t gc_helper_get_regs_and_sp(mp_uint_t *regs);

void gc_collect(void) {
    static uint32_t collection_cnt = 0;
    printf("Collection triggered %u\n", collection_cnt++);

    /* start the GC */
    gc_collect_start();

    printf("Collection started\n");

    /* get the registers and the sp */
    mp_uint_t regs[10];
    mp_uint_t sp = gc_helper_get_regs_and_sp(regs);

    fail(1);
    printf("Got registers\n");

    /*
     * Trace the stack, including the registers (since they live on the stack
     * in this function)
     */
    #if MICROPY_PY_THREAD
    #error "MICROPY_PY_THREAD not supported!"
    #else
    gc_collect_root((void**)sp, ((uint32_t)&_ram_end - sp) / sizeof(uint32_t));
    #endif /* MICROPY_PY_THREAD */

    printf("Collected roots\n");

    // trace root pointers from any threads
    #if MICROPY_PY_THREAD
    #error "MICROPY_PY_THREAD not supported!"
    #endif

    // end the GC
    gc_collect_end();

    printf("Collection %u ended\n", collection_cnt - 1);
}

#endif /* MICROPY_ENABLE_GC */
