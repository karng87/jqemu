/*
ROM BTL: ROM BooTLoader
    - program code
        - need to be excuted in order to guarantee funcionality
            after reset
    - 0x_2004_1f00
        J-Link 
            - performs a device reset which halts at address 0x20041f00
            - on the first instruction so called "flash second state" aka. 2nd stage BTL



    - expects a flash second stage (aka. "2nd stage bootloader")
 */

MEMORY
{
  /*XIP 2MB FLash Memory */
  boot  (rx) : ORIGIN = 0x10000000, LENGTH = 256         /* 256 Flash ROM */
  flash (rx) : ORIGIN = 0x10000100, LENGTH = 2048K - 256 /* Flash ROM 2M */
  ram  (rwx) : ORIGIN = 0x20000000, LENGTH = 264K        /* RAM */
}
/*
  -----------------------------------------------
 * 0xFFFF_FFFF
 *             SYSTEM
 *             SYSTEM
 * -----------
 * 0xE00F_FFFF PPB(Private Peripheral Bus)
 * -----------
 * 0xE000_EFFF SCS(System Control Space)
 * -----------
 * 0xE00F_E000 SCS(System Control Space)
 * 0xE00F_1000 SCS(System Control Space)
 * ----------- 
 * 0xE000_0000 _sPPB(Private Peripheral Bus)
  -----------------------------------------------
 * 0xDFFF_FFFF _eExternal Device
 * -----------  SIO(Single-cycle IO block)
 * -----------     : word-aligned address 
 * -----------     : CPUID
 * -----------     : GPIO control
 * -----------          : GPIO_x - for direct control of IO bank(0~29)
 * -----------          : GPIO_OUT GPIO_HI_OUT - set the output level
 * -----------          : GPIO_IN GPIO_HI_IN - sample the current GPIOs
 * -----------          : GPIO_OE GPIO_HI_OE - enable the output driver
 * -----------     : SPIN LOCK
 * -----------     : Inter-processor FIFOs (Mailboxes)
 * -----------     : Integer Divider
 * -----------     : Intepolator
 * -----------     : Lane Operations
 * -----------     : Blend Mode
 * -----------     : Clamp Mode
 * -----------     : Linear Interpolation: Sample Use Case
 * -----------     : Simple Affine Texture Mapping : Sample Use Case
 * -----------     : List of Registers
 * -----------          : Base address of 0x_d000_0000
 * -----------          : 0x_000 = CPUID
 * -----------          : 0x_004 = GPIO_IN
 * -----------          : 0x_008 = GPIO_HI_IN
 * -----------          : 0x_010 = GPIO_OUT
 * -----------          : 0x_014 = GPIO_OUT_SET
 * -----------          : 0x_018 = GPIO_OUT_CLR
 * -----------          : 0x_02c = GPIO_OUT_XOR
 * -----------          : 0x_020 = GPIO_OE
 * -----------          : 0x_024 = GPIO_OE_SET
 * -----------          : 0x_028 = GPIO_OE_CLR

 * 0xD000_0000 _eExternal Device
 *             External Device
 *             External DevRAM
 *             External DevRAM
 *             External DevRAM
 *             External DevRAM
 *             External DevRAM
 * 0Xa000_0000 _sExternal Device
  -----------------------------------------------
 * SD card     0X9FFF_FFFF _eExternal RAM
 *                     External RAM
 *                     External RAM
 *                     External RAM
 *                     External RAM
 *                     External RAM
 *                     External RAM
 * SD card     0X6000_0000 _sExternal RAM
  -----------------------------------------------
 * Peripheral  0X5FFF_FFFF _ePerpherals
 *                     Peripherals
 *                     PeripherRAM
 *                     PeripherRAM
 * Peripheral  0X4000_0000 _sPeripherals
  -----------------------------------------------
 * SRAM   0X3FFF_FFFF e_RAM
 *                     RAM
 *                     RAM
 *                     RAM
 * SRAM   0X2000_0000 _sRAM
  -----------------------------------------------
 * ROM     0X1FFF_FFFF _eROM
 * [Falsh Memory]                  
 *                     
 *                     
 *         0x1000_000c  irq_handler_hard_fault,        // 3 - Hard Fault
 *         0x1000_0008  irq_handler_nmi jmp address              // 2 - NMI
 *         0x0000_0004  reset_handler jmp address
 * ROM     0x0000_0000  _stack_top value
  -----------------------------------------------
 */

ENTRY(boot_entry)

SECTIONS
{
  .boot : ALIGN(4)
  {
    KEEP(*(.boot.entry)) /* CRC check halt at 0x20041f00 address */
    *(.boot*)
    . = 256-4;
    LONG(0xcccccccc) /* CRC */
  } > boot /* ROM */

  .text : ALIGN(4)
  {
    _text = .;
    KEEP(*(.vectors))
    *(.text*)
    *(.rodata)
    *(.rodata.*)
    . = ALIGN(4);
    _etext = .;
  } > ram AT > flash /* ROM */

  .data : ALIGN(4)
  {
    _data = .;
    *(.ramfunc .ramfunc.*);
    *(vtable)
    *(.data*)
    . = ALIGN(4);
    _edata = .;
  } > ram AT > flash

  .bss : ALIGN(4)
  {
    _bss = .;
    *(.bss*)
    *(COMMON)
    . = ALIGN(4);
    _ebss = .;
  } > ram

  PROVIDE(_end = .);
  PROVIDE(_text_start = ORIGIN(flash));
  PROVIDE(_stack_top = ORIGIN(ram) + LENGTH(ram));
}

