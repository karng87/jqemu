.equ PINB,0x3
.equ DDRB,0x4
.equ PORTB,0x5
.section .init1, "ax",@progbits ; a <- allocatable
                                ; x <- excutable
                                ; @progbits <- contain data

ldi r16, 0b00111111
out DDRB, r16
ldi r16, 0b00100001
out PORTB, r16
