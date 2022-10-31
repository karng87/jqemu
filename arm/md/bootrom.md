# BootRom
    The boot ROM exposes 2 ways of loading a program onto the flash over USB

## UF2
    The pico advertises a USB Mass Storage Class endpoint containing a FAT16 volumn.
    Writing a specially formatted file to this volumn cuases bytes to be written to the flash
    This is pretty clever but too fiddly for my linking.

## PICOBOOT
    The ROM also exposes a second simpler USB endpoint(under the "vendor-defined" interface class)
    allowing more basic operations like reading/writing memorys and rebooting.

    Picotool is able to write to both flash and SRAM and,
    it looks at the load addresses stored in the ELF metadata
        to decide which to write to.
    It's kinda cool to be able to write an non-persistent program directly into thet SRAM.
    That also avoids the 256 byte limit imposed by the normal boot process.
    On the other hand the program would disappear when the board is rebooted,
    and re-running it would require entering BOOTSEL

## .boot2
    is the name of the ELF section it placed that sourcd into

    0x10000000 is the base address of the flash

```shell
        ld -o blink.elf --section-start .boot2-0x10000000 pad_checksum.o
```

    changing this to 0x20000000, for example, would load the program into SRAM instead.
