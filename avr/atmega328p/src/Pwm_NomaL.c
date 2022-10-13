#define F_CPU 16000000UL

int main(){
    *(volatile unsigned char*)0x24 = 0b00000010; // DDRB: +1 PINB: 0x23
    *(volatile unsigned char*)0x25 = 0x0; // PORTB: +2 PINB: 0x23 ::3,6,9

    *(volatile unsigned char*)0x44 = 0b00000000; // TCCR0A: 1024 prescaler
    *(volatile unsigned char*)0x45 = 0b00000101; // TCCR0B: 1024 prescaler
    *(volatile unsigned char*)0x46 = 10; // TCNT0
    for(;1;){
        while(!(*(volatile unsigned char*)0x35 & 1)); // TIFR0' TOV0
        *(volatile unsigned char*)0x25 ^= 1<<1; // PINB: 0x23
        *(volatile unsigned char*)0x46 = 10; // TCNT0
        *(volatile unsigned char*)0x35 = 0x01; // TIFR0' TOV0 clear
    }
}
