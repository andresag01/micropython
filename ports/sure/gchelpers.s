    .syntax unified
    .thumb
    .text
    .align  2

@ uint gc_helper_get_regs_and_sp(r0=uint regs[10])
    .global gc_helper_get_regs_and_sp
    .thumb
    .thumb_func
    .type   gc_helper_get_regs_and_sp, %function
gc_helper_get_regs_and_sp:
    @ Store registers into given array
    @ str r4, [r0, #0]
    @ str r5, [r0, #4]
    @ str r6, [r0, #8]
    @ str r7, [r0, #12]
    stmia r0!, {r4, r5, r6, r7}

    @ STR only has 5 bits offset, so we need to manually increase the
    @ pointer before reaching the 32 byte offset limit
    @ mov r1, #16
    @ add r0, r0, r1

    @ There is not thumb STR instruction that can encode the high registers
    @ so we need to move them to the lower registers first
    mov r1, r8
    mov r2, r9
    mov r3, r10

    @ Store r8, r9 and r10 into the given array
    @ str r1, [r0, #0]
    @ str r2, [r0, #4]
    @ str r3, [r0, #8]
    stmia r0!, {r1, r2, r3}

    @ There is not thumb STR instruction that can encode the high registers
    @ so we need to move them to the lower registers first
    mov r1, r11
    mov r2, r12
    mov r3, r13

    @ Store r11, r12 and r13 into the given array
    @ str r1, [r0, #12]
    @ str r2, [r0, #16]
    @ str r3, [r0, #20]
    stmia r0!, {r1, r2, r3}

    @ Return the sp
    mov     r0, sp
    bx      lr

.end
