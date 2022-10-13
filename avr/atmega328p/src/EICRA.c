/*
   EICRA(0x69): External Interrupt Control Register A
        | - | - | - | -| ISC11 | ISC10 | ISC01 | ISC00 | 
            00 ; low level
            01:  change
            10: falling edge
            11: rising edge
    
  EIMSK(0x3d): External Interrupt Mask
        | - - - - - | INT1 | INT0 |
        INT1: INT1 pin enable
        INT0: INT0 pin enable
  EIFR(0x3c): External Interrupt Flag Register
*/

#define F_CPU 16000000UL
void __vector_2(void) __attribute__ ((__signal__,__INTR_ATTRS));
void __vector_2(void){
    *(volatile unsigned char*)0x25 ^= 1<<1;
}
/*
ISR(_VECTOR(2)){
    *(volatile unsigned char*)0x25 ^= 1;
}
*/

int main(){
    *(volatile unsigned char*)0x69 = 0b00001111; // EICRA
    *(volatile unsigned char*)0x3d = 0b00000011; // EIMSK

    *(volatile unsigned char*)0x5f |= 1<<7; // SREG
    *(volatile unsigned char*)0x24 = 1<<1;
    *(volatile unsigned char*)0x25 = 0;

    while(1);
}
