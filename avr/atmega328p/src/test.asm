.section .text
.global _start

_start:
LDI r16, 0b00100100

STS 0x24, r16 ; STore Space:16bit instruction address I/O(OFFSET):0x20, OUT 0x4, r16 (8bit)
STS 0x25, r16 ; OUT 0x5, r16
L:
    rjmp L

