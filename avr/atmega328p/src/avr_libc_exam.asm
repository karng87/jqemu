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

#include <avr/io.h>
.equ PINB, 0x3

.equ DDRB, 0x4
.equ PORTB, 0x5

.equ PIND, 0x9
.equ DDRD, 0xa
.equ PORTD, 0xb
.equ PD5, 5
.equ PD6, 6
.equ OC0A, PD6 
.equ OC0B, PD5

.equ SREG, 0x3f
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

.section .text
.global main

main:
    rcall ioinit
1:
    rjmp 1b

ioinit:
    sbi DDRD, PD6  ; Set Bit Immediate cf) sbr, cbi cbr
    ldi r16, 1<<TOIE0; TIMSK0[--|OCIE0B|OCIE0A|TOIE0]] Timeer0 Overflow Interrupt Enable
    lds r17, TIMSK0 ; no use IN OUT
    or r16,r17
    sts TIMSK0, r16

    ldi r16, 0b00000000 ; Timer Counter Compare Register A
    in r17, TCCR0A ; [COM0A1|COM0A0|COM0B1|COM0B0|-|-|WGM01|WGM00] = 0b_0000_0000
    or r16,r17      ; Nomal Mode TCRR0A=0
    out TCCR0A, r16

    ldi r16, 0b101 ; 101 1024 prescaler, Timer Counter Comapare Register B
    in r17, TCCR0B ; [FOC0A|FOC0B|-|-|WGM02|CS02|CS01|CS00] = 0b_0000_0101 (set 1024 prescalar)
    or r16,r17
    out TCCR0B, r16
/*
    [prescalar] = 8
    [F_CPU] = 16Mhz
    [f_sys]: [F_CPU] / [prescalar] = 2Mhz,  [T_sys]: 1/2Mhz 
    [f_out]: 200khz, [T_out]: 1/200Khz
      _   _ 
    _| |_| |_
    \frac{d[TCNT]}{dt}=  [T_io]
    [TCNT] = 0 ~ 255 :: 8-bit , totla 256
    [T_overflow] = [T_sys]*256
        [T_sys]*[Tick]*2 = [T_out]
        [Tick] = [T_out]/([T_sys]*2)
            = [f_sys]*2/[f_out]

    (256 - [Tick]) ~ 255 => overflow

    need 2 times {T_out} pulse
    {T_io}/{T_out} =  N

*/
    ;ldi r16, 256 - ( ((16000000/8) *2) / 200000)
    ldi r16, 5 
    out TCNT0, r16
    sei
    ret

.global TIMER0_OVF_vect
TIMER0_OVF_vect:
    ;ldi r16, 256 - (16000000/8*2)/200000 + 8 ; fuzz=8 clocks in ISR until TCNT0 is set
    ldi r16, 9 ; fuzz=8 clocks in ISR until TCNT0 is set
    out TCNT0, r16
    in r0, SREG
    sbic PORTD, PD6 ; skip bit immediate clear
    rjmp 1f
    sbi PORTD, PD6 ; set bit immediate
    rjmp 2f

1:  cbi PORTD, PD6 ; clear bit immediate
    
2:
    out SREG, r0
    reti
    
.global __vector_default
__vector_default:
    reti
.end
    
