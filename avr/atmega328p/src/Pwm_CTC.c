#define F_CPU 16000000UL
int main(){
/* CTC: Clear Timer on Compare Match Mode

TCNT0: Timer Counter
TCNT1: TCNT1H: TCNT1L:
OCR0A:
OCR0B:
OCR1A: OCR1AH: OCR1AL:
0: 8-bit
1: 16bit
    T1 PIN 이나 내부 클럭이 반전될때마다 값을 증가시킨다.

NORMAL_MODE: TCNT1 초기값을 바꿔서 Max 까지 증가시킨다.
CNT: TCNT1  값이 OCR1A: , OCR1B: 값과 일치되면 TCNT1: 값을 clear 시켜서 0 부터 세게 만든다. 

 *TCCR0A : Timer/Counter Control Register pin 0  A
            0x44
 * TCCR0B : Timer/Counter Control Register pin 0  B
            0x45
 * OCR0A  : Output Compare Regiser pin 0 A
            0x47
 * TIFR0  : Timer Interrupt Flag Regiser0
            0x35

 * DDD6 : Timer Interrupt Flag Regiser0
            0x2A
        PD6 <- 1

        TCCR0A : 0b_0100_0010
        TCCR0B : 0b_0000_0011
        OCR0A <- 124 , prescalar 64 , output hz <- 1KHz
*/
    *(volatile unsigned char*)0x2A = 0b01000000; // DDRD6 = OC0A
    *(volatile unsigned char*)0x44 = 0b01000010; // TCCR0A toogle mode and CTC mode
    *(volatile unsigned char*)0x45 = 0b00000101; // TCCR0B set prescalar  and CTC mode
    *(volatile unsigned char*)0x47 = 200;        // OCR0A(0x47:clear time mode) vs TCNT0(0x46:normal mdoe)
    for(;1;){
        while( !(*(volatile unsigned char*)0x35 & 0x2)) ;  // TIFR0:[3:0]:1:OCF0A
        *(volatile unsigned char*)0x35 = 0x1;   // reset TIFR0
        *(volatile unsigned char*)0x47 = 200;   // OCR0A
    }
    return 0;
}
