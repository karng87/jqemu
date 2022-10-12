
/*
0: 8bit A and B
1: 16bit A and B

   Fast PWM(Pulse Width Modular)
    @_Waveform_Generate_Mode_bits in Fast PWM
WGM02: 0
WGM01: 1 
WGM00: 1
    TCCR0A: [0x44] Timer/Counter Control Register 0A
        | COM0A1 | COM0A0 | COM0B1 | COMoB0 | - | - | WGM01 | WGM00 |
        | COM0A1 | COM0A0 | COM0B1 | COMoB0 | - | - | WGM01:: 1 | WGM00:: 1 |
    TCCR0B: [0x45] Timer/Counter Control Register 0B
        | FOC0A | FOC0B | - | - | WGM02 | CS02 |CS01 |CS00 |
        | FOC0A | FOC0B | - | - | WGM02:: 0 | CS02 |CS01 |CS00 |
    @_Comare_Output_Mode in Fast PWM
        - Non inverting Mode
COM0A1: 1
COM0A0: 0
    TCCR0A: [0x44] Timer/Counter Control Register 0A
        | COM0A1:: 1 | COM0A0:: 0 | COM0B1 | COMoB0 | - | - | WGM01:: 1 | WGM00:: 1 |
   
    @_Clock_Select bits to 1024 prescaler
CS02: 1
CS01: 0
CS00: 1
    TCCR0B: [0x45] Timer/Counter Register 0B
        | FOC0A | FOC0B | - | - | WGM02::0 | CS02:1 |CS01:0 |CS00:1 |

--------------------------------
    TCNT0: [0x46]Timer CouNTer Register
    OCR0A: [0x47] Output Comparee Register A
    OCR0B: [0x48] Output Comparee Register B

    TIFR0: [0x35] Timer Interrupt Flag Register
        : if set TIFR0 = 0x1 then cleared
        | - | - | - | - | - | OCF0B | OCF0A | TOV0 |
OCF0B: Output Comare Flag B match auto set bit
OCF0A: Output Comare Flag A match auto set bit
TOV0:  Timer OVerflow auto set bit

    TIMSK0: [0x6E] Timer Interrupt MaSK 0
        | - | - | - | - | - | OCIE0B | OCIE0A | TOIE0 |
*/

#define F_CPU 16000000UL

int main(){
    // 8bit Fast PWM none invert mode, prescaler = 1024
    *(volatile unsigned char*)0x44 = 0b10000011; // TCCR0A
    *(volatile unsigned char*)0x45 = 0b00000101; // TCCR0B
    //*(volatile unsigned char*)0x47 = 256/12;      // OCR0A 

    *(volatile unsigned char*)0x2A = 0b01000000; // DDRD6
    while(1){
        for(int i=0;i<256; i++){
            *(volatile unsigned char*)0x47 = i;      // OCR0A 
            for(unsigned long j=0;j<0xffffffff;j++);

        }
    }
        
}
