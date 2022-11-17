.cpu cortex-m0plus
.thumb

.thumb_func
.global put32
put32:
    str r1, [r0]
    bx lr

.thumb_func
.global get32
get32:
    ldr r0, [r0]
    bx lr

.global delay
.thumb_func
delay:
    sub r0, #1
    bne delay
    bx lr
