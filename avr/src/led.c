#include <avr/io.h>
#include <util/delay.h>

int main(){
    DDRB = 0x01;
    for(;1;){
        PORTB = 0b00000001;
        _delay_ms(500);
        PORTB = 0b00000000;
        _delay_ms(500);
    }
}

