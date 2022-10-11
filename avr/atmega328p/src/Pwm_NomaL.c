#define F_CPU 16000000UL

int main(){
    *(volatile unsigned char*)0x24 = 0b00000010; // DDRB
    *(volatile unsigned char*)0x25 = 0x0; // PortB
    *(volatile unsigned char*)0x45 = 0b00000101; // TCCR0B
    *(volatile unsigned char*)0x46 = 10; // TCNT0
    for(;1;){
        while(!(*(volatile unsigned char*)0x35 & 1)); // TIFR0' TOV0
        *(volatile unsigned char*)0x25 ^= 1<<1;
        *(volatile unsigned char*)0x46 = 10; // TCNT0
        *(volatile unsigned char*)0x35 = 0x01; // TIFR0' TOV0 clear
    }
}
