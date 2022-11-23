//grep -ERHn 'PADS_BANK0_Type;' mcu-start-dir \
//    | sed -En '1s;([^:]+).*;\1;p' \
//    | xargs -I{} sed -En '/brief PADS_BANK0/,5229p' {} \
//    > PADS_BANK0_Type.h

// @brief PADS_BANK0 (PADS_BANK0)

typedef struct {                                /*!< (@ 0x4001C000) PADS_BANK0 Structure */

  union {
    volatile unsigned int VOLTAGE_SELECT;              /*!< (@ 0x00000000) Voltage select. Per bank control */

    struct {
      volatile unsigned int VOLTAGE_SELECT : 1;        /*!< [0..0] VOLTAGE_SELECT */
            unsigned int            : 31;
    } VOLTAGE_SELECT_b;
  } ;

  union {
    volatile unsigned int GPIO0;                       /*!< (@ 0x00000004) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO0_b;
  } ;

  union {
    volatile unsigned int GPIO1;                       /*!< (@ 0x00000008) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO1_b;
  } ;

  union {
    volatile unsigned int GPIO2;                       /*!< (@ 0x0000000C) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO2_b;
  } ;

  union {
    volatile unsigned int GPIO3;                       /*!< (@ 0x00000010) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO3_b;
  } ;

  union {
    volatile unsigned int GPIO4;                       /*!< (@ 0x00000014) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO4_b;
  } ;

  union {
    volatile unsigned int GPIO5;                       /*!< (@ 0x00000018) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO5_b;
  } ;

  union {
    volatile unsigned int GPIO6;                       /*!< (@ 0x0000001C) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO6_b;
  } ;

  union {
    volatile unsigned int GPIO7;                       /*!< (@ 0x00000020) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO7_b;
  } ;

  union {
    volatile unsigned int GPIO8;                       /*!< (@ 0x00000024) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO8_b;
  } ;

  union {
    volatile unsigned int GPIO9;                       /*!< (@ 0x00000028) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO9_b;
  } ;

  union {
    volatile unsigned int GPIO10;                      /*!< (@ 0x0000002C) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO10_b;
  } ;

  union {
    volatile unsigned int GPIO11;                      /*!< (@ 0x00000030) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO11_b;
  } ;

  union {
    volatile unsigned int GPIO12;                      /*!< (@ 0x00000034) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO12_b;
  } ;

  union {
    volatile unsigned int GPIO13;                      /*!< (@ 0x00000038) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO13_b;
  } ;

  union {
    volatile unsigned int GPIO14;                      /*!< (@ 0x0000003C) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO14_b;
  } ;

  union {
    volatile unsigned int GPIO15;                      /*!< (@ 0x00000040) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO15_b;
  } ;

  union {
    volatile unsigned int GPIO16;                      /*!< (@ 0x00000044) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO16_b;
  } ;

  union {
    volatile unsigned int GPIO17;                      /*!< (@ 0x00000048) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO17_b;
  } ;

  union {
    volatile unsigned int GPIO18;                      /*!< (@ 0x0000004C) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO18_b;
  } ;

  union {
    volatile unsigned int GPIO19;                      /*!< (@ 0x00000050) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO19_b;
  } ;

  union {
    volatile unsigned int GPIO20;                      /*!< (@ 0x00000054) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO20_b;
  } ;

  union {
    volatile unsigned int GPIO21;                      /*!< (@ 0x00000058) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO21_b;
  } ;

  union {
    volatile unsigned int GPIO22;                      /*!< (@ 0x0000005C) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO22_b;
  } ;

  union {
    volatile unsigned int GPIO23;                      /*!< (@ 0x00000060) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO23_b;
  } ;

  union {
    volatile unsigned int GPIO24;                      /*!< (@ 0x00000064) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO24_b;
  } ;

  union {
    volatile unsigned int GPIO25;                      /*!< (@ 0x00000068) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO25_b;
  } ;

  union {
    volatile unsigned int GPIO26;                      /*!< (@ 0x0000006C) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO26_b;
  } ;

  union {
    volatile unsigned int GPIO27;                      /*!< (@ 0x00000070) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO27_b;
  } ;

  union {
    volatile unsigned int GPIO28;                      /*!< (@ 0x00000074) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO28_b;
  } ;

  union {
    volatile unsigned int GPIO29;                      /*!< (@ 0x00000078) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } GPIO29_b;
  } ;

  union {
    volatile unsigned int SWCLK;                       /*!< (@ 0x0000007C) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } SWCLK_b;
  } ;

  union {
    volatile unsigned int SWD;                         /*!< (@ 0x00000080) Pad control register */

    struct {
      volatile unsigned int SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      volatile unsigned int SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      volatile unsigned int PDE        : 1;            /*!< [2..2] Pull down enable */
      volatile unsigned int PUE        : 1;            /*!< [3..3] Pull up enable */
      volatile unsigned int DRIVE      : 2;            /*!< [5..4] Drive strength. */
      volatile unsigned int IE         : 1;            /*!< [6..6] Input enable */
      volatile unsigned int OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            unsigned int            : 24;
    } SWD_b;
  } ;
} PADS_BANK0_Type;                              /*!< Size = 132 (0x84) */
