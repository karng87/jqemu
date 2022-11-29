.cpu cortex-m0plus
.thumb

    //SCRATCH_Y(rwx) : ORIGIN = 0x20041000, LENGTH = 4k
    ldr r0, =0x20041000+(4*1024)
    mov sp, r0
    bl notmain
    b .

.thumb_func
.global PUT32
PUT32:
    str r1, [r0]
    bx lr

.thumb_func
.global GET32
GET32:
    ldr r0, [r0]
    bx lr

.global DELAY
.thumb_func
DELAY:
    sub r0, #1
    bne DELAY
    bx lr
