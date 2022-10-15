#define F_CPU 16000000UL
void __vector_13(void) __attribute__((__signal__, __used__, __externally_visible__));
void __vector_13 (void)
{
    *(volatile unsigned char*)0x25 ^= 0b00100000;
    *(volatile unsigned int*)0x84 = 0xffff - (F_CPU/1024);
}

int main(){
    *(volatile unsigned char*)0x24 = 0b00100000;
    // TCNT1H and TCNT1L
    *(volatile unsigned int*)0x84 = 0xffff - (F_CPU/1024);
    // TCCR1A
    *(volatile unsigned char*)0x80 |= 0;
    // TCCR1B set Prescalar 1024
    *(volatile unsigned char*)0x81 |= 0b00000101;
    // TCCR1C 
    *(volatile unsigned char*)0x82 |= 0;

    // TIMSK1 set TOIE1
    *(volatile unsigned char*)0x6f |= 0b00000001;

    // SREG set I flag
    *(volatile unsigned char*)0x5f |= 0b10000000;

    while(1){
        ;;
    }

}
