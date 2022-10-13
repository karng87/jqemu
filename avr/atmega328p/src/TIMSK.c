/*

#define ISR(vector,..) \
    void vector(void) __attribute__ ((__signal__, __INTR_ATTRS_)) __VAR_ARGS__ ;\
    void vector(void)
    
define VECTOR(N) __vector_ ## N

ISR(_VECTOR(17){} == ISR(TIMER0_OVF_vect)
void __vector_17 (void) __attribute__ ((__signal__,__INTR_ATTRS_));
void __vector_17 (void) 
*/

#define F_CPU 16000000UL
#define Prescaler 1024// 1 : 16Mz = 1024: f; f = 16 * 1024 ; T = 1/16Mz * 1024= 8 msec
#define frequency 5 //  5Hz = (1024* 16Mhz ) * X(half frequency: up + down)
#define Used Overflow_Interrupt

void __vector_17(void) __attribute__ ((__signal__,__INTR_ATTRS));
void __vector_17(void){
    *(volatile unsigned char*)0x46 = 255; // TCNT0
    *(volatile unsigned char*)0x25 ^= 1;
}

int main(){
    // Normal Mode <- WGM01: WGM01: WGM00: 000 ;; TCCR0A(0x44): 0 TCCR0B(0x45): 0b_0000_0101
    // set prescalar 1024 <- CS02: CS01: CS00: 101 ;; TCCR0A(0x44): 0 TCCR0B(0x45): 0b_0000_0101
    // enable Timer Overflow Interrupt OCIE0B: OCIE0A: TOIE0: 001 TIMSK(0x6e): 0b_0000_0001
    // enable Global Interrupt SREG(0x5f): 0b1xxx_xxxx
    *(volatile unsigned char*)0x24 = 0b00000001; // DDRB
    *(volatile unsigned char*)0x45 = 0b00000101;
    *(volatile unsigned char*)0x6e = 0b00000001;
    *(volatile unsigned char*)0x5f |= 1<<7;
    while(1);
}
