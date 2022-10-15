#define F_CPU 16000000UL

volatile unsigned flag = 0;

int main(){
        // DDRB 0,1,2,3 OUTPUT
    *(volatile unsigned char*)0x24 |= 0b00001111;

        //sei(); SREG(7): set I(7): disable 
    *(volatile unsigned char*)0x5f &= ~(1<<7); // SREG(0x5f):

        // DDRD(0x2A): ( PD2: PD3: ) <- INPUT_MOD(0):
    *(volatile unsigned char*)0x2A &= 0b11111001;

        // PORTD(0x2B): ( PD2: PD3: ) <- using internal PULL_UP(1):
    //*(volatile unsigned char*)0x2B |= 0b00000110;

        //EIMSK(0x3d): INT(1~0): enable;
    *(volatile unsigned char*)0x3d |= 0b00000011;
        //EICRA(0x69): rising edge(11) sensor ;
    *(volatile unsigned char*)0x69 |= 0b00001010; // EICRA(0x69): rising edge(11) falling edgge(10)

    //sei(); SREG(7): set I(7) enable
    *(volatile unsigned char*)0x5f |= (1<<7); // SREG(0x5f):

    while(1){
        *(volatile unsigned char*)0x25 = 0b00001111;
        for(unsigned long l=0;l<0xfffff;l++);
    }
}

void __vector_1(void) __attribute__ ((__signal__, __used__, __externally_visible__));
void __vector_1(void){
    *(volatile unsigned char*)0x25 ^= 0b00000011;
    for(unsigned long l=0;l<0xfffff;l++);
}
void __vector_2(void) __attribute__ ((__signal__, __used__, __externally_visible__));
void __vector_2(void){
    *(volatile unsigned char*)0x25 ^= 0b00001100;
    for(unsigned long l=0;l<0xfffff;l++);
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
