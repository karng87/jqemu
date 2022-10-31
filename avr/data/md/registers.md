# Registers
    are special storage
        LSB(least significant bit): start with 2^0
## The special Character
    - can be used directly in assembler commands.
    - operations with their content
        require only a single command word.
    - they are connected directly to the central processiong unit(ALU)
        called the accumulator.
    - they are souce and target for calculations.

## Status Register
최근에 실행된 Arithmetic instruction 결과에 대한 정보를 표시한다.
이 정보는 Program 흐름을 바꾸는 Conditional Operations 에 사용 할 수 있다.
모든 ALU 연산에 의하여 Status Register 가 Update 된다.

    SREG - Status Register

    - C(bit 0) : carry flag
    - Z(bit 1) : zero
    - N(bit 2) : negative
    - V(bit 3) : 2's complement overflow
    - S(bit 4) : signed  bit
    - H(bit 5) : half carry flag(bcd arithmetic)
    - T(bit 6) : bit copy storage
            BLD : bit load
            BST : bit store
    - I(bit 7) : global interrupt enable bit

## R16 ~ R31
Only this register(r16~r31) can load a constant immediately with the LDI command
there is one exeption from that rule:
    setting a register to Zero is valid for all registers.

## Pointer Registes
    - R26:R27
        extra name: X
            R26: XL
            R27: XH
            X+ : evaluate and then increse 1 to X
            -X : decrese 1 to X and then evaluate
        16-bit into SRAM location
    - R28:R29
        extra name: Y
            R28: YL
            R29: YH
        16-bit into SRAM location
    - R30:R31
        extra name: Z
            R30: ZL
            r31: ZH
        16-bit into SRAM location
        16-bit into Program Memory

## MCU Control Register
    - the MCUCR consits of a number of single controll bits
        that control the general property of the chip.
        it is a port, fully packed with 8 control bits their own names(ISC00,ISC01..)
    - how to send a AVR to a deep sleep
```
        LDI r16, 0b00100000 ; load r16 from the constant that set the sleep enable bit(SE)
        OUT MCUCR, r16      ; OUT: brings the contents of r16
        SLEEP               ; now work sleep instruction
```
        
## Instructions
    - CBR Rx,M  ; Clear all bit in register Rx that are set 
                ; to one within the constant mask valule M
    - SBR Rx,M  ; Set all bit in regiser Rx that ..

    - CPI Rx,K  ; Compare the contents of the register Rx with a constant value K. 

## Assembler directives
always start with a dot in column 1 of the text

## Assembler instructions
do never start in column 1, they are always proceeded by a tab or blank character!


    
