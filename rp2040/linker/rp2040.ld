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

