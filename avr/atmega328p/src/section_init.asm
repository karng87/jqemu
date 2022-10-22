.section .init1, "ax",@progbits ; a <- allocatable
                                ; x <- excutable
                                ; @progbits <- contain data

ldi r16, 0b00111111
out 0x4, r16
ldi r16, 0b00100001
out 0x5, r16
