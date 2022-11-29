#define hadd(x,y,z) ((x)+(y)+(z))
#define hex_reg(x,y,z,args...) (volatile unsigned int*)hadd(0x ## x ## 0000, 0x ## y, 0x ## z)
#define hex_base(x,y,args...) hex_reg(x,y,0)
#define bitshift(x,y,args...) ((x)<<(y))

int notmain(){
    *hex_reg(4000,c000,3000,<APB|RESETS||RESET+CLR>) =  bitshift(1,5,<set||IO_BANK0>);
    while(1){
        if(*hex_reg(4000,c000,08,<APB|RESETS||DONE|) & bitshift(1,5,<set||IO_BANK0>)) break;
    }
    *hex_reg(d000,0000,028,<SIO||GPIO|OE|CLR>) = bitshift(1,25,<set||GPIO:25:pin>);
    *hex_reg(d000,0000,018,<SIO||GPIO|OUT|CLR>) = bitshift(1,25,<set||GPIO:25:pin>);

    *hex_reg(4001,4000,cc,<APB|IO_BANK0|CTRL|25GPIO>) = bitshift(5,0,<SIO_FUNC:5||FUNCSEL:0~5>);

    *hex_reg(d000,0000,24,<SIO|GPIO|OE_SET>) = bitshift(1,25,<enable:1||GPIO:25:pin>);

    while(1){
        //put32(SIO+OUT+SIO_SET,high << pin25);
        *hex_reg(d000,0000,14,<SIO|GPIO|OUT_SET>) = bitshift(1,25,<high:1||GPIO:25:pin out set>);
        //delay(hex(10,0000));
        for(volatile unsigned int i=0;i<500000;i++);
        //put32(SIO+OUT+SIO_CLR,high<<pin25);
        *hex_reg(d000,0000,18,<SIO|GPIO|OUT_CLR>) = bitshift(1,25,<low:1||GPIO:25:pin out clear>);
        //delay(hex(10,0000));
        for(volatile unsigned int i=0;i<500000;i++);
    }
    return 0;
}
