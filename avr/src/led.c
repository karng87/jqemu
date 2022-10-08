#include <avr/io.h>
#include <util/delay.h>

int main(){
    DDRB = 0xff;
    for(;1;){
        PORTB = 0xff;
        _delay_ms(500);
        PORTB = 0x0;
        _delay_ms(500);
    }
}

