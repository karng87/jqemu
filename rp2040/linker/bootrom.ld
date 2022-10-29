/* BUS: AHB-Lite arbiter
        - AHB: Advanced High Bus
 */
MEMORY {
    ROM(rx) : ORIGIN = 0x00000000, LENGTH = 16K
    /* ROM: size: 16K starting address: (0x0000_0000)
        - READ ONLY
        - initial startup routine
        - flash boot sequence
        - flash programming routines
        - USB mass storage device with UF2 support
        - Utility lib
     */
    SRAM(rwx) : ORIGIN = 0x20000000, LENGTH = 264K
    /* SRAM: 264K: 6 banks
        - BANK
            - 16K x 32-bit banks = 2^4K x (2^5-bit / 2^3)byte
                = 4 x (2^4K * 2^2-byte) =4 x (2^6K) = 4 x (64K byte)
                += 2 x (1k * 32-bit) = 2 x (2^0K * 2^2-byte) = 2 x (4K)

        - Bank 0: 0x_2000_0000
        - Bank 1: 0x_2000_0004
        - Bank 2: 0x_2000_0008
        - Bank 3: 0x_2000_000c
        - Bank 0: 0x_2000_0010
        - Bank 1: 0x_2000_0014
        - Bank 2: 0x_2000_0018
        - Bank 3: 0x_2000_001c
        ....
        0x_2100_0000: 1/4 bank(64K) 
        ..
        0x_2100_1000: 2/4 bank(64K)
        ..
        0x_2100_2000: 3/4 bank(64K)
        ..
        0x_2100_3000: 4/4 bank(64K)
     */
    USBRAM(rw) : ORIGIN = 0x50100400, LENGTH = 3K
}

SECTIONS {
    . = ORIGIN(ROM);
    .text : {
        KEEP(*(.vectors))
        *(.text*)
        KEEP(*(.rodata.keep*))
        *(.rodata*)
        this_is_the_end_my_only_friend_the_end = .;
        . = ALIGN(LENGTH(ROM));
    } >ROM =0x00be

    .data : {
        *(.data*)
    } >USBRAM

    .bss : {
        *(.bss*)
    } >USBRAM

    ASSERT(__irq5_vector == __vectors + 0x40 + 5 * 4, "too much data in middle of vector table")
    ASSERT(SIZEOF(.data) == 0,
        "ERROR: do not use static memory in bootrom! (.data)")

     /* Leave room above the stack for stage 2 load, so that stage 2
       can image SRAM from its beginning */
    _stacktop = ORIGIN(SRAM) + LENGTH(SRAM) - 256;
}
