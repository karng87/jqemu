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
  boot  (rx) : ORIGIN = 0x10000000, LENGTH = 256
  flash (rx) : ORIGIN = 0x10000100, LENGTH = 2048K - 256
  ram  (rwx) : ORIGIN = 0x20000000, LENGTH = 264K
}

/*

  -----------------------------------------------
 * 0xFFFF_FFFF
 *             SYSTEM
 *             SYSTEM
 * -----------
 * 0xE00F_FFFF _ePPB(Private Peripheral Bus)
 * -----------
 * 0xE000_EFFF _eSCS(System Control Space)
 * -----------
 * 0xE00F_E000 _sSCS(System Control Space)
 * 0xE00F_1000 _sSCS(System Control Space)
 * ----------- 
 * 0xE000_0000 _sPPB(Private Peripheral Bus)
  -----------------------------------------------
 * 0xDFFF_FFFF _eExternal Device
 *             External Device
 *             External DevRAM
 *             External DevRAM
 *             External DevRAM
 *             External DevRAM
 *             External DevRAM
 * 0Xa000_0000 _sExternal Device
  -----------------------------------------------
 * 0X9FFF_FFFF _eExternal RAM
 *             External RAM
 *             External RAM
 *             External RAM
 *             External RAM
 *             External RAM
 *             External RAM
 * 0X6000_0000 _sExternal RAM
  -----------------------------------------------
 * 0X5FFF_FFFF _ePerpherals
 *             Peripherals
 *             PeripherRAM
 *             PeripherRAM
 * 0X4000_0000 _sPeripherals
  -----------------------------------------------
 * 0X3FFF_FFFF e_RAM
 *             RAM
 *             RAM
 *             RAM
 * 0X2000_0000 _sRAM
  -----------------------------------------------
 * e_ROM   0X1FFF_FFFF _eROM
 *                     
 *                     
 *                     
 *         0x1000_000c  irq_handler_hard_fault,        // 3 - Hard Fault
 *         0x1000_0008  irq_handler_nmi jmp address              // 2 - NMI
 *         0x0000_0004  reset_handler jmp address
 * s_ROM   0x0000_0000  _stack_top value
  -----------------------------------------------
 */

ENTRY(boot_entry)

SECTIONS
{
  .boot : ALIGN(4)
  {
    KEEP(*(.boot.entry)) /* halt at 0x20041f00 address */
    *(.boot*)
    . = 256-4;
    LONG(0xcccccccc) /* CRC */
  } > boot

  .text : ALIGN(4)
  {
    _text = .;
    KEEP(*(.vectors))
    *(.text*)
    *(.rodata)
    *(.rodata.*)
    . = ALIGN(4);
    _etext = .;
  } > ram AT > flash

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

