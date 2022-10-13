.equ F_CPU 16000000
.text
.global main
    .org 0x0000 ; change interrupt vector table to INT0 ISR
    rjmp main   ; goto main -> ISR for main
    rjmp INT0_vect  ;goto EXT_INT0 -> ISR for INT0(external INT) pin

INT0_vect:
    ldi r16, 0x20
    out 0x25, r16
    reti


