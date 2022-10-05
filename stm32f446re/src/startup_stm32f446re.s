.syntax unified
.cpu cortex-m4
.thumb

.word _sdata
.word _edata

.word _sbss
.word _ebss

.global vectors

.section .isr_vector,"a",%progbits @ a: allocatable %progbits: cotains either initialzed and instructions or instructions only
    .type vectors, %object
    .size vectors, .-vectors

vectors:
    .word _estack
    .word Reset_Handler

.section .text.Reset_Handler
    .weak Reset_Handler
    .type Reset_Handler, %function

Reset_Handler:
    movs r1, #0     @ movs: movs(status register)update APSR(application program  register
    b loop_copy_data @ b:branch

copy_data:
    ldr r3, = _sidata @ LoaD Register
    ldr r3, [r3,r1]   @ r3 = *(char)(r3+r1)
    str r3, [r0,r1]   @ *(char)(r0+r1) = r3
    @ adds: 
    @ s mean that apsr(application program status register) will be updated depending on the outcome of the instruction
    adds r1, r1, #4

loop_copy_data:
    ldr r0, = _sidata
    ldr r3, = _edata
    adds r2, r0, r1
    cmp r2, r3
    bcc copy_data       @ bcc: branch if Carry is Clear, r2-r3 > 0
    b loop_copy_data

clear_bss:
    movs r3, #0
    str r3, [r2], #4

loop_clear_bss:
    ldr r3, = _ebss
    cmp r2, r3
    bcc clear_bss

bl main

.size Reset_Handler, .-Reset_Handler

