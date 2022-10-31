# GPIO:
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

