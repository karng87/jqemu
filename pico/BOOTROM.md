
# RESET
    Several components of the RP2040 
        work together 
            to get to a point 
                where the processors 
                    are out of reset and 
                        able to run the bootrom (Section 2.8). 
## ROM BOOT BOOTROM
    The bootrom is software 
        that is built into the chip, 
        performing the "processor controlled" part of the boot sequence. 

    We will refer to the steps 
        before the processor is running as the "hardware controlled" boot sequence.

### Hardware controlled BOOT SEQUENCE
    • Power is applied to the chip and the RUN pin is high.
        (If "RUN pin" is low then the chip will be held in reset.) 
    • The On-Chip Voltage Regulator
        waits until the digital core supply(DVDD-Digital Voltage Drain Drain) is stable

    • The Power-On State Machine is started.
        To summarise the sequence:

            ◦ The Ring Oscillator is started, providing a clock source
                to the clock generators. 
              clk_sys and clk_ref are now running at a relatively low frequency
              (typically 6.5MHz).

            ◦ The reset controller,
              the execute-in-place hardware(XIP),
              memories(ROM,FLASH,SRAM),
              Bus Fabric (AHB-Lite), and
              Processor Subsystem (SIO) are taken out of reset.

            ◦ Processor core 0 and core 1 begin to execute the bootrom.

### Size 16k it contains
    • Processor core 0 initial boot sequence
    • Processor core 1 low power wait and launch protocol.
    • USB MSC(Mass Storage Class) class-compliant bootloader
        with UF2 support for downloading code/data to FLASH or RAM.
    • USB PICOBOOT bootloader interface for advanced management.
    • Routines for programming and manipulating the external flash.
    • Fast floating point library.
    • Fast bit counting / manipulation functions.
    • Fast memory fill / copy functions.

### After the hardware controlled boot sequence
 the processor controlled boot sequence starts:
    • Reset to both processors released:
        both enter ROM at same location

    • Processors check SIO.CPUID

        ◦ Processor 1 goes to sleep 
            (WFE with SCR.SLEEPDEEP enabled) and 
          remains asleep until woken by user code, via the mailbox

        ◦ Processor 0 continues executing from ROM

    • If power up event was from Rescue DP, clear this flag and halt immediately

        ◦ The debug host (which initiated the rescue) will provide further instruction.

    • If watchdog scratch registers set to indicate pre-loaded code exists in SRAM,
        jump to that code

    • Check if SPI CS pin is tied low ("bootrom button"),
        and skip flash boot if so.

    • Set up IO muxing, pad controls on QSPI pins, and 
        initialise Synopsys SSI for standard SPI mode

    • Issue XIP exit sequence,
        in case flash is still in an XIP mode and has not been power-cycled
            
    • Copy 256 bytes from SPI to internal SRAM (SRAM5) and 
        check for valid CRC32 checksum

    • If checksum passes,
        assume what we have loaded is a valid flash second stage

    • Start executing the loaded code from SRAM (SRAM5)

    • If no valid image found in SPI after 0.5 seconds of attempting to boot,
        drop to USB device boot

    • USB device boot:

        appear as a USB Mass Storage Device
            ◦ Can program the SPI flash, or load directly into SRAM and run,
                by dragging and dropping an image in UF2 format.
            ◦ Also supports an extended PICOBOOT interface

# FLASH BOOT

# BOOTROM contents
| Address    | Contents      | Description |
| -- | -- | -- |
| 0x00000000 | 32-bit        | pointer Initial boot stack pointer |
| 0x00000004 | 32-bit        | pointer Pointer to boot reset handler function |
| 0x00000008 | 32-bit        | pointer Pointer to boot NMI handler function |
| 0x0000000c | 32-bit        | pointer Pointer to boot Hard fault handler function |
| 0x00000010 | 'M', 'u', 0x01| Magic |
| 0x00000013 | byte          | Bootrom version |
| 0x00000014 | 16-bit        | pointer Pointer to a public function lookup table (rom_func_table) |
| 0x00000016 | 16-bit        | pointer Pointer to a public data lookup table (rom_data_table) |
| 0x00000018 | 16-bit        | pointer Pointer to a helper function (rom_table_lookup()) |
| -- | --| --|


