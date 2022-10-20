#define F_CPU 16000000UL

int main(){
        // DDRB: 
    *(volatile unsigned char*)0x24 |= 0b00111111;
        // PORTB:
    *(volatile unsigned char*)0x25 = 0b00110101;

        // DDRD: PD2(INT0 PIN): and PD3(INT1 PIN): <- INPUT:
    *(volatile unsigned char*)0x2A &= 0b11110011;
        // PROTD: <- PULL_UP(1):
    *(volatile unsigned char*)0x2B |= 0b00001100;

        //EIMSK(0x3d): <- MASK: [- - - - - - INT1: INT0: ]
    *(volatile unsigned char*)0x3d |= 0b00000011;
        //EICRA(0x69): [ - - - - ISC11: ISC10: ISC01: ISC00: ]
    *(volatile unsigned char*)0x69 |= 0b00001010; // falling edgge(10)

    __asm__ __volatile__ ("sei" ::: "memory");
    //*(volatile unsigned char*)0x5f |= (1<<7); // SREG(0x5f):

    while(1);
}

void __vector_1(void) __attribute__ ((__signal__, __used__, __externally_visible__)) __attribute__ ((__interrupt__));
void __vector_1(void){
    *(volatile unsigned char*)0x25 ^= 0b00111111;
}

void __vector_2(void) __attribute__ ((__signal__, __used__, __externally_visible__)) __attribute__ ((__interrupt__));
void __vector_2(void){
    *(volatile unsigned char*)0x25 ^= 0b00111111;
}


/*
ISR(INT0_vect){
ISR(__vector_1){
    *(volatile unsigned char*)0x25 = 1;
    for(unsigned long d=0;d<0xfffff;d++);
}
ISR(INT1_vect){
ISR(__vector_2){
    *(volatile unsigned char*)0x25 = 2;
    for(unsigned long d=0;d<0xfffff;d++);
}
*/
