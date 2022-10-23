#define F_CPU 16000000UL
#define PINB (volatile unsigned char*)0x23
#define DDRB (volatile unsigned char*)0x24
#define PORTB (volatile unsigned char*)0x25

#define PIND (volatile unsigned char*)0x29
#define DDRD (volatile unsigned char*)0x2a
#define PORTD (volatile unsigned char*)0x2b

#define EIMSK (volatile unsigned char*)0x3d // [----|INT1|INT0]
#define INT0 0
#define INT1 1

#define EICRA (volatile unsigned char*) 0x69  // [----|ISC11|ISC10|ISC01|ISC00]
#define ISC00 0 // Interrupt Sense Control INI0
#define ISC01 1 // 00: low level 01:logical change 10:falling edge 11:rising edge
#define ISC10 2 // Interrupt sense Control INT1
#define ISC11 3

#define SREG 0x5f //[I|T|H|S|V|N|Z|C]
#define I 7 // Interrupt flag
#define T 6 // 
#define H 5 // Half Carry flag
#define S 4 // Sign bit
#define V 3 // Two's Complement oVerflow flag 
#define N 2 // Negative flag
#define Z 1 // Zero flag
#define C 0 // Carry flag

int main(){
    *DDRB |= 0b00111111;
    *PORTB  = 0b00100001;

    *DDRD &= 0b11110011; // pd2 pd3 : input  
    *PORTD |= 0b00001100; // pull up

    *EIMSK |= (1<<INT0 | 1<<INT1);
    *EICRA |= (1<<ISC00|0<<ISC01|1<<ISC10|0<<ISC11); // falling edgge(10)

    __asm__ volatile("sei" ::: "memory");
    //*SREG |= (<<7); // SREG(0x5f):

    while(1);
}

void __vector_1(void) __attribute__ ((signal,used,externally_visible));
void __vector_1(void){
    *PORTB ^= 0b00000111;
}

void __vector_2(void) __attribute__((interrupt)) __attribute__((used)) __attribute__((externally_visible));
void __vector_2(void){
    *PORTB ^= 0b00111000;
}
