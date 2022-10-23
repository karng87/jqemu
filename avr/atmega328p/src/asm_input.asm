/*
    SRAM
        0x0000 ~ 0x001f <- 32 genenral purpose working register
            SBI SBC
        0x0020 ~ 0x005f <- 64 IO Register space
            LDS STS; IN OUT
        0x0060 ~ 0x00ff <- 160 External I/O Register space
            LDS STS
        0x0100 ~ 0x08ff <- Internal SRAM: STACk HEAP
            LDS STS

        - Working register <-> IO space
            - LDS STS
        - [0x20 ~ 0x005f] - [0x20] : 0x00 ~ 0x3f: 64 IN Rd, addr OUT I/O, R
            PORTB
            ...
            ...
            0x3d[SPL]
            0xde[SPH]
            0x3f[SREG]

*/
.equ SREG, 0x3f ; upper bound in IN OUT
.equ SPH,  0x3e
.equ SPL,  0x3d

.equ SRAM_END, 0x8ff

.equ PINB,  0x03 
.equ DDRB,  0x04 
.equ PORTB, 0x05 

.equ PIND,  0x09 ; get PINDn input value
.equ DDRD,  0x0a ; if DDRDn == 0 then set input
.equ PORTD, 0x0b ; if PORTDn ==1 then internal pull up 

.equ SRAM_END, 0x3ff
.section .text
.org 0x0
    rjmp RESET

.org 0x100
RESET:

SET_STACK:
    ldi r16, 0x8
    OUT SPH, r16
    ldi r16, 0xff
    OUT SPL, r16

SET_INPUT_PD2:
    ldi r16, 0b11111011 ; set input pd2
    IN r17, DDRD
    and r16, r17
    OUT DDRD, r16

    ldi r16, 0b00000100 ; set pull up pd2
    IN r17, PORTD
    or r16, r17
    OUT PORTD, r16

SET_OUTPUT_PB012345:
    ldi r16, 0b00111111 ; set output
    IN r17, DDRB
    or r16, r17
    OUT DDRB, r16
    ldi r16, 0b00111111 ; light led
    IN r17, PORTB
    or r16, r17
    OUT PORTB, r16

L1:
    SBIS PIND,2 ; skip bit is set
    rjmp L1
    IN r16, DDRD
    ldi r17, 0b00111111
    eor r16, r17
    OUT DDRD, r16
    rjmp L1






    
