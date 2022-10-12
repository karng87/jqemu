/*
@16-bit Fast PWM
    @_Register
TCCR1A:
TCCR1B:
TCCR1C:
    Fast PWM: 

TOP: stored inb the ICR1:  or OCR1:
BOTTOM: 0x00
MAX: 0xFFFF

TOV1: flag Set: on TOP:
        

OCR1A: OC1A pin, compare with the Timer/Counter value at all time
OCR1B: OC1B pin
ICR1: Input Capture Regiser 1(16-bit)

TCNT1: Timer CouNTer 1(16-bit)

DDRB: pin OC1A(PB1), pin OC1B(PB2)

TIMSK1:
TIFR1:

    @_Pin
T1: (PD5)The Timer/Counter can be clocked by an external clock source on the T1 pin
OC1A: PB1
OC1B: PB2
*/
