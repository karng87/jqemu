;.equ SPH, 0x3E ; Stack Poniter High 
;.equ SPL, 0x3D ; Stack Pointer Low

.section .text

.ORG 0x00
    rjmp ISR_RESET 

.ORG 0x02
    rjmp ISR_EXT_INT0

.ORG 0x04
    rjmp ISR_EXT_INT1

.ORG 0x100
ISR_RESET:
    ldi r16, 0x08 ; SRAM DATA MEM: 
                    ; 0x00 ~ 0x1F <- 32 registers
                    ; 0x1F ~ 0x5F <- 64 I/O registers (for IN, OUT intruction)
                    ; 0x60 ~ 0xff <- 160 Ext I/O registers
                    ; 0x60 ~ 0x08ff <- 1018 * 8 internal SRAM
    
    out 0x3e, r16    ; str SPH+0x20, r 16
    ldi r16, 0xff   ; 0x08ff
    out 0x3d, r16
    ; SET SP

    ldi r16, 0b11111111 ; PD5 (0x23)
    sts 0x24, r16 ; DDRD5
    sts 0x25, r16 ; PORTD5

    ldi r16, 0b11111011     ; PD2 0x29
    sts 0x2A, r16           ; DDRD2: INPUT
    ldi r16, 0b00000100     ; PORTD2: high
    sts 0x2B, r16

    ldi r16, 0b00000001
    lds r17, 0x3d           ; EIMSK : [--|INT1|INT0]
    or r16, r17
    sts 0x3d, r16

    ldi r16, 0b00000010
    lds r17, 0x69           ; EICRA : [[--|ISC01|ISC00] faaling edge
    or r16, r17
    sts 0x69, r16

    sei

L:
    rjmp L

.ORG 0x200
ISR_EXT_INT0:
    lds r21, 0x25
    lds r22, 0b00100000
    eor r21, r22
    sts 0x25, r21
    reti

.ORG 0x300
ISR_EXT_INT1:
    reti
