#define F_CPU 16000000UL

signed char dirBit=0;
int main(){
/*
    If PORTxn is written logic one 
        when the pin is configured as an INPUT_PIN:
            the pull-up resistor is activated. 
*/
    // set INPUT_PIN: DDRD(0x2A): PD2(INT0): PD3(INT1):
    *(volatile unsigned char*)0x2a &= ~0b00001100;
    *(volatile unsigned char*)0x2b |=  0b00001100;

    // DDRB(0x24): PB0: PB1: PB2: PB3:
    *(volatile unsigned char*)0x24 |= 0b11111111;
    
    while(1){
        if(!(*(volatile unsigned char*)0x29 & 0b00000100)){ // PIND2 == 0
            ++dirBit;
            if(dirBit > 3) dirBit= 0;
        }else if(!(*(volatile unsigned char*)0x29 & 0b00001000)){ // PIND3 == 0
            --dirBit;
            if(dirBit < 0) dirBit=3;
        }
        *(volatile unsigned char*)0x25 = 1<<dirBit;
        for(volatile long i=0;i<0xffff;i++);
    }
}
