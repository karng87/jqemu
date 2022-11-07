# Regiser

## Peripheral Register
    Atomic Regiser Access
        0x0000 : RW 
        0x1000 : XOR - toggle
        0x2000 : OR - set
        0x3000 : AND - clear

## IO Register
    32-bits in size
    to update : use Atomic Regiser

## Bus Fabric Register(APB Bridge Peripherals) : _BUS_CTRL
    0x_4003_0000: BUSCTRL_BASE
        0x_00 : BUS_PRIORITY
              - set the priority of each master for bus arbitration
              [31:13 - 12:DMA_W - 11:9 - 8:DMA_R - 7:5 - 4:PROC1 - 3:1 - 0:PROC0]
        0x_04 : BSU_PRIORITY_ACK
        0x_08 : PERFCTR0 
                Bus fabric performance counter 
        0x_0c : PERFSEL0 
                Bus fabric performance event select for PERFCTR0
        0x_10 : PERFCTR1 
                Bus fabric performance counter 1
        0x_14 PERFSEL1 
                Bus fabric performance event select for PERFCTR1
        0x_18 PERFCTR2 
                Bus fabric performance counter 2
        0x_1c PERFSEL2 
                Bus fabric performance event select for PERFCTR2
        0x_20 PERFCTR3 
                Bus fabric performance counter 3
        0x_24 PERFSEL3 
                Bus fabric performance event select for PERFCTR3

# 0x_0000_0000 :ROM 
# 0x_1000_0000 :XIP 
# 0x_2000_0000 :SRAM 

# 0x_4000_0000 :APB Bridge Peripheral
# 0x_5000_0000 :AHB-Lite Peripheral

# 0x_D000_0000 :IO_PORT Regitser
# 0x_E000_0000 :Cortex-M0

# ROM
    ROM_BASE
# XIP
### 0x_1000_0000 : _BASE
        0x_1100_0000 _NOALLOC_BASE
        0x_1200_0000 _NOCACEHE_BASE
        0x_1200_0000 _NOCACEHE_NOALLOC_BASE
        0x_1200_0000 _CTRL_BASE
        0x_1200_0000 _SRAM_BASE
        0x_1200_0000 _SRAM_END
        0x_1200_0000 _SSI_BASE

# SRAM
### 0x_2000_0000 : _BASE _STRIPED_BASE
        0x_2000_0000 _STRIPED_BASE (SRAM_0-3)
        0x_2004_0000 _STRIPED_END
        0x_2004_0000 _SRAM4_BASE (SRAM_4)

        0x_2004_1000 _SRAM5_BASE (SRAM_5)

        0x_2004_2000 _SRAM_END

        0x_2100_0000 _SRAM0_BASE (SRAM_0)

        0x_2101_0000 _SRAM1_BASE (SRAM_1)

        0x_2102_0000 _SRAM2_BASE (SRAM_2)

        0x_2103_0000 _SRAM3_BASE (SRAM_3)

# APB Peripherals
### 0x_4000_0000 : _BASE _SYSINFO_BASE
        0x_4000_0000  _SYSINFO_bASE
        0x_4000_4000  _SYSCONFIG_bASE

        0x_4000_8000  _CLOCK_bASE

        0x_4000_c000  _RESETS_bASE

        0x_4001_0000  _PSM_bASE

        0x_4001_4000    _IO_BANK0_bASE
        0x_4001_8000    _IO_QSPI_bASE
        0x_4001_c000  _PADS_BANK0_bASE
        0x_4002_0000  _PADS_QSPI_bASE

        0x_4002_4000  _XOSC_bASE

        0x_4002_8000  _PLL_SYS_BASE
        0x_4002_c000  _PLL_USB_BASE

        0x_4003_0000  _BUSCTRL_BASE

        0x_4003_4000  _UART0_BASE
        0x_4003_8000  _UART1_BASE

        0x_4003_c000  _SPI0_BASE
        0x_4004_0000  _SPI1_BASE

        0x_4004_4000  _I2C0_BASE
        0x_4004_8000  _I2C1_BASE

        0x_4004_c000  _ADC_BASE

        0x_4005_0000  _PWM_BASE

        0x_4005_4000  _TIMER_BASE
        0x_4005_8000  _WATCHDOG_BASE
        0x_4005_c000  _RTC_BASE
        0x_4006_0000  _ROSC_BASE
        0x_4006_4000  _VREG_AND_CHIP_RESET_BASE

        0x_4006_c000  _TBMAN_BASE

# AHB-lite Splitter 
### 0x_5000_0000 : _BASE _DMA_BASE
        0x_5000_0000 _DMA_BASE
        0x_5010_0000 _USBCTRL_BASE, _USBCTRL_DPRAM_BASE
        0x_5011_0000 _USBCTRL_REGS_BASE

        0x_5020_0000 _PIO0_BASE
        0x_5030_0000 _PIO1_BASE

        0x_5040_0000 _XIP_AUX_BASE

# SIO PORT : Single Cycle I/O
    internal Private Peripheral Bus
### 0xD000_0000 : _SIO_BASE
    0xD000_0000 ~ 0x_D000_017C

# Cortex-M0
### 0x_E000_0000 : PPB_BASE


