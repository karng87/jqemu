#ifndef M_PADS_BANK0_Type_H
#define M_PADS_BANK0_Type_H
#include <stdint.h>
#include "../j_pico_define.h"

typedef struct {                                /*!< (@ 0x4001C000) PADS_BANK0 Structure */

  union {
    __IOM uint32_t VOLTAGE_SELECT;              /*!< (@ 0x00000000) Voltage select. Per bank control */

    struct {
      __IOM uint32_t VOLTAGE_SELECT : 1;        /*!< [0..0] VOLTAGE_SELECT */
            uint32_t            : 31;
    } VOLTAGE_SELECT_b;
  } ;

  union {
    __IOM uint32_t GPIO0;                       /*!< (@ 0x00000004) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO0_b;
  } ;

  union {
    __IOM uint32_t GPIO1;                       /*!< (@ 0x00000008) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO1_b;
  } ;

  union {
    __IOM uint32_t GPIO2;                       /*!< (@ 0x0000000C) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO2_b;
  } ;

  union {
    __IOM uint32_t GPIO3;                       /*!< (@ 0x00000010) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO3_b;
  } ;

  union {
    __IOM uint32_t GPIO4;                       /*!< (@ 0x00000014) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO4_b;
  } ;

  union {
    __IOM uint32_t GPIO5;                       /*!< (@ 0x00000018) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO5_b;
  } ;

  union {
    __IOM uint32_t GPIO6;                       /*!< (@ 0x0000001C) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO6_b;
  } ;

  union {
    __IOM uint32_t GPIO7;                       /*!< (@ 0x00000020) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO7_b;
  } ;

  union {
    __IOM uint32_t GPIO8;                       /*!< (@ 0x00000024) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO8_b;
  } ;

  union {
    __IOM uint32_t GPIO9;                       /*!< (@ 0x00000028) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO9_b;
  } ;

  union {
    __IOM uint32_t GPIO10;                      /*!< (@ 0x0000002C) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO10_b;
  } ;

  union {
    __IOM uint32_t GPIO11;                      /*!< (@ 0x00000030) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO11_b;
  } ;

  union {
    __IOM uint32_t GPIO12;                      /*!< (@ 0x00000034) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO12_b;
  } ;

  union {
    __IOM uint32_t GPIO13;                      /*!< (@ 0x00000038) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO13_b;
  } ;

  union {
    __IOM uint32_t GPIO14;                      /*!< (@ 0x0000003C) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO14_b;
  } ;

  union {
    __IOM uint32_t GPIO15;                      /*!< (@ 0x00000040) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO15_b;
  } ;

  union {
    __IOM uint32_t GPIO16;                      /*!< (@ 0x00000044) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO16_b;
  } ;

  union {
    __IOM uint32_t GPIO17;                      /*!< (@ 0x00000048) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO17_b;
  } ;

  union {
    __IOM uint32_t GPIO18;                      /*!< (@ 0x0000004C) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO18_b;
  } ;

  union {
    __IOM uint32_t GPIO19;                      /*!< (@ 0x00000050) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO19_b;
  } ;

  union {
    __IOM uint32_t GPIO20;                      /*!< (@ 0x00000054) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO20_b;
  } ;

  union {
    __IOM uint32_t GPIO21;                      /*!< (@ 0x00000058) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO21_b;
  } ;

  union {
    __IOM uint32_t GPIO22;                      /*!< (@ 0x0000005C) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO22_b;
  } ;

  union {
    __IOM uint32_t GPIO23;                      /*!< (@ 0x00000060) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO23_b;
  } ;

  union {
    __IOM uint32_t GPIO24;                      /*!< (@ 0x00000064) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO24_b;
  } ;

  union {
    __IOM uint32_t GPIO25;                      /*!< (@ 0x00000068) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO25_b;
  } ;

  union {
    __IOM uint32_t GPIO26;                      /*!< (@ 0x0000006C) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO26_b;
  } ;

  union {
    __IOM uint32_t GPIO27;                      /*!< (@ 0x00000070) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO27_b;
  } ;

  union {
    __IOM uint32_t GPIO28;                      /*!< (@ 0x00000074) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO28_b;
  } ;

  union {
    __IOM uint32_t GPIO29;                      /*!< (@ 0x00000078) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } GPIO29_b;
  } ;

  union {
    __IOM uint32_t SWCLK;                       /*!< (@ 0x0000007C) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } SWCLK_b;
  } ;

  union {
    __IOM uint32_t SWD;                         /*!< (@ 0x00000080) Pad control register */

    struct {
      __IOM uint32_t SLEWFAST   : 1;            /*!< [0..0] Slew rate control. 1 = Fast, 0 = Slow */
      __IOM uint32_t SCHMITT    : 1;            /*!< [1..1] Enable schmitt trigger */
      __IOM uint32_t PDE        : 1;            /*!< [2..2] Pull down enable */
      __IOM uint32_t PUE        : 1;            /*!< [3..3] Pull up enable */
      __IOM uint32_t DRIVE      : 2;            /*!< [5..4] Drive strength. */
      __IOM uint32_t IE         : 1;            /*!< [6..6] Input enable */
      __IOM uint32_t OD         : 1;            /*!< [7..7] Output disable. Has priority over output enable from peripherals */
            uint32_t            : 24;
    } SWD_b;
  } ;
} PADS_BANK0_Type;                              /*!< Size = 132 (0x84) */

#endif
