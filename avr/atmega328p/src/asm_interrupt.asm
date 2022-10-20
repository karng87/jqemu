/*

ROM:
    Flash Memory(32K:0x7d00): page 단위로만 쓰고 지울 수 있다.
        - all program instruction(per page) are 16-bits or 32-bits
        - 0x3fff = 16383 = 16 * 1000

        +---------------------------------------------+
        | 0x0000 ~       | Application Flash Section  |
        |       ~ 0x3fff | Boot Flash Section         |
        +---------------------------------------------+

        - boot code section with independent lock bits

    EEPROM(1K:0x400): byte 단위로 쓰고 지울수 있다.
        program data(per byte)
        
RAM:
    DRAM: for data 
    SRAM: for register
        - 2K(0x1000) - internal SDRAM
       +------------------------------------------------+
       | 0x0000 ~ 0x001f | 32(0x20)  Register           |
       | 0x0020 ~ 0x005f | 64(0x40)  I/O register       |
       | 0x0060 ~ 0x00ff | 160(0xA0) Ext I/O register   |
       | -----------------------------------------------
       | 0x0100 ~ 0x08ff | internal SRAM(2048-0x7ff)    |
       +------------------------------------------------+

       - All I/O location
            - LD/LDS/LDD, ST/STS/STD  with 32 general purpose registers
        0x00 ~ 0x1f: SBI, SBIC,SBIS(Skip BIt Set, CBI(Clear BIt)
                    only used on register containing such status flags

        0x00 ~ 0x3f: IN OUT <- When using the I/O specific commands
                     LD ST <-  When addressing I/O registers as DATA space, 0x20 must be added  
        0x60 ~ 0xff: LD/LDS/LDD, ST/STS/STD can be used only.
5 memory addressing mode
    1. Direct
    2. Indirect 
    3. Indirect with displacement
        - base address: Y,Z register
    4. Indirect with pre-decrement
        - X,Y,Z register
    5. Indirect with post-increment
        - X,Y,Z register
    - R26:R27 R28:R29 R30:R31
        - indirect addressing pointer registers
    
Memory-Mapped I/O
    - Memory and I/O share the same address space
    - I/O reads and writes are done in the same way as memory instruction
*/
;; GPRF: General Purpose Register File
       ; R0[0x00] ~ R31[0x1F]
       ; X: R26:R27
       ; Y: R28:R29
       ; Z: R30:R31

.equ SPH, 0x3e  ; Stack Poniter High 
.equ SPL, 0x3d  ; Stack Pointer Low
.equ SREG, 0x3f ; [ I, T, H, S, V, N, Z, C ] (0x00~0x3f):IN, OUT

.equ PINB, 0x3  ; 
.equ DDRB, 0x4  ;
.equ PORTB, 0x5 ;

.equ PINC, 0x6  ; 
.equ DDRC, 0x7  ;
.equ PORTC, 0x8 ;

.equ PIND, 0x9  ; 
.equ DDRD, 0xa  ;
.equ PORTD, 0xb  ;
.equ EICRA, 0x69 ; MEMORY MAPPED
.equ EIMSK, 0x1d

.section .text

.ORG 0x00
    rjmp ISR_RESET 

.ORG 0x02
    rjmp ISR_EXT_INT0

ISR_RESET:
    ldi r16, 0x08 ; SRAM DATA MEM: 
                    ; 0x00 ~ 0x1F <- 32 registers
                    ; 0x1F ~ 0x5F <- 64 I/O registers (for IN, OUT intruction)
                    ; 0x60 ~ 0xff <- 160 Ext I/O registers
                    ; 0x60 ~ 0x08ff <- 1018 * 8 internal SRAM
    
    out SPH, r16    ; str SPH+0x20, r 16
    ldi r16, 0xff   ; 0x08ff
    out SPL, r16
    ; SET SP

    ldi r16, 0b00111111 ; PB5 (0x23)
    IN r17, DDRB 
    or r16, r17
    out DDRB, r16 ; DDRB5

    ldi r16, 0b00110011 ; PB5 (0x23)
    IN r17, PORTB ; PORTD5
    or r16, r17
    OUT PORTB, r16

    ldi r16, 0b11111011  ; PD2 set input mode
    IN r17, DDRD
    and r16, r17
    OUT DDRD, r16



    ldi r16, 0b00000100     ; DDRD2: INPUT set pull up
    IN r17, PORTD; PORTD2: high
    or r16, r17
    OUT PORTD, r16

    ldi r16, 0b00000010     ; [--- ISC01:ISC00] <- 10 :falling edge in INT0
    LDS r17, EICRA
    or r16, r17
    STS EICRA, r16

    ldi r16, 0b00000001     ; [--- INT0] <- 1
    LDS r17, EIMSK          ; EIMSK : [--|INT1|INT0]
    or r16, r17
    STS EIMSK, r16

    SEI                 ; global interrupt enable

L:
    jmp L

ISR_EXT_INT0:
    IN r16, PORTB  
    LDI r17, 0b00111111
    EOR r16, r17
    OUT PORTB, r16
    reti
