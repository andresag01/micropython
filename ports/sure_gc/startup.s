    .text
    .thumb
    .cpu cortex-m0

.word   0xFFFFFFFF   /* stack top address: Set to cause failure if misused */
.word   _start       /* 1 Reset */
.word   hang         /* 2 NMI */
.word   hang         /* 3 HardFault */
.word   hang         /* 4 MemManage */
.word   hang         /* 5 BusFault */
.word   hang         /* 6 UsageFault */
.word   hang         /* 7 RESERVED */
.word   hang         /* 8 RESERVED */
.word   hang         /* 9 RESERVED*/
.word   hang         /* 10 RESERVED */
.word   hang         /* 11 SVCall */
.word   hang         /* 12 Debug Monitor */
.word   hang         /* 13 RESERVED */
.word   hang         /* 14 PendSV */
.word   hang         /* 15 SysTick */
.word   hang         /* 16 External Interrupt(0) */
.word   hang         /* 17 External Interrupt(1) */
.word   hang         /* 18 External Interrupt(2) */
.word   hang         /* 19 ...   */


    .thumb_func
hang:
    b .

    .thumb_func
        .global sure_putchar
sure_putchar:
    /*
     * The simulator has repurposed the CPS thumb instruction to print to
     * STDOUT the character in r0
     */
    cpsid i
    bx lr

    .thumb_func
        .global fail
fail:
    svc 10

    .thumb_func
        .global _start
_start:
    /* Allocate 10KB of stack */
    mov r0, #10
    lsl r0, r0, #8
    wfi
    /*
     * Set the sp to the end of the object we just allocated (assume
     * descending stack)
     */
    mov r1, #10
    lsl r1, r1, #10
    add r0, r0, r1
    mov sp, r0
    /* Make sure we do not leave a copy of the stack lying around */
    mov r0, #0
    /* Execute the benchmark */
    bl main
    /* Terminate the simulation */
    bkpt 0

.end
