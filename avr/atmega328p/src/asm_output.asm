.equ PINB, 0x03
.equ DDRB, 0x04
.equ PORTB, 0x05

.equ SPL, 0x3d
.equ SPH, 0x3e
.equ SREG, 0x3f

.equ SRAM_END, 0x08ff ; atmega328p

.section .text
.ORG 0x0
    rjmp RESET

.org 0x100
RESET:
    ldi r17, 0x08
    ldi r16, 0xff
    out SPH, r17
    out SPL, r16

    ldi r16, 0b00111111
    out DDRB, r16
L1:
    ldi r16, 0b00110011
    out PORTB, r16
    rcall delay

    ldi r17, 0b00111111
    eor R16, r17 
    out PORTB, R16
    rcall delay

    rjmp L1

delay:
    LDI R21,0xFF 
    LDI r22,0xff
    LDI r23,0xf
L2: 
    NOP
    NOP
    DEC R21
    BRNE L2
    dec r22
    brne L2
    dec r23
    brne L2

    RET


