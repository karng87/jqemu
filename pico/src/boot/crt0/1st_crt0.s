.syntax unified
.cpu cortex-m0plus
.thumb


.section .vectors, "ax" // alocatable excutable
.align 2
.global __vectors
__vectors:
    .word 0x20042000
    .word reset

.thumb_func
.global reset
reset:
    bl main
    b hang

.thumb_func
hang: b .
