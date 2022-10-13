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

#define F_CPU 16000000UL
int main(){
/*
   Mode 14 Fast PWM TOP: ICR1
        WGM13:WGM12:WGM11:WGM10: 1110 -> mode 14 Fast PWM (TOP <- ICR1)
        COM1A1:COM1A0: 10 -> non-inverting mode
        CS12:CS11:CS10: 101 -> 1024 Prescaler
        CS12:CS11:CS10: 011 -> 64 Prescaler
        PIN OC1A: PB1 <-> PORTB(0x25): DDRB(0x24): PINB(0x23):


    TCCR1A(0x80): |COM1A1::1|COM1A0::0|COM1B1|COM1B0| - | - |WGM11::1|WGM10::0|
    TCCR1B(0x81): |ICNC1|ICES1| - |WGM13::1|WGM12::1|CS12::0|CS11::1|CS10::1|
    TCCR1C(0x82): |FOC1A|FOC1B| - | - | - | - | - |
    OCR1A: OCR1AH(0x89): OCR1AL(0x88):
    ICR1: ICR1H(0x87): ICR1L(0x86):

    OC1A(PIN): DDRB(0x24)1

*/
    *(volatile unsigned char*)0x80 = 0b10000010; // TCCR1A 
    *(volatile unsigned char*)0x81 = 0b00011011; // TCCR1B
    *(volatile unsigned short*)0x88 = 625; // OCR1A
    *(volatile unsigned short*)0x86 = 65000; // ICR1A
    *(volatile unsigned char*)0x24 = 0b00000010; // OC1A == PB1 DDRB
    while(1);
}
