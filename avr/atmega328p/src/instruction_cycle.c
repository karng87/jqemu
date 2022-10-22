/*
@tweak: 살짝 꼬집다.
BRANCH
    
        

*/
#define F_CPU 16000000UL

#define PINB 0x23
#define DDRB 0x24
#define PORTB 0x25

#define SRAM_END 0x8ff

int main(){
    __asm__ __volatile__(
            "ldi r16,0b00111111\n"
            "in 0x4,r16\n"
            "in 0x5,r16\n"
            "L:   rjmp L\n"
            :::"r16");
    while(1);
}
