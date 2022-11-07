# Raspberry pi pico

## CHIP
    - processor 
        dual core M0pulus
    - DMA
    - Memory
    - Peripherals
        - AHB bus fabric
        - APB bus fabric
### CODE
    may be executed directly 
        from external memory 
        through a dedicated SPI,DSPI,QSPI
### DEBUG
    SWD interface

### Processor 0,1
    - Bus fabric - ...
    - SIO - GPIO
    - SWD - pin
    - Interrupt
### SIO
    Single-cycle I/O

### DMA
    DMA bus maters 
        are available to offload repetitive data transfer tasks form the process

### Bus Fabric
    - Core
    - DMA
    - USB
    - SRAM : 264k
    - ROM  : 16k
    - XIP  : FLASH 2M
    - PIO
    - Peripherals
    - AHB-Lite Spliter : Advanced High Bus
        - Flash XIP
        - PIO
        - USB
        - DMA
    - APB bridge : Advanced Peripherals Bus
        - Peripherals
            - Functions
            - atomic register access
                - 0x0000 : normal read write acess
                - 0x1000 : atomic XOR on write
                - 0x2000 : atomic bitmask set on write
                - 0x3000 : atomic bitmast clear on write


### SRAM [ Bus fabric - SRAM ]
    264k
        6 banks
            Bank0 ~ Bank3 : 256k (64k x 4)
            Bank4 ~ Bank5 : 4k ( 4k x 2)
    can contain code or data

### PIO [ Bus fabric - PIO - GPIO ]
    Programable GPIO
        flexible configurable PIO controllers
            can be used provide a wide variety of I/O functions

### Peripherals (Dedicated Hardware)
    fixed functions [ GPIO - Peripherals ]
        - Timer
        - SPI : [PL022 - GPIO]
        - UART: [PL011 - GPIO]
        - I2C : [DWI2C - GPIO]
        - PWM : [PWM   - GPIO]
        - SIO : [SIO - processor]
        - PIO : [PIO   - GPIO]
        - CLOCK GPIN: 
        - CLOCK GPOUT: 
        - USB OVCUR DET, USB VBUS DET, USB VBUS EN

        - ADC $ TS : Analog to Digital Converter
        - RTC

    Reset control
    Power-on state machine
    Sysctrl
    Sysinfo
    Watchdog

### Pins
    Crystal
    SWD
    GPIO(29:0)

    QSPI : 
        - flash device : with eXecute-In-Plase 
        - software-controlled GPIOs
    USB_DM
    USB_DP
    USB_VDD

    XIN : can also used as a single-ended CMOS clock input
    XOUT : connect a crystal to crystal oscillator
        - USB bootloader requires a 12MHz crystal or 12MHz clock input

    RUN : global asynchronous reset pin
        - low : Reset
        - high : run

    SWCLK
    SWDIO : Serial Wire Debug multi-drop bus

    GND : 

    VREG_VOUT: Voltage Regulartor output
    VREG_VIN: Voltage Regulartor input

### USB
    controller

### Clock
    PLL: Phase Locked Loop
    Crystal(I/O)
    Internal Oscillator
    
## Power-On State Machine

    removes the reset from various hardware blocks in a specific order. 
    Each peripheral in the power-on state machine 
        is controlled 
            by an internal rst_n active-low reset signal and 
        generates 
            an internal rst_done active-high reset done signal. 
    The power-on state machine 
        deasserts(=low) the reset to each peripheral, 
            waits for that peripheral to assert its rst_done and then 
            deasserts the reset to the next peripheral. 
    An important use of this 
        is to wait for a clock source 
            to be running cleanly in the chip 
                before the reset to the clock generators is deasserted. 
    This avoids potentially glitchy clocks being distributed to the chip.

    The power-on state machine 
        is itself taken out of reset 
            when the Chip-Level Reset subsystem 
                confirms that 
                    the digital core supply (DVDD) is powered and stable, and 
                    the RUN pin is high. 
    The power-on state machine 
        takes a number of other blocks out of reset at this point 
            via its rst_n_run output. 
    This 
        is used to reset things that need to be reset at start-up but 
        must not be reset if the power-on state machine is restarted. 
    This list includes: 
        • Power on logic in the ring oscillator and crystal oscillator
        • Clock dividers which must keep on running during a power-on state machine restart 
            (clk_ref and clk_sys)
        • Watchdog 
            (contains scratch registers which need to persist through a soft-restart of the power-on state machine)

# Power-On Sequence
### The power-on state machine sequence is as follows:
    • Chip-Level Reset subsystem deasserts power-on state machine reset 
        once 
        digital core supply (DVDD) 
            is powered and stable, and 
        RUN pin is high (rst_n_run is also deasserted at this point)

    • Ring Oscillator is started. 
        rst_done is asserted 
            once the ripple counter 
                has seen a sufficient number of clock edges 
                    to indicate the ring oscillator is stable

    • Crystal Oscillator reset is deasserted. 
        The crystal oscillator is not started at this point, 
        so rst_done is asserted instantly.

    • clk_ref and clk_sys clock generators 
        are taken out of reset. 
        In the initial configuration 
        clk_ref 
            is running from the ring oscillator with no divider. 
        clk_sys 
            is running from clk_ref. 
        These clocks are needed for the rest of the sequence to progress.

### The rest of the sequence is fairly simple, with the following coming out of reset in order one by one:

    • Reset Controller - used to reset all non-boot peripherals

    • Chip-Level Reset and Voltage Regulator registers 
        - used by the bootrom to check the boot state of the chip. 
        In particular, 
        the PSM_RESTART_FLAG flag in the CHIP_RESET register 
            can be set via SWD to indicate to the boot code 
                that there is bad code in flash and it should stop executing. 
        The reset state of the CHIP_RESET register 
            is determined by the Chip-Level Reset subsystem and 
            is not affected by reset coming from the power-on state machine

    • XIP (Execute-In-Place) 
        - used by the bootrom to execute code from an external SPI flash 

    • ROM and SRAM 
        - Boot code is executed from the ROM. 
        SRAM is used by processors and Bus Fabric.

    • Bus Fabric 
        - Allows the processors to communicate with peripherals

    • Processor complex 
        - Finally the processors can start running

The final thing to come out of reset is the processor complex. This includes both core0 and core1. Both cores will start executing the bootcode from ROM. One of the first things the bootrom does is read the core id. At this point, core1 will go to sleep leaving core0 to continue with the bootrom execution. The processor complex has its own reset control and various low-power modes which is why both the core0 and core1 resets are deasserted, despite only core0 being needed for the bootrom.
