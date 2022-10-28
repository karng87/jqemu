#include <stdint.h>
/*
GPIO:
    - IO_BANK0: USER_BANK registers
        - IO_BANK0_BASE(0x40014000):
            - GPIO_STATUS(0x000): GPIO0_STATUS ~ GPIO29_STATUS
            - GPIO_CTRL(0x004): GPIO0_CTRL ~ GPIO29_CTRL
                - 0x004 ~ 0x0ec
                - | FUNCSEL: 4:0|(7:5)| OUTOVER: 9:8|11:10| OEOVER: 13:12|15:14| INOVER: 17:16|27:18| IRQOVER: 29:28|31:30|

            - INTR(0x0f0): INTR0 ~ INTR3 interrupt raw
            - PROC_INTE(0x100): PROCn_INTEm ~ PROC_INTE3 n:0->1,m:0->3 interrupt enable for proc0
            - PROC_INTF(0x110): PROCn_INTFm ~ PROC_INTF3 n:0->1,m:0->3 interrupt force for proc0
            - DORMANT_WAKE_INTE(0x160): DORMANT_WAKE_INTEn n:0->3

    - IO_QSPI: registers
        - IO_QSPI_BASE(0x40018000):
            - GPIO_QSPI_SCLK_STATUS(0x00): 
            - GPIO_QSPI_SCLK_CTRL(0x04): 
            - GPIO_QSPI_SS_STATUS(0x08): 
            - GPIO_QSPI_SS_CTRL(0x0c): 
            - GPIO_QSPI_SD0_STATUS(0x10): 
            - GPIO_QSPI_SD0_CTRL(0x14): 
            - GPIO_QSPI_SD1_STATUS(0x14): 
            - GPIO_QSPI_SD1_CTRL(0x1c): 
            - GPIO_QSPI_SD2_STATUS(0x20): 
            - GPIO_QSPI_SD2_CTRL(0x24): 
            - GPIO_QSPI_SD3_STATUS(0x24): 
            - GPIO_QSPI_SD3_CTRL(0x2c): 
            - INTR(0x30):
            - PROC0_INTE(0x34): inerrupt enable
            - PROC0_INTF(0x38): interrupt force
            - PROC0_INTS(0x3c): interrupt status
            - PROC1_INTE(0x40): inerrupt enable
            - PROC1_INTF(0x44): interrupt force
            - PROC1_INTS(0x48): interrupt status
            - DORMANT_WAKE_INTE(0x4c):
            - DORMANT_WAKE_INTF(0x50):
            - DORMANT_WAKE_INTS(0x54):

    - total 36 multi-functional GPIO pins
        - 2 BANKs: divided into 2 BANKs from 36 GPIO pins
    - can be controlled one of followed by 2 
        - by one of a number of Peripherals
        - by software control registers in the SIO

    - FSEL: ( Functon Select)
        - selects which peripheral output is in control of 
            the GPIO's direction
            OUTPUT level
            INPUT level
        - 3 signals
            - output level
            - output enable
            - input level
        - is selected by writing to the FUNSEL filed in the CPIO's CTRL register.

            - QSPI_BANK: (QSPI_SS: QSPI_SCLK: QSPI_SD(0~3): )
                - @functions
                    - SIO: (Single-cycle IO)
                    - XIP: (eXcute In Place)
            - IO_BANK0: USER_BANK: (GPIO0: ~ GPIO29: )
                - GPIO26: ~ GPIO29: <-> ADC: (Analoggue to Digital Converter)
                - @functions (GPIO0 ~ GPIO29)
                    - SIO: (Single-Cycle I/O)
                    - PIO: (Programmable I/O)
                    - SPI: (2 x Serial Peripheral Interface) 
                    - UART: (2 x Universe Asynchronous Reciever Transmitter)
                    - I2C: (2 x Inter Integrate Circuit - WSI: 2-wire serical interface)
                    - PWM: (8 x 2-channel Pulse Width Modulation)
                    - CLOCK_INPUT: (2 x external clock input)
                    - CLOCK_OUTPUT: (4 x general purpose clock output)
                    - ADC: (4 x input to ADC)
                    - USB_VBUS: 
                    - EXT_INT: external interrupt request
*/
/*
SIO(0x_d000_0000): Single-cycle I/O, using IOPORT_REGISTERS(0x_d000_0000):
    - contains serveral Peripherals 
    - is aceessed via processor's IOPORT:
        - can perform rapid 32-bit read and write
    - load store instruction
    - directed to IOPORT address segment 
        - 0x_d000_0000 ~ 0x_dfff_ffff
    - IOPORT_REGISTERS(0x_d000_0000):
        - CPUID(0x_000): core 0 <- 0, core 1 <- 1
        - GPIO_IN(0x_004): 0:29 input value [--|pin_29|~|pin_0|
        - GPIO_HI_IN(0x008): input value for QSPI pins
        - GPIO_OUT(0x010): GPIO output value |--|pin_29|~|pin_0|

        
    
*/

