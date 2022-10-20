/**** Memory ***
Flash Memory: 32K byte = 2^5 * 2^10 <- 2^15 <- need 16bit(0~15)
    SPM: Store Program Memory instruction
    - Space: Program Falsh Memory Space
        - boot program section
        - application program section
    
EEPROM: 1K byte
SRAM: 2K byte
    STACK
        - allocated in the general data SRAM.
        - the return address PC is stored on STACK

        SP: Stack Pointer Register
            - must initialize the SP in the reset routine
                reset routine: before interrupts and subroutines are excuted
            - is read/write acccessible in the I/O space.
                        
ALU - Arithmetic Logic Unit
    - bit-functions
    - logical-functions
    - arithmetic-functions

I/O Memory Space
    contains 64 addresses register files
        : for CPU peripheral funtions as control registers, SPI(Serial Programable Interface), and other I/O functions.
        : 0x20 ~ 0x5f - as the data space locations 
    0x60 ~ 0xff - extended I/O space
        : only 
         - ST: STore indirect
         - STS: STore Space direct
         - STD: STore with Displacement indirectly
         - LD: LoaD indirect
         - LDS: LoaD Space(direct)
         - LDD: LoaD with displacement indirectly.

   Stack Pointer
        - always points to the top of the stack
        - initial SP value equals the last address of the internal SRAM
            - PUSH 
            - CALL ICALL RCALL: return addr is pushed onto the stack with a subroutine call or interrupt
            - POP
            - RET RETI: return addr is poped from the stack with return form subroutine/interrupt
        - SPH SPL
            - is implemented as 2 8-bit registers in the I/O space
        - Stack
            - in the data SRAM
            - the Stack is mainly used for storing temporary data.
            - local variables
            - return address

   Status Register: SREG [ I | T | H | S | V | N | Z | C ]
        - contains info about the result of the most recently excuted arithmetic instruction
        - updated after all ALU operations
        - is not stored and restored when entering/returning an interrupt routine
            - must be handled by software
        - I : automatically set <- when reti is excuted

   General Purpose Register File:
       - R0[0x00] ~ R31[0x1F] : 
       - Register File
           32 x 8-bit General Purpose working Registers with single clock access time
           16-bit indirect address register pointers
               - r26:r27 X
               - r28:r29 Y
               - r30:r31 Z

Interrrupt:
    provices serveral different interrupt sources.
    have a program vector in a separate program memeory space
    - the lowest address
        by default, the lowest address in the program memory space are defined as the reset and interrupt vectors
    - the start of the boot flash section 
        MCUCR [ - | BODS | BODSE | PUD | - | - | iVSEl | IVCE ]

    RESET: Highest pirority interrupt vector

    - Type 1: triggered by an event that sets the interrrupt flag
    - Type 2: as long as the interrupt condition is present
*/

.equ iVAl, 0xffff
.equ iVal_h, 0xff
.equ iVal_l, 0xff
.section .text
.org 0x00 ; RESET vector ISR address the lowest address in program memory space

    LDI r16, 0b00111111 
    STS 0x24, r16 ; STore Space:16bit instruction address I/O(OFFSET):0x20, OUT 0x4, r16 (8bit)

    ldi r17, 0b00111000
    ldi r18, 0b00000111
L:
    STS 0x25, r18 ; OUT 0x5, r16
    call Delay10ms
    sts 0x25, r17
    call Delay10ms
    rjmp L ; relative jmp

Delay10ms:
    ldi r26, 0xff  ; r27:r26 == X
    ldi r27, 0xff 
    ldi r28, 0x0f
    ldi r29, 0x00
L1:
    sbiw r26,1 ; sbiw = substract imediate number word registers
    brne L1     ; branch not equal
    sbiw r28,1 ; sbiw = substract imediate number word registers
    brne L1
    nop
    ret
    

