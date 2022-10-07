/*
    GPIO    : general purpose Input Output
    PIO     : programmed I/O
            PIOs are basically versatile I/O coprocessors 
                that can very precisely manapulate the GPIOs. 
            these coprocessors have their own instruction set, and
                the Pico SDK even builds an assembler
                    that spits out PIO machine code as a C header file.
            but there's a much simpler path to the GPIOs,
                through the Single-cycle I/O(SIO) interfaces on the Cortex-M0=s.

    SIO     : Single-cycle I/O interface
            this id basically  an alternate system bus for simple peripherals.
            transactions to certain addresses get routed to this auxiliary bus,
                which in out case contains our GIPO data registers.
    MUX     : PIO, SIO system can control the GPIO pins,
            there's some sort of mux on the chip
                to decide which one is in control at any time.
            RP2040 can be up to 9 different subsystems in contorl,
            each pin can be controlled by a different subsystem at any given time.
            How to configure one of thoese muxes to control a pin using SIO. 
    Control Registers : for the nuxes are on the main system bus.
    pad registers : control things like 
                whether a prticular GPIO pin is connected to pull up/ pull down register, 
                whether the pin is used for input or output, and various other features.

*/

// .set == .equ
// APB (Advanced Peripheral Bus) 
.set APB_BASE, 0x40000000

.set RESETS_BASE, (APB_BASE + 0xc000)
.set RESETS_CTRL, (RESETS_BASE + 0x0)
.set RESETS_PADS_BANK0, (1 << 8)
.set RESETS_IO_BANK0, (1 << 5)
.set RESETS_DONE, (RESETS_BASE + 0x8)

.set IO_BANK0_BASE, (APB_BASE + 0x14000)
.set GPIO0_CTRL, (IO_BANK0_BASE + 0x004)
.set GPIO25_CTRL, (IO_BANK0_BASE + 0x0cc)
.set FUNTINON_SIO, 5

.set PADS_BANK0_BASE, (APB_BASE + 0x1c000)
.set PADS_GPIO0, (PADS_BANK0_BASE + 0x4)
.set PADS_GIIO25, (PADS_BANK0_BASE + 0x68)

.set SIO_BASE, 0xd0000000
.set GIPO_OUT, (SIO_BASE+0x10)
.set GPIO_OE_SET, (SIO_BASE + 0x24)

.cpu cortex-m0plus
.thumb

.global main
.thumb_func
main:

unreset:
    // take RESETS_PADS_BANK0 and RESETS_IO_BANK0 out of reset 
    ldr r1, =RESETS_CTRL
    ldr r0, [r1]
    ldr r2, =(RESETS_PADS_BANK0 | RESETS_IO_BANK0)
    bic r0, r0, r2 // bit clear : r0 && ~r2 (r2 의 해당 비트를 클리어시킴)
    str r0, [r1]

unreset_check_loop:
    ldr r1, =RESETS_DONE
    ldr r0, [r1]
    tst r0, r2
    beq unreset_check_loop

configure:
    // configure our GPIO pin to be driven by SIO
    ldr r0, =FUNTINON_SIO
    ldr r1, =GPIO0_CTRL
    str r0, [r1]

    // configure pad options, too
    ldr r0, =0x0
    ldr r1, =PADS_GPIO0
    str r0, [r1]

    // enable SIO output
    ldr r0, =0xffffffff
    ldr r1, =GPIO_OE_SET
    str r0, [r1]

blink:
    // write to th pin via SIO
    ldr r3, =0xffffffff 
loop:
    ldr r1,=GPIO_OUT
    str r3, [r1]
    mvn r3, r3 // move negative

sleep:
    ldr r0, =0
    ldr r1, =0x100000

wait:
    add r0, r0, #1
    cmp r0, r1
    blo wait  // blo : branch lower
    b loop


