#define F_CPU 16000000UL

signed char dirBit=0;
int main(){
    // set INPUT_PIN: DDRD(0x2A): PD2(INT0): PD3(INT1):
    *(volatile unsigned char*)0x2a &= ~0b00001100;
    *(volatile unsigned char*)0x2b |=  0b00001100;

    // DDRB(0x24): PB0: PB1: PB2: PB3:
    *(volatile unsigned char*)0x24 |= 0b11111111;

        // EECR(0x3f): EEprom Control Register
    while(*(volatile unsigned char*)0x3f & 0b00000010); // [-:-:EEPM1:EEPM0:EERIE:EEMPE:EEPE:EERE]
    *(volatile unsigned int*)0x41 = 100; // EEAR: EEARH: + EEARL:  EEprom Address Register
    *(volatile unsigned char*)0x3f |= 0b00000001; // EECR: set EERE: EEprom Control Register [-:-:EEPM1:EEPM0:EERIE:EEMPE:EEPE:EERE]
    dirBit = *(volatile unsigned char*)0x40;

   

    while(1){
        if(!(*(volatile unsigned char*)0x29 & 0b00000100)){ // PIND2 == 0
            ++dirBit;
            if(dirBit > 3) dirBit= 0;
        }else if(!(*(volatile unsigned char*)0x29 & 0b00001000)){ // PIND3 == 0
            --dirBit;
            if(dirBit < 0) dirBit=3;
        }

        *(volatile unsigned char*)0x25 = 1<<dirBit;
        while (*(volatile unsigned char*)0x3f & 0b00000010); // is writing? EEPE
        *(volatile unsigned int*)0x41 = 100; // EEAR: EEARH: + EEARL:  EEprom Address Register
        *(volatile unsigned char*)0x40 = dirBit; // EEDR:
        *(volatile unsigned char*)0x3f |= 0b00000100; // EECR: set EEMPE:
        *(volatile unsigned char*)0x3f |= 0b00000010; // EECR: set EEPE:

        for(volatile long i=0;i<0x8fff;i++);
    }
}
