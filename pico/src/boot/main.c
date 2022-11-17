void put32(unsigned int, unsigned int);
unsigned int get32(unsigned int);
void delay(unsigned int);

#define hex(x,y) 0x ## x ## y
#define high 1
#define low 0

int main(){
        #define RESETS hex(4000,c000)
        #define RESET (0x0)
        #define WDSEL (0x4)
        #define DONE  (0x8)
        #define XOR (0x1000)
        #define SET (0x2000)
        #define CLR (0x3000)
        #define  io_bank0_bit (5)
    put32((RESETS + RESET + CLR), high << io_bank0_bit);
    while(1){
        if(get32(RESETS + DONE) & (high << io_bank0_bit)) break;
    }
        #define SIO hex(d000,0000)
        #define OUT (0x10)
        #define OE  (0x20)
        #define SIO_SET  0x4
        #define SIO_CLR  0x8
        #define SIO_XOR  0xc
        #define pin25 25

    put32(SIO+OE+SIO_CLR, high << pin25); // output disable pin 25
    put32(SIO+OUT+SIO_CLR, high << pin25); // turn off pin 25

        #define IO_BANK0 hex(4001,4000)
        #define STATUS_25 0xc8 
        #define CTRL_25 0xcc
        #define funcsel_bit 0
        #define func_sio 5

    put32(IO_BANK0 + CTRL_25,(func_sio<<funcsel_bit));

    put32(SIO+OE+SIO_SET, high << pin25);

    while(1){
        put32(SIO+OUT+SIO_SET,high << pin25);
        delay(hex(10,0000));
        put32(SIO+OUT+SIO_CLR,high<<pin25);
        delay(hex(10,0000));
    }

    return 0;
}