#define _REG_(x) // place holder to register

typedef volatile       uint32_t io_rw_32; // read write
typedef const volatile uint32_t io_ro_32; // read only
typedef volatile       uint32_t io_wo_32; // write only

enum gpio_function {
    GPIO_FUNC_XIP = 0,
    GPIO_FUNC_SPI = 1,
    GPIO_FUNC_UART = 2,
    GPIO_FUNC_I2C = 3,
    GPIO_FUNC_PWM = 4,
    GPIO_FUNC_SIO = 5,
    GPIO_FUNC_PIO0 = 6,
    GPIO_FUNC_PIO1 = 7,
    GPIO_FUNC_GPCK = 8,
    GPIO_FUNC_USB = 9,
    GPIO_FUNC_NULL = 0x1f,
};

typedef struct {
    io_ro_32 cpuid;
    io_ro_32 gpio_in;
    io_ro_32 gpio_hi_in;
    uint32_t _pad0;
    io_rw_32 gpio_out;
    io_wo_32 gpio_out_set;
    io_wo_32 gpio_out_clr;
    io_wo_32 gpio_togl;
    io_rw_32 gpio_oe;
    io_wo_32 gpio_oe_set;
    io_wo_32 gpio_oe_clr;
    io_wo_32 gpio_oe_togl;
    io_rw_32 gpio_hi_out;
    io_wo_32 gpio_hi_set;
    io_wo_32 gpio_hi_clr;
    io_wo_32 gpio_hi_togl;
    io_rw_32 gpio_hi_oe;
    io_wo_32 gpio_hi_oe_set;
    io_wo_32 gpio_hi_oe_clr;
    io_wo_32 gpio_hi_oe_togl;
    io_rw_32 fifo_st;
    io_wo_32 fifo_wr;
    io_ro_32 fifo_rd;
    io_ro_32 spinlock_st;
    io_rw_32 div_udividend;
    io_rw_32 div_udivisor;
    io_rw_32 div_sdividend;
    io_rw_32 div_sdivisor;
    io_rw_32 div_quotient;
    io_rw_32 div_remainder;
    io_ro_32 div_csr;
    uint32_t _pad1;
    interp_hw_t interp[2];
} sio_regs;

#define SIO_BASE 0xd0000000u // SIO function(F5) must be selected
#define sio_hw ((sio_regs*)SIO_BASE)
#define gpio 25

void gpio_set_function(uint gpio, enum gpio_function fn) {
    check_gpio_param(gpio);
    invalid_params_if(GPIO, ((uint32_t)fn << IO_BANK0_GPIO0_CTRL_FUNCSEL_LSB) & ~IO_BANK0_GPIO0_CTRL_FUNCSEL_BITS);
    // Set input enable on, output disable off
    hw_write_masked(&padsbank0_hw->io[gpio],
                   PADS_BANK0_GPIO0_IE_BITS,
                   PADS_BANK0_GPIO0_IE_BITS | PADS_BANK0_GPIO0_OD_BITS
    );
    // Zero all fields apart from fsel; we want this IO to do what the peripheral tells it.
    // This doesn't affect e.g. pullup/pulldown, as these are in pad controls.
    iobank0_hw->io[gpio].ctrl = fn << IO_BANK0_GPIO0_CTRL_FUNCSEL_LSB;
}
int main(){
    //gpio_init(25);
    // GPIO_OE_CLR(0x028): SIO_BASE
    //   sio_hw->gpio_oe_clr=1ul << 25;
    *(volatile uint32_t*)((0xd0000000) + (0x028)) |= 1<<25;

    // GPIO_OUT_CLR(0x018): SIO_BASE
    //sio_hw->gpio_clr=1ul << 25;
    *(volatile uint32_t*)((0xd0000000) + (0x018)) |= 1<<25;

    //gpio_set_function(25,GPIO_FUNC_SIO)


    gpio_set_dir(25, 1);
    for(;1;){
        gpio_put(25,1);
        sleep_ms(250);
        gpio_put(25,0);
        sleep_ms(250);
    }
    return 0;
}
