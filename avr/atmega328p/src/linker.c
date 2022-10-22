/*
    avr-gcc -Wl,
        : linker option
        -Wl,--section-start,.data=0x801100,
            : 0x800,000 (80만 hexa decimal) => real SRAM
            equ -Wl,-Tdata=0x800,060 : but gcc frontend setting 
        : __data_start
        : __data_end equ bss_start
        : __bss_start
        : __bss_end
        : __heap_start *(__malloc_heap_start)
        : __heap_end *(__malloc_heap_end)
        : *(__blkval)
                
RAM:
    @onboard_RAM
                    +-------------------------------------
         RAMEND ->  | 0x10ff     stack        
                    |            ...
                    |            SP         Stack Pointer
                    |            ...        __heap_end
                    |            ...        *(__brkval)
                    |            heap       
                    |            ...        __heap_start __bss_end
                    |            .bss
                    |            ...        __bss_start
         START ->   | 0x100      .data
                    +--------------------------------
    @external_RAM
        avr-gcc ... -Wl,--sectio-start,.data=0x801100,--defsym=_heap_end=0x80ffff
            : if only stack in internal ram 

        avr-gcc ... -Wl,--defsym=__heap_start=0x8020000,--defsym=__heap_end=0x803fff
                                +-------------------------------------
         exteernal ram end ->   | 0xffff     
                                |            
                                |            
                                |            
                                | 0x3fff     ---      __heap_end
                                |            ---      *(__brkval)
                                |            heap     
                                | 0x2000     ...      __heap_start __bss_end
                                |            
                                |           
         external ram start->   | 0x1100   
                                +-------------------------------------
         RAMEND ->              | 0x10ff     stack        
                                |            ...
                                |            SP         Stack Pointer
                                |            ...        
                                |            ...        __bss_end
                                |            .bss
                                |            ...        __bss_start
         START ->               | 0x100      .data
                                +--------------------------------

        
            
    avr-gcc -Wa,
        : assembly option

*/
/*
TEXT_SECTION:
    init()
    .init0 -> weakly bound to __init(),
              if user defines __init(),
              it will be jumped into immediately after a reset
    .init1
    .init2 -> weakly boud to initialize the stack, and to clear zero_reg(r1)
    .init3
    .init4
    .init5
    .init6 -> used for constructors in c++
    .init8
    .init9 -> jump into main()

    -----------------------------------------------
    exit()

    .finit9 -> whrere _exit() start
    .finit8
    .finit7
    .finit6 -> used for destruction in c++
    .finit5
    .finit4
    .finit3
    .finit2
    .finit1
    .finit0
    
*/
/*
void __attribute__((naked)) __attribute__((section(".init3"))) init(void){
    *(volatile unsigned char*)0x24 = 0b00111111;
    *(volatile unsigned char*)0x25 = 0b00011011;
}
*/
void init(void) __attribute__((naked)) __attribute__((section(".init3")));

int main(){}

void init(void){
    *(volatile unsigned char*)0x24 = 0b00111111;
    *(volatile unsigned char*)0x25 = 0b00010001;
}
