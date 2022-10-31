.set APB_BASE, 0x40000000
.set IO_BANK0_SEG, 0x14000
.set GPIO0_STATUS, 0x00
.set GPIO0_CTRL, 0x04
.set FUNC_SIO, 5
.set IO_QSPI_SEG, 0x18000
.set PADS_BANK0_SEG, 0x1c000
.set GPIO00, 0x04 // bit[31:8,7<OD>,6<IE>,5:4<DRIVE>,3<PUE>,2<PDE>,1<SCHMITT>,0<SLEFAST>] Input enable
.set IE, 6 // Input Enable
.set OD, 7 // Output Disable

.set SIO_BASE, 0xd0000000
.set CPUID, 0x000
.set SIO_IN, 0x004
.set SIO_OUT, 0x010 // [31:30,29:0<output level>]
.set SIO_OUT_SET, 0x014 // [31:30,29:0<output level>]
.set SIO_OUT_CLR, 0x018 // [31:30,29:0<output level>]
.set SIO_OE_SET, 0x024 // [31:30,29:0<pins>]
.set SIO_OE_CLR, 0x028 // [31:30,29:0<pins>]

.cpu cortex-m0plus
.thumb
main:
        // GPIO pin to be driven by SIO
    ldr r0, =FUNC_SIO
    ldr r1, =(APB_BASE + IO_BANK0_SEG + GPIO0_CTRL)
    str r0, [r1]

        // Input Enable clear, Output Disable clear
    ldr r0, =0x0
    ldr r1, =(APB_BASE + PADS_BANK0_SEG + GPIO00)

        // SIO Output enable set
    ldr r0, =0x00000001 // pin0 set
    ldr r1, =(SIO_BASE + GPIO_OE_SET)
    str r0, [r1]

    ldr r3, =0x01
loop:
    ldr r1, =(SIO_BASE + SIO_OUT)
    str r3, [r1]
    mvn r3,r3
sleep:
    ldr r0,=0
    ldr r1,=0x100000
wait:
    add r0, r0,#1
    cmp r0, r1
    blo wait
    b loop

