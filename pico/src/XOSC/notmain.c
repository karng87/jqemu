void put32(unsigned int, unsigned int);
unsigned int get32(unsigned int);

        #define XOR 0x1000
        #define SET 0x2000
        #define CLR 0x3000

#define hex(x,y) (0x ## x ## y)
#define PPB_BASE hex(e000,0000) // Processor Peripheral Bus
        // [31:17| 16:<COUNTFLAG> | 15:3 | 2:<CLKSOURCE> | 1:<TICKINT> | 0:<ENABLE> ]
    #define SYST_CSR  0xE010 // SysTic Control and Status Register
        #define count_flag_bit 16
    #define SYST_RVR  0xe014 // SysTic Reload Value Register
    #define SYST_CVR  0xe018 // SysTic Current Value Register
    #define SYST_CALB 0xe01c // SysTic Callibration Value Register


static void do_delay(unsigned int x){
    unsigned int ra;
    for( ra=0;ra<x;){
        if(get32(PPB_BASE + SYST_CSR) & (1<< count_flag_bit)) ra++; 
    }
}

static void clock_init(){
#define CLOCKS hex(4000,8000)
    #define REF_CTRL 0x30 // [ 6:5<AUXSRC> | 1:0<SRC> ]
        #define flag_src_1 0
            #define bit_rosc_clksrc_ph 0
            #define bit_clksrc_clk_ref_aux 1
            #define bit_xosc_clksrc 2
        
    #define SYS_CTRL 0x38 // [31:7 | 6:5<AUXSRC> | 4:2 | 1:0<SRC> ]
        #define flag_src 0
            #define bit_clk_ref 0
            #define bit_clksrc_clk_sys_aux 1
    #define SYS_RESUS_CTRL 0x78 //[31:17 | 16<CLEAR> | 15:13 | 12:<FRCE:force a resus> | 11:9 | 8:<ENABLE> 7:0<TIEOUT>]
    put32(CLOCKS + SYS_RESUS_CTRL,0);

#define XOSC hex(4002,4000) // eXternal OSCillator
    #define CTRL    0x00 // [23:12(12-0x_zzz<ENABLE> | 11:0(12-0x_zzz)<FREQ_RANGE>]
        #define flag_enable_23 12
            #define enable_bit 0xfab
            #define disable_bit 0xd1e
        #define flag_freq_range_11 0
            #define bit_1_15mhz 0xaa0
    #define STATUS  0x04 // [31:<STABLE> | 24:<BADWRITE> | 12:<ENABLED> | 1:0<FREQ_RANGE>]
        #define flag_stable 31
        //#define freq_range_flag 0
            #define bit_status_1_15mhz 0
    #define DORMANT 0x08 // 휴지상태의 잠든상태의
    #define STARTUP 0x0c //[20:<X4> | 13:0<DELAY>]
        #define delay_flag 0
    #define COUNT   0x1c
    put32((XOSC + CTRL),(bit_1_15mhz << flag_freq_range_11));
    put32((XOSC + STARTUP),(47 << delay_flag)); // straight from the datasheet
    put32((XOSC + CTRL + SET),(enable_bit << flag_enable_23));
    while(1){
        if(get32(XOSC + STATUS) & (1<<flag_stable)) break;
    }
    put32((CLOCKS + REF_CTRL),(bit_xosc_clksrc << flag_src_1));
    put32((CLOCKS + SYS_CTRL),(bit_clk_ref << flag_src));
}

int notmain(){
    unsigned int ra;
    clock_init();

#define RESETS hex(4000,c000)
    #define RESET (0x0) // [24<usbctrl>|23<uart1>|22<uart0>|21<timer>|20<tbman>|5<io_bank0]
        #define flag_io_bank0 5
    #define WDSEL (0x4)
    #define DONE  (0x8)
        //#define flag_io_bank0 5
    put32((RESETS+RESET+CLR),(1 << flag_io_bank0));
    while(1){
        if(get32(RESETS + DONE) & flag_io_bank0) break;
    }
    



    return 0;
}
