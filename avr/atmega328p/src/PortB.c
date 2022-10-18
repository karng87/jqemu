#define F_CPU 16000000UL
int main(){

    // PB(0x23): DDRB(0x24): PB1 <- output 
    *(volatile char*)0x24 |= 0x00100000;

    for(;1;){
        // PB(0x23): PORTB(0x25): PB0 <- high
        *(volatile char*)0x25 |= 0b00100000;
        for(volatile unsigned int i =0 ; i< 0xffff;i++);
        *(volatile char*)0x25 |= 0b00000000;
        for(volatile unsigned int i =0 ; i< 0xffff;i++);
    }
}
