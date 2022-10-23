#define F_CPU 16000000UL
#define PINB 0x23
#define DDRB 0x24
#define PORTB 0x25

#define PIND 0x29
#define PD2 2
#define PD3 3
#define DDRD 0x2a
#define PORTD 0x2b

#define EECR 0x3f // [-|-|EEPM1|EEPM0|EERIE|EEMPE|EEPE|EERE]
#define EERE 0 // EE Rread Enable
#define EEPE 1 // EE Programmable Enable(Wriete)
#define EEMPE 2 // EE Master Programmable Enable
#define EERIE 3 // EE Ready Interrupt Enable
#define EEPM0 4 // EE Programmable Mode 1 2 
#define EEPM1 5 // 00: Erase and Write in one operation(atomic operatin)
                    // 01: Erase Only
                    // 10: Write Only

#define EEARH 0x42 // EE Address Register High: not used in atmega328p
#define EEARL 0x41 // 0 ~ 255,511,1023 

#define EEDR 0x40 // EE Data Register

signed char dirBit=0;
int main(){
    *(volatile unsigned char*)DDRD &= 0b11110011; // set input mode
    *(volatile unsigned char*)PORTD |= 0b11111111; // pull up 

    *(volatile unsigned char*)DDRB|= 0b00111111;
    *(volatile unsigned char*)PORTB|= 0;

    while(*(volatile unsigned char*)EECR & (1<<EERE)){
    } // [-:-:EEPM1:EEPM0:EERIE:EEMPE:EEPE:EERE]
    *(volatile unsigned char*)EEARL= 100; // EEAR: <= EEARH: EEARL:  EEprom Address Register
    *(volatile unsigned char*)EECR |= (1<<EERE); // EECR: set EERE: EEprom Control Register [-:-:EEPM1:EEPM0:EERIE:EEMPE:EEPE:EERE]
    dirBit = *(volatile unsigned char*)EEDR;

   

    while(1){
        if( !( *(volatile unsigned char*)PIND & (1<<PD2) ) ){ // PIND2 == 0 == pressed (pull up)
            ++dirBit;
            if(dirBit > 3) dirBit= 0;
            for(volatile int i=0;i<0xfff0;i++);
        }else if(!( *(volatile unsigned char*)PIND & (1<<PD3) )){ // PIND3 == 0 == pressed
            --dirBit;
            if(dirBit < 0) dirBit=3;
            for(volatile int i=0;i<0xfff0;i++);
        }

        *(volatile unsigned char*)PORTB = 1<<dirBit;
        while ( *(volatile unsigned char*)EECR & (1<<EEPE) ){
        } // is writing? EEPE
        *(volatile unsigned char*)EEARL= 100; // EEAR: EEARH: + EEARL:  EEprom Address Register
        *(volatile unsigned char*)EEDR = dirBit; // EEDR:
        *(volatile unsigned char*)EECR|= 1<<EEMPE; // EECR: set EEMPE:
        *(volatile unsigned char*)EECR|= 1<<EEPE; // EECR: set EEPE:

        for(volatile int i=0;i<0xfff0;i++);
    }
}
