#define F_CPU 16000000UL
int main(){

    // PB(0x23): DDRB(0x24): PB1 <- output 
    *(volatile char*)0x24 |= (1<<1);

    for(;1;){
        // PB(0x23): PORTB(0x25): PB0 <- high
        *(volatile char*)0x25 |= (1<<1);
        // PB(0x23): PORTB(0x25): PB2 <- high
        *(volatile char*)0x25 |= (1<<3);
    }
}
