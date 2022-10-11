#include <avr/io.h>

int main(){

    volatile char* Bpintoggle = (char *)0x23;
    volatile char* Bdirection = (char *)0x24;
    volatile char* Bdata = (char *)0x25;

    *(volatile char*)0x24 = 0b00000001;

    for(;1;){
        for(long i=0; i< 500000; i++){
            *(volatile char*)0x25= 0b00000001;
        }
        for(long i=0; i< 1500000; i++){
            *(volatile char*)0x25= 0;
        }
    }
}
