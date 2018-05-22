    .text
    .thumb
    .cpu cortex-m0

    .thumb_func
        .global malloc
malloc:
    /* Make a copy of the allocation size to check whether we need a +1 */
    mov r2, r0
    /* Convert from bytes to words */
    lsr r0, r0, #2
    /* Add +1 word if the size is not a multiple of 4-byte words */
    mov r1, #3
    and r2, r1
    beq .no_plus_1
    add r0, r0, #1
.no_plus_1:
    /* Allocate the requested memory */
    wfi
    bx lr

    .thumb_func
        .global free
free:
    /* Do nothing as the object is automatically collected */
    bx lr

.end
