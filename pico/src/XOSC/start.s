.cpu cortex-m0plus
.thumb

.global vector_table
vector_table:
.thumb_func
.global centry
centry:
    b reset
    .balign 4 ;@ b:byte align 4 byte align
    .word reset ;@ has to be offset 4
    .word loop
    .word loop
    .word loop

    .word loop
    .word loop
    .word loop
    .word loop

    .word loop
    .word loop
    .word loop
    .word loop

    .word loop
    .word loop
    .word loop
    .word loop

.thumb_func
reset:
    ldr r1, =0xe000ed08 ;@VTOR Vector Table Offset Register
    ldr r0, =vector_table
    str r0, [r1]

    ldr r0, =0x20042000 ;@ SRAM_Y end
    mov sp, r0
    bl notmain
    b loop
.thumb_func
loop:
    b loop

.align
.ltorg ;@ Literal pool origin == reset literal pool for psseudo-intructions(ldr vldr wldr) literal pool

;@---------------
.balign 0x100 ;@ align b(byte number) cf)p2aling ( power of 2 align: 2^num align)

.thumb_func
put32:
    str r1,[r0]
    bx lr

.thumb_func
get32:
    ldr r0,[r0]
    bx lr
