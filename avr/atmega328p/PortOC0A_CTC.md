# Time / Counter 
    Output Pin
        OC0A : Output Compare pin A
        OC0B : Output Compare pin B 

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

## TCCR0A,B: Time/Counter Control Register A B
    TCCR0A: Time/Counter Control Register A
        | COM0A1| COM0A0 | COM0B1 | COM0B0 | - | - | WGM01 | WGM00 |
    TCCR0B: Time/Counter Control Register B
        | FOC0A| FOC0B | - | - | WGM02 | CS02 | CS01 | CS00 |

    - clock source
        bit [CS02:0] : select source
        CS02:0 = 0; =>the timer is stopped.
    - connting sequence
            WGM: waveform generation mode
    - TOV0: Timer OVerflow Flag 
        by the bit[WGM02:0]
        TOV0 can be used for generating a CPU interrupt

## TCNT0: Time/Counter Register
    8-bit
    compare from TCNT0 to OCR0 and so on
    if it get clock then increse ++TCNT0
    TCNT0: 0 ~ 255 count increse

    Normal Mode:
        TCNT0: set start up value to TCNT0 ~ 255 and then overflow

    CTC Mode: Clear Time and Compare
        MAX = 255, BOTTOM = 0, TOP = set
        (TCNT0: 0  ~ (OCR0 : set TOP value: TOP value == counter) then OCF0 <- 1

        - how to set OCR0 value
            oc0 pin : output wave port pin
            N : prescaler

            f_{oc0} = frac { f_{clk_i/o} } { 2 * N * ( 1+ OCR0) }

            OCR0(Max count vaule)  = frac {f_{clk-i/o}} { 2 * N * f_{oc0}} - 1
    - prescaler: 64, oc0 pin 1000 Hz wave output
        OCR0 = frac{16 000 000}{ 2 x 64 x 1000} - 1 = 125-1 = 124

    - how to 

        - TCCR0A bits
            | COM0A1| COM0A0 | COM0B1 | COM0B0 | - | - | WGM01 | WGM00 |
        - TCCR0B bits
            | FOC0A| FOC0B | - | - | WGM02 | CS02 | CS01 | CS00 |

        CTC Mode set: pin OC0A

            WGM02=0
            WGM01=1 
            WGM00=0

            COM0A1=0
            COM0A0=1

        Clock Select Bit
            CS02:0 CS01:0 CS00:0 -> No clock source
            CS02:0 CS01:0 CS00:1 -> clk_{i/o} / 1 : No prescaling 
            CS02:0 CS01:1 CS00:0 -> clk_{i/o} / 8 
            CS02:0 CS01:1 CS00:1 -> clk_{i/o} / 64
            CS02:1 CS01:0 CS00:1 -> clk_{i/o} / 256
            CS02:1 CS01:1 CS00:1 -> clk_{i/o} / 1024

## OCR0A,B : Out put Compare Register
    OCR0A : Output Compare Register A
        set TOP value OC0A pin
    OCR0B : Output Compare Register B
        set TOP value OC0B pin

## TIMSK0 : Time Interrupt MaSK register
    | - | - | - | - | - | OCIE0B | OCIE0A | TOIE0 |
    OCIE0B : Output Compare a math B Interrupt Enable
    OCIE0A : Output Compare a math A Interrupt Enable
    TOIE0  : Timer/Counter Overflow Interrupt Enable

## TIFR0 : Time/Counter 0 Interrupt Flag Register
    | - | - | - | - | - | OCF0B | OCF0A | TOV0 |
    OCF0B : Output Compare B match Flag
    OCF0A : Output Compare A match Flag
    TOV0  : Timer/Counter 0 Overflow Flag

### CTC Mode
        - TCCR0A bits
            | COM0A1| COM0A0 | COM0B1 | COM0B0 | - | - | WGM01 | WGM00 |
        - TCCR0B bits
            | FOC0A| FOC0B | - | - | WGM02 | CS02 | CS01 | CS00 |
    TCCR0A <- 0b_0000_0000
    TCCR0B <- 0b_0000_0000

    Toggle Compare Method in pin OC0A :
        COM0A1 <- 0
        COM0A0 <- 1
            | 0 | 1 | COM0B1 | COM0B0 | - | - | WGM01 | WGM00 |
    Clock Select
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
    TIFR0
        | ~ | OCF0B | OCF0A | TOV0 |
        check OCF0A <- 1

        No using interrupt:
            if (TIFR0 & 0b_0000_0010 == 0b_0000_0010)
            if !(TIFR0 & 0b_0000_0010)

        Using Interrupt:
            TIMSK0 : Timer Interrupt Mask
                | ~ | OCIE0B | OCIE0A | TOIE0 |
            TIMSK0 <- 0b_0000_0010


    CTC Mode:
        WGM02 <- 0
        WGM01 <- 1
        WGM00 <- 0
            | 0 | 1 | COM0B1 | COM0B0 | - | - | 1 | 0 |
            | FOC0A| FOC0B | - | - | 0 | 0 | 1 | 1 |

        TCCR0A : 0b_0100_0010
        TCCR0B : 0b_0000_0011

    16 Mhz
        OCR0   : frac{16 000 000}{ 2 x 64 x 1000} - 1 = 125-1 = 124
        OCR0   : frac{16 000 000}{ 2 x 256 x 1000} - 1 = ?
