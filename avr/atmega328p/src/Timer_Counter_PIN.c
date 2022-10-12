/*
==========================
@16bit @Timer/@Counter1 ==
==========================
------
- PIN: 
------
T1:  PIND5
    cf) T0: PIND4
OC1B: PINB2
OC1A: PINB1

-----------
- REGISTER: 
-----------

0x36 TIFR1: Timer Interrupt Flag Register 1
    | - | - | ICF1 | - | - | OCF1B | OCF1A | TOV1 |

    ICF1: Interrupt Capture Flag - ICP1: PINB0
    OCF1B: Output Compare Flag -   OC1B: PINB2 FOC1B: Focced Output Compare
    OCF1A: Output Compare Flag -   OC1A: PINB1 FOC1A: Forced Output Compare
    TOV1: Timer Overflow Flag - TCNT1:

0x80 TCCR1A:
    | COM1A1 | COM1A0| COM1B1 | COM1B0 | - | - | WGM11 | WGM10 |
    COM1A1: Compare Output Mode for channel A 
    COM1A0: Compare Output Mode for channel A
    COM1B1: Compare Output Mode for channel B 
    COM1B0: Compare Output Mode for channel B

    WGM11: Waveform Generation Mode
    WGM10: Waveform Generation Mode

0x81 TCCR1B:
    | ICNC1 | ICES1 | - | WGM13 | WGM12 | CS12 | CS11 | CS10 |
    ICNC1: Input Capture Noise Canceler1 - ICP1: Input Capture Pin
    ICES1: Input Capture Edge Select1 - ICP1: ICR1:Input Capture Register ICF1: flag
    WGM13: 
    WGM12: cf) WGM10: WGM11: in TCCR1A
    CS12: Clock Select
    CS11:
    CS10:

0x82 TCCR1C:
    | FOC1A | FOC1B | - | - | - | - | - | - |
    FOC1A: Force Output Compare for Channel A
    FOC1B: Force Output Compare for Channel B
    
0x85 TCNT1H:
0x84 TCNT1L:
    combinded TCNT1: OCR1:

0x89 OCR1AH:
0x88 OCR1AL:

0x8B OCR1BH:
0x8A OCR1BL:

0x87 ICR1H: Input Capture Register1
0x86 ICR1L: Input Capture Register1

0x6F TIMSK1: Timer Interrupt Mask Register
    | - | - | ICIE1 | - | - | OCIE1B | OCIE1A | TOIE1 |
    ICIE1: Input Capture Interrupt Enable
    OCIE1B: Output Compare B Match Interrupt Enable
    OCIE1A: Output Compare A Match Interrupt Enable
    TOIE1: Timer Overflow Interrupt Enable
*/
