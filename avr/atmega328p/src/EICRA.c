#define F_CPU 16000000UL

#define __INTR_ATTRS __used__, __externally_visible__
void __vector_1(void) __attribute__ ((__signal__, __used__, __externally_visible__));
void __vector_1(void){
    *(volatile unsigned char*)0x25 |= (1<<0); // PORTB(0): high
    for(unsigned long l=0; l<0xFFFF00; l++);
}

void __vector_2(void) __attribute__ ((__signal__, __used__, __externally_visible__));
void __vector_2(void){
    *(volatile unsigned char*)0x25 |= (1<<1); // PORTB(1): high
    for(unsigned long l=0; l<0xFFFF00; l++);
}

/*
ISR(__vector_2){
    *(volatile unsigned char*)0x25 ^= 0x02;
    for(unsigned long l=0; l<100000; l++);
}
*/

int main(){

    // DDRB(0x24): ( PB0: PB1: PB2: PB3: ) <- OUTPUT_MOD(1):
    *(volatile unsigned char*)0x24 |= (1<<0 | 1<<1 | 1<<2 | 1<<3);

    // DDRD(0x2A): ( PD2: PD3: ) <- INPUT_MOD(0):
    *(volatile unsigned char*)0x2A &= ~(1<<2 | 1<<3);
    // PORTD(0x2B): ( PD2: PD3: ) <- PULL_UP(1):
    *(volatile unsigned char*)0x2B |= (1<<2 | 1<<3);

    //EIMSK(0x3d): INT(1:0): enable;
    *(volatile unsigned char*)0x3d = 0b00000011;
    //EICRA(0x69): rising edge(11) sensor ;
    *(volatile unsigned char*)0x69 = 0b00001010; // EICRA(0x69): rising edge(1:1)

    //sei(); SREG(7): set I(7) enable
    *(volatile unsigned char*)0x5f |= (1<<7); // SREG(0x5f):

    while(1){
        // PORTB: ( PB0: PB1: PB2: PB3: ) <- LOW(0):
        *(volatile unsigned char*)0x25 &= ~(1<<0 | 1<<1 | 1<<2 | 1<<3);    // PORTB(0x25): low
    }
}
