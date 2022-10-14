#include<avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 16000000UL
int main(){

        // DDRB(0x24): ( PB0: PB1: PB2: PB3: ) <- OUTPUT_MOD(1):
    *(volatile unsigned char*)0x24 = 0b00001111;

        // DDRD(0x2A): ( PD2: PD3: ) <- INPUT_MOD(0):
    *(volatile unsigned char*)0x2A &= ~(1<<2 | 1<<3);

        // PORTD(0x2B): ( PD2: PD3: ) <- using internal PULL_UP(1):
    *(volatile unsigned char*)0x2B |= (1<<2 | 1<<3);;

    //EIMSK(0x3d): INT(1~0): enable;
    *(volatile unsigned char*)0x3d |= (1<<0 | 1<<1);
    //EICRA(0x69): rising edge(11) sensor ;
    *(volatile unsigned char*)0x69 |= 0b00001111; // EICRA(0x69): rising edge(1:1)

    //sei(); SREG(7): set I(7) enable
    *(volatile unsigned char*)0x5f |= (1<<7); // SREG(0x5f):

    while(1){
        for(int i=1; i<0b00010000; i=i<<1){
            for(unsigned long d=0;d<0xfffff;d++){
                *(volatile unsigned char*)0x25 = i;
                for(unsigned long d=0;d<0xfffff;d++);
            }
        }
    }
}
/*
void __vector_1(void) __attribute__ ((__signal__, __used__, __externally_visible__));
void __vector_1(void){
    *(volatile unsigned char*)0x25 = 1;
    for(unsigned long d=0;d<0xfffff;d++);
}
void __vector_2(void) __attribute__ ((__signal__, __used__, __externally_visible__));
void __vector_2(void){
    *(volatile unsigned char*)0x25 = 2;
    for(unsigned long d=0;d<0xfffff;d++);
}
/*
ISR(INT0_vect){
    *(volatile unsigned char*)0x25 = 1;
    for(unsigned long d=0;d<0xfffff;d++);
}
ISR(INT1_vect){
    *(volatile unsigned char*)0x25 = 2;
    for(unsigned long d=0;d<0xfffff;d++);
}
*/
