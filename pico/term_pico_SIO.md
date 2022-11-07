# SIO Single-Cycle I/O
    is not connected to the main system bus(AHB-Lite)
## Control
    GPIO_x[29:0] : SIO_BANK0[29:0]
    GPIO_HI_x[SCLK,SSn,SD0,SD1,SD2,SD3] : SIO_QSPI

### Output set value 
    one-bit flag
    GPIO_OUT 
    GPIO_HI_OUT
    - Atomic set
        XOR
        OR 
        AND

### Output Enable
    one-bit flag
    GPIO_OE
    GPIO_HI_OE

### Input Sampling
    one-bit flag
    GPIO_IN

## Spin Lock
    one-bit flag

## FIFO (Mailboxes)
    inter processor
    FIFO_WR : write
    FIFO_RD : read

    FIFO_ST : status
        - VLD : 
        - RDY :
        - ROE :
        - WOF :


## Integer Divider
    DIVIDEND
    DIVISOR
    DIV_QUOTIENT
    DIV_REMAINDER
    DIV_CSR

# 0x_D000_0000 SIO_BASE
    0x_d000_0000 CPUID
                [31:0-<0:core 0><1:core>]

    0x_d000_0004 GPIO_IN SIO_IN
                [31:30 | 29:0-<Input value for SIO_0..29>]
    0x_d000_0008 GPIO_HI_IN SIO_HI_IN
                [31:6 | 5:0-<SCLK,SSn,SD0,SD1,SD2,SD3>]

    0x_d000_0010 GPIO_OUT       :SIO_OUT
                [31:30 | 29:0-<set output level for SIO_0..29>]
    0x_d000_0014 GPIO_OUT_SET   :SIO_OUT_SET
                [31:30 | 29:0-<atomic bit set output level for SIO_0..29>]
    0x_d000_0018 GPIO_OUT_CLR   :SIO_OUT_CLR
                [31:30 | 29:0-<atomic bit clear output level for SIO_0..29>]
    0x_d000_001c GPIO_OUT_XOR   :SIO_OUT_XOR
                [31:30 | 29:0-<atomic bit toggle output level for SIO_0..29>]

    0x_d000_0020 GPIO_OE    :SIO_OUT
                [31:30 | 29:0-<set output enable for SIO_0..29>]
    0x_d000_0024 GPIO_OE_SET   :SIO_OUT_SET
                [31:30 | 29:0-<atomic bit set output enable for SIO_0..29>]
    0x_d000_0028 GPIO_OE_CLR   :SIO_OUT_CLR
                [31:30 | 29:0-<atomic bit clear output enable for SIO_0..29>]
    0x_d000_002c GPIO_OE_XOR   :SIO_OUT_CLR
                [31:30 | 29:0-<atomic bit toggle output enable for SIO_0..29>]

    0x_d000_0030 GPIO_HI_OUT       :SIO_OUT
    0x_d000_0034 GPIO_HI_OUT_SET   :SIO_OUT_SET
    0x_d000_0038 GPIO_HI_OUT_CLR   :SIO_OUT_CLR
    0x_d000_003c GPIO_HI_OUT_XOR   :SIO_OUT_CLR
    0x_d000_0040 GPIO_HI_OE    :SIO_OUT
    0x_d000_0044 GPIO_HI_OE_SET   :SIO_OUT_SET
    0x_d000_0048 GPIO_HI_OE_CLR   :SIO_OUT_CLR
    0x_d000_004c GPIO_HI_OE_XOR   :SIO_OUT_XOR

    0x_d000_0050 FIFO_ST
    0x_d000_0054 FIFO_WR
    0x_d000_0058 FIFO_RD

    0x_d000_005c SPINLOCK_ST
    0x_d000_0060 DIV_UDIVIDEND
    0x_d000_0064 DIV_UDIVISOR



