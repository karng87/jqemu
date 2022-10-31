# Time / Counter 
    Output Pin
        OC0A : Output Compare pin 0 A
        OC0B : Output Compare pin 0 B 

    “n” replaces 
        the Timer/Counter number, in this case 0
        0: 8-bit register
        1: 16-bit register
    “x” replaces 
        the output compare unit, in this case compare unit A or compare unit B.

    Normal: (STU(start up) ~ 255) -> overflow
        double buffered disabled

    CTC: Clear Timer on Compare ( 0 ~ Max) -> OCF0(set)
        OCR0x registers are double buffered
        double bufferd:
            The CPU has access to the OCR0x buffer register

    PWM: Pulse With Modulation
        OCR0x registers are double buffered disabled
            The CPU will access the OCR0x directly

## 8-bit Timer/Counter0
    2 independent output compre unit
    double buffered output compare register
    clear timer on compare match(auto reload)
    glitch[돌발] free, phase correct pulse width modulator
    variable PWM period
    Frequency generator
    3 independent interrupt sources(TOV0,OCF0A,OCF0B)

## TCCR0A,B (0x44, 0x45): Time/Counter Control Register A B
    TCCR0A(0x44): Time/Counter Control Register A
        | COM0A1| COM0A0 | COM0B1 | COM0B0 | - | - | WGM01 | WGM00 |
    TCCR0B(0x45): Time/Counter Control Register B
        | FOC0A| FOC0B | - | - | WGM02 | CS02 | CS01 | CS00 |

    - COMnxn : Compare Output Match
    - WGMn : Waveform Generator Mode 
    - CSn : Clock Select 

## TCNT0 (0x46) : Time/Counter Register
    compare from TCNT0 to OCR0 and so on
    if it get clock then increse ++TCNT0
    TCNT0: BOTTOM(0) ~ MAX(255) count increse

    Normal Mode:
        TCNT0: BOTTOM(0) ~ TCNT0(TOP) 

    CTC Mode: Clear Time and Compare
        TCNT0: OCR0 ~ MAX 

## OCR0A,B (0x47,0x48): Out put Compare Register
    OCR0A(0x47) : Output Compare Register A
        set TOP value OC0A pin
    OCR0B(0x48) : Output Compare Register B
        set TOP value OC0B pin

## TIMSK0 (0x6E) : Time Interrupt MaSK register
    | - | - | - | - | - | OCIE0B | OCIE0A | TOIE0 |
    OCIE0B : Output Compare a math B Interrupt Enable
    OCIE0A : Output Compare a math A Interrupt Enable
    TOIE0  : Timer/Counter Overflow Interrupt Enable

## TIFR0 (0x35) : Time/Counter 0 Interrupt Flag Register
    | - | - | - | - | - | OCF0B | OCF0A | TOV0 |
    OCF0B : Output Compare B match Flag
    OCF0A : Output Compare A match Flag
    TOV0  : Timer/Counter 0 Overflow Flag

### Normal Mode
        - TCCR0A(0x44) bits
            | COM0A1| COM0A0 | COM0B1 | COM0B0 | - | - | WGM01 | WGM00 |
        - TCCR0B(0x45) bits
            | FOC0A| FOC0B | - | - | WGM02 | CS02 | CS01 | CS00 |

    Clock Select : PreScaler
            TCCR0B bits
                | FOC0A| FOC0B | - | - | WGM02 | CS02 | CS01 | CS00 |
        - 64 prescaler
            CS02 <- 0 
            CS01 <- 1 
            CS00 <- 1 
            | FOC0A| FOC0B | - | - | WGM02 | 0 | 1 | 1 |
        - 256 prescaler
            CS02 <- 1 
            CS01 <- 0 
            CS00 <- 0 
            | FOC0A| FOC0B | - | - | WGM02 | 1 | 0 | 0 |
        - 1024 prescaler
            CS02 <- 1 
            CS01 <- 0 
            CS00 <- 1 

        -  0x45 
            | FOC0A| FOC0B | - | - | WGM02 | 1 | 0 | 1 |

    TIFR0 (0x35)
        | ~ | OCF0B | OCF0A | TOV0 |
        check (0x35) <- 1
        TOVn : Timer OVerflow



    Normal Mode:
        WGM02 <- 0
        WGM01 <- 0
        WGM00 <- 0
        - TCCR0A bits
            | COM0A1| COM0A0 | COM0B1 | COM0B0 | - | - | WGM01 ::0 | WGM00 ::0 |
        - TCCR0B bits
            | FOC0A| FOC0B | - | - | WGM02 ::0 | CS02 ::1 | CS01 ::0 | CS00 ::1 |

        PreScaler : 1024
            TCCR0B : 0b_0000_0101

    16 Mhz
        PreScaler :1024

        T = 1/f
        1/16MHz = 1/16000000 = 0.0000000625 sec
        1/16MHz * 1024 = 0.000064 sec
        0.000064 * 256 = 0.016384 sec 마다 반전
            256 - 256 = 0 부터 카운드 시작하면 반전됨(per 0.016384 sec)
            \therefore T = 0.016384 * 2
        0.000064 * 254 = 0.016256 sec 마다 반전
            256 - 254 = 2

