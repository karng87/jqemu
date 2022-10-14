int main(){
/*
    If PORTxn is written logic one 
        when the pin is configured as an INPUT_PIN:
            the pull-up resistor is activated. 
*/
    // set INPUT_PIN: DDRD(0x2A): PD2(INT0): PD3(INT1):
    *(volatile unsigned char*)0x2a &= ~(1<<2 | 1<<3);

    // set OUTPUT_PIN: DDRB(0x27): PD0: PD1: PD2: PD3:
    *(volatile unsigned char*)0x27 = (1<<0 | 1<<1 | 1<<2 | 1<<3);

}
