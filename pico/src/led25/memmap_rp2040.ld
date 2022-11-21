/*
SPDX-License-Identifier: BSD-3-Clause
Copyright (c) 2021, Alex Taradov <alex@taradov.com>. All rights reserved.
*/

MEMORY
{
  FLASH_BOOT (rx) : ORIGIN = 0x10000000, LENGTH = 256
  FLASH_TEXT (rx) : ORIGIN = 0x10000100, LENGTH = 2048K - 256

  SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 264K - 8k
  SRAM_X (rwx) : ORIGIN = 0x20040000, LENGTH = 4K
  SRAM_Y (rwx) : ORIGIN = 0x20001000, LENGTH = 4K
}

ENTRY(boot_entry)

SECTIONS
{
  .boot : ALIGN(4)
  {
    KEEP(*(.boot.entry))
    *(.boot*)
    . = 256-4;
    LONG(0xcccccccc) /* CRC */
  } > FLASH_BOOT

  .text : ALIGN(4)
  {
    _text = .;
    KEEP(*(.vectors))
    *(.text*)
    *(.rodata)
    *(.rodata.*)
    . = ALIGN(4);
    _etext = .;
  } > SRAM AT > FLASH_TEXT 

  .data : ALIGN(4)
  {
    _data = .;
    *(.ramfunc .ramfunc.*);
    *(vtable)
    *(.data*)
    . = ALIGN(4);
    _edata = .;
  } > SRAM AT > FLASH_TEXT 

  .bss : ALIGN(4)
  {
    _bss = .;
    *(.bss*)
    *(COMMON)
    . = ALIGN(4);
    _ebss = .;
  } > SRAM 

  PROVIDE(_end = .);
  PROVIDE(_text_start = ORIGIN(FLASH_TEXT));
  PROVIDE(_stack_top = ORIGIN(SRAM_Y) + LENGTH(SRAM_Y));
}

