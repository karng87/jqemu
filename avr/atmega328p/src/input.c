#define F_CPU 16000000UL

char dir= 0;
int main(){
/*
    If PORTxn is written logic one 
        when the pin is configured as an INPUT_PIN:
            the pull-up resistor is activated. 
*/
    // set INPUT_PIN: DDRD(0x2A): PD2(INT0): PD3(INT1):
    *(volatile unsigned char*)0x2a &= ~0b00001100;
    *(volatile unsigned char*)0x2b |= 0b00001100;

    // DDRB(0x24): PD0: PD1: PD2: PD3:
    *(volatile unsigned char*)0x24 |= 0b00001111;
    
    while(1){
        if(!(*(volatile unsigned char*)0x29 & 0b00000100)){ // PIND2 == 0
            if(dir>3) dir= 0;
            else ++dir;
        } else if(!(*(volatile unsigned char*)0x29 & 0b00001000)){ // PIND3 == 0
            if(dir<0) dir=3;
            else --dir;
        }
        *(volatile unsigned char*)0x25 = 1<<dir;
        for(volatile unsigned long l=0;l<0x8ffff;l++);
    }
}
