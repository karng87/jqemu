//=========================
.set APH_BASE, 0x40000000
//=========================
.set APH_RESET_SEG, (APH_BASE + 0xc000)
//-------------------------------------
.set aph_RESET_CTRL, (APH_RESET_SEG + 0x0)
.set aph_RESET_CTRL_io_bank0, (1<<5)
.set aph_RESET_CTRL_pads_bank0, (1<<8)

//-------------------
.set aph_RESET_DONE, (APH_RESET_SEG + 0x08)
//-------------------

//-----------------------------------------
.set APH_IO_BANK0_SEG, (APH_BASE + 0x14000)
//-----------------------------------------
.set aph_io_bank0_GPIO00_CTRL, (APH_IO_BANK0_SEG + 0x04)
.set aph_io_bank0_GPIO25_CTRL, (APH_IO_BANK0_SEG + 0x0cc)
.set aph_io_bank0_GPIOxx_CTRL_func_sio, 5

//------------------------------
.set APH_PADS_BANK0_SEG, 0x1c00
//------------------------------
.set aph_pads_bank0_GPIO00_CTRL, (APH_PADS_BANK0_SEG + 0x04)
.set aph_pads_bank0_GPIO00_CTRL_od, (1<<7) // Output Disable
.set aph_pads_bank0_GPIO00_CTRL_ie, (1<<6) // Input Enable

.set aph_pads_bank0_GPIO25_CTRL, (APH_PADS_BANK0_SEG + 0x68)

//=========================
.set SIO_BASE, 0xd0000000
//=========================
.set sio_CPUID, (SIO_BASE + 0x00) 
.set sio_GPIO_OUT, (SIO_BASE + 0x10)
.set sio_GPIO_OE_SET, (SIO_BASE + 0x24)


.cpu cortex-m0plus
.thumb

.global main
.thumb_func
main:
unreset: // bit clear IO_BANK0 and PADS_BANK0
    ldr r1,=(aph_RESET_CTRL)
    ldr r0, [r1]
    ldr r2, =(aph_RESET_CTRL_pads_bank0| aph_RESET_CTRL_io_bank0)
    bic r0, r0, r2 // bic: bit clear => r0 = r0 & ~r2
    str r0, [r1]
unreset_check_loop:
    ldr r1, =(aph_RESET_DONE)
    ldr r0, [r1]
    tst r0, r2     // tst: test => (r0 & r2)
    beq unreset_check_loop 

configure:
    ldr r0, =aph_io_bank0_GPIOxx_CTRL_func_sio
    ldr r1, =(aph_io_bank0_GPIO00_CTRL)
    str r0, [r1]

    ldr r0, =0x0
    ldr r1, =aph_pads_bank0_GPIO00_CTRL //[31:8,7<OD>,6<IE<,5:4<DRIVE>,3:PUE,2:PDE,1:SCHMITT,0:SLEWFAST]
    str r0, [r1]

    ldr r0, =0xffffffff
    ldr r1, =sio_GPIO_OE_SET
    str r0, [r1]

blink:
    ldr r3,=0xffffffff
loop:
    ldr r1,=sio_GPIO_OUT
    str r3,[r1]
    mvn r3,r3 // move negative mov r3, ~r3
sleep:
    ldr r0,=0
    ldr r1,=0x100000
wait:
    add r0,r0,#1
    cmp r0, r1
    blo wait
    b loop

