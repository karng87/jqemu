/*
Normal Mode
    Counting Direction : always up(incresementing)
    No Counter Clear
    BOTTOM(0x00) ~ TOP(0xff) :: 8-bit


    Waveform Generation Mode 
        0 << WGM02 | 0<<WGM01 | 0<< WGM00 = 0
    Compare Output MOde
        COM0A1 COM0A0

    clk_sys16Mh 2kh
    prescalar : 8
*/
.equ PINB, 0x3
.equ PD5, 5
.equ DDRB, 0x4
.equ PORTB, 0x5

.equ TIMSK0, 0x6e ;; over 0x3f can't use IN,OUT instrutions([0x20~0x5f] - 0x20)
.equ TOIE0, 0 ;; TIMSK0[-----|OCIE0B|OCIE0A|TOIE0] Timer Overflow Interrupt Enable
.equ OCIE0A,1 ; Output Comapare match A Interrupt Enable
.equ OCIE0B,2 ; Output Compare match B Interrupt Enable

.equ TCCR0A, 0x24 ; [{COM0A1|COM0A0}|{COM0B1|COM0B0}|-|-|{WGM01|WGM00}]
                    ; COM <- Compare Output Mode
                    ; WGM <- Wave Generate Mode
.equ TCCR0B, 0x25 ; [FOC0A|FOC0B|-|-|WGM02|CS02|CS01|CS00]
                    ; FOC <- Force Output Compare
.equ CS00,0 ; Clocl Select option 0
.equ CS01,1
.equ CS02,2

.equ TCNT0, 0x26 ; Timer CouNT 
.equ OCR0A, 0x27 ; Output Compare Register A
.equ OCR0B, 0x28 ; Output Compare Register B

.equ ICR1H,0x87 ; Input Capture Register High
.equ ICR1L,0x86 ; Input Capture Register Low

work = 16 ; alias register 
tmp = 17
inttmp = 19
intsav = 0

tmconst = (16000000)/(2*10000) ; 16Mh/100khx2 = 8 prescalar
fuzz = 8

.section .text
.global main
main:
    rcall ioinit

ioinit:
    sbi DDRB, PD5  ; Set Bit Immediate cf) sbr, cbi cbr
    ldi r16, 1<<TOIE0; TIMSK0[--|OCIE0B|OCIE0A|TOIE0]] Timeer0 Overflow Interrupt Enable
    lds r17, TIMSK0 ; no use IN OUT
    or r16,r17
    sts TIMSK0, r16

    ldi r16, 0b00000000 ; Timer Counter Compare Register A
    in r17, TCCR0A
    or r16,r17
    out TCCR0A, r16

    ldi r16, (1<<CS00|1<<CS02) ; 101 1024 prescaler, Timer Counter Comapare Register B
    in r17, TCCR0B
    or r16,r17
    out TCCR0B, r16

    lid r16, 256 - (16000000/8/200000)

     




    
