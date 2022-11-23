  //* @brief IO_BANK0 (IO_BANK0)

typedef struct {                                /*!< (@ 0x40014000) IO_BANK0 Structure */

  union {
    __IOM uint32_t GPIO0_STATUS;                /*!< (@ 0x00000000) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO0_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO0_CTRL;                  /*!< (@ 0x00000004) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO0_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO1_STATUS;                /*!< (@ 0x00000008) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO1_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO1_CTRL;                  /*!< (@ 0x0000000C) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO1_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO2_STATUS;                /*!< (@ 0x00000010) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO2_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO2_CTRL;                  /*!< (@ 0x00000014) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO2_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO3_STATUS;                /*!< (@ 0x00000018) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO3_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO3_CTRL;                  /*!< (@ 0x0000001C) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO3_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO4_STATUS;                /*!< (@ 0x00000020) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO4_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO4_CTRL;                  /*!< (@ 0x00000024) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO4_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO5_STATUS;                /*!< (@ 0x00000028) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO5_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO5_CTRL;                  /*!< (@ 0x0000002C) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO5_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO6_STATUS;                /*!< (@ 0x00000030) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO6_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO6_CTRL;                  /*!< (@ 0x00000034) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO6_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO7_STATUS;                /*!< (@ 0x00000038) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO7_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO7_CTRL;                  /*!< (@ 0x0000003C) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO7_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO8_STATUS;                /*!< (@ 0x00000040) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO8_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO8_CTRL;                  /*!< (@ 0x00000044) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO8_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO9_STATUS;                /*!< (@ 0x00000048) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO9_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO9_CTRL;                  /*!< (@ 0x0000004C) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO9_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO10_STATUS;               /*!< (@ 0x00000050) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO10_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO10_CTRL;                 /*!< (@ 0x00000054) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO10_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO11_STATUS;               /*!< (@ 0x00000058) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO11_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO11_CTRL;                 /*!< (@ 0x0000005C) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO11_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO12_STATUS;               /*!< (@ 0x00000060) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO12_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO12_CTRL;                 /*!< (@ 0x00000064) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO12_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO13_STATUS;               /*!< (@ 0x00000068) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO13_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO13_CTRL;                 /*!< (@ 0x0000006C) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO13_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO14_STATUS;               /*!< (@ 0x00000070) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO14_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO14_CTRL;                 /*!< (@ 0x00000074) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO14_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO15_STATUS;               /*!< (@ 0x00000078) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO15_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO15_CTRL;                 /*!< (@ 0x0000007C) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO15_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO16_STATUS;               /*!< (@ 0x00000080) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO16_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO16_CTRL;                 /*!< (@ 0x00000084) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO16_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO17_STATUS;               /*!< (@ 0x00000088) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO17_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO17_CTRL;                 /*!< (@ 0x0000008C) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO17_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO18_STATUS;               /*!< (@ 0x00000090) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO18_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO18_CTRL;                 /*!< (@ 0x00000094) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO18_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO19_STATUS;               /*!< (@ 0x00000098) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO19_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO19_CTRL;                 /*!< (@ 0x0000009C) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO19_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO20_STATUS;               /*!< (@ 0x000000A0) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO20_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO20_CTRL;                 /*!< (@ 0x000000A4) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO20_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO21_STATUS;               /*!< (@ 0x000000A8) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO21_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO21_CTRL;                 /*!< (@ 0x000000AC) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO21_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO22_STATUS;               /*!< (@ 0x000000B0) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO22_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO22_CTRL;                 /*!< (@ 0x000000B4) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO22_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO23_STATUS;               /*!< (@ 0x000000B8) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO23_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO23_CTRL;                 /*!< (@ 0x000000BC) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO23_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO24_STATUS;               /*!< (@ 0x000000C0) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO24_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO24_CTRL;                 /*!< (@ 0x000000C4) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO24_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO25_STATUS;               /*!< (@ 0x000000C8) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO25_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO25_CTRL;                 /*!< (@ 0x000000CC) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO25_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO26_STATUS;               /*!< (@ 0x000000D0) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO26_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO26_CTRL;                 /*!< (@ 0x000000D4) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO26_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO27_STATUS;               /*!< (@ 0x000000D8) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO27_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO27_CTRL;                 /*!< (@ 0x000000DC) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO27_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO28_STATUS;               /*!< (@ 0x000000E0) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO28_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO28_CTRL;                 /*!< (@ 0x000000E4) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO28_CTRL_b;
  } ;

  union {
    __IOM uint32_t GPIO29_STATUS;               /*!< (@ 0x000000E8) GPIO status */

    struct {
            uint32_t            : 8;
      __IM  uint32_t OUTFROMPERI : 1;           /*!< [8..8] output signal from selected peripheral, before register override is applied */
      __IM  uint32_t OUTTOPAD   : 1;            /*!< [9..9] output signal to pad after register override is applied */
            uint32_t            : 2;
      __IM  uint32_t OEFROMPERI : 1;            /*!< [12..12] output enable from selected peripheral, before register override is applied */
      __IM  uint32_t OETOPAD    : 1;            /*!< [13..13] output enable to pad after register override is applied */
            uint32_t            : 3;
      __IM  uint32_t INFROMPAD  : 1;            /*!< [17..17] input signal from pad, before override is applied */
            uint32_t            : 1;
      __IM  uint32_t INTOPERI   : 1;            /*!< [19..19] input signal to peripheral, after override is applied */
            uint32_t            : 4;
      __IM  uint32_t IRQFROMPAD : 1;            /*!< [24..24] interrupt from pad before override is applied */
            uint32_t            : 1;
      __IM  uint32_t IRQTOPROC  : 1;            /*!< [26..26] interrupt to processors, after override is applied */
            uint32_t            : 5;
    } GPIO29_STATUS_b;
  } ;

  union {
    __IOM uint32_t GPIO29_CTRL;                 /*!< (@ 0x000000EC) GPIO control including function select and overrides. */

    struct {
      __IOM uint32_t FUNCSEL    : 5;            /*!< [4..0] 0-31 -> selects pin function according to the gpio table 31 == NULL */
            uint32_t            : 3;
      __IOM uint32_t OUTOVER    : 2;            /*!< [9..8] OUTOVER */
            uint32_t            : 2;
      __IOM uint32_t OEOVER     : 2;            /*!< [13..12] OEOVER */
            uint32_t            : 2;
      __IOM uint32_t INOVER     : 2;            /*!< [17..16] INOVER */
            uint32_t            : 10;
      __IOM uint32_t IRQOVER    : 2;            /*!< [29..28] IRQOVER */
            uint32_t            : 2;
    } GPIO29_CTRL_b;
  } ;

  union {
    __IOM uint32_t INTR0;                       /*!< (@ 0x000000F0) Raw Interrupts */

    struct {
      __IM  uint32_t GPIO0_LEVEL_LOW : 1;       /*!< [0..0] GPIO0_LEVEL_LOW */
      __IM  uint32_t GPIO0_LEVEL_HIGH : 1;      /*!< [1..1] GPIO0_LEVEL_HIGH */
      __IOM uint32_t GPIO0_EDGE_LOW : 1;        /*!< [2..2] GPIO0_EDGE_LOW */
      __IOM uint32_t GPIO0_EDGE_HIGH : 1;       /*!< [3..3] GPIO0_EDGE_HIGH */
      __IM  uint32_t GPIO1_LEVEL_LOW : 1;       /*!< [4..4] GPIO1_LEVEL_LOW */
      __IM  uint32_t GPIO1_LEVEL_HIGH : 1;      /*!< [5..5] GPIO1_LEVEL_HIGH */
      __IOM uint32_t GPIO1_EDGE_LOW : 1;        /*!< [6..6] GPIO1_EDGE_LOW */
      __IOM uint32_t GPIO1_EDGE_HIGH : 1;       /*!< [7..7] GPIO1_EDGE_HIGH */
      __IM  uint32_t GPIO2_LEVEL_LOW : 1;       /*!< [8..8] GPIO2_LEVEL_LOW */
      __IM  uint32_t GPIO2_LEVEL_HIGH : 1;      /*!< [9..9] GPIO2_LEVEL_HIGH */
      __IOM uint32_t GPIO2_EDGE_LOW : 1;        /*!< [10..10] GPIO2_EDGE_LOW */
      __IOM uint32_t GPIO2_EDGE_HIGH : 1;       /*!< [11..11] GPIO2_EDGE_HIGH */
      __IM  uint32_t GPIO3_LEVEL_LOW : 1;       /*!< [12..12] GPIO3_LEVEL_LOW */
      __IM  uint32_t GPIO3_LEVEL_HIGH : 1;      /*!< [13..13] GPIO3_LEVEL_HIGH */
      __IOM uint32_t GPIO3_EDGE_LOW : 1;        /*!< [14..14] GPIO3_EDGE_LOW */
      __IOM uint32_t GPIO3_EDGE_HIGH : 1;       /*!< [15..15] GPIO3_EDGE_HIGH */
      __IM  uint32_t GPIO4_LEVEL_LOW : 1;       /*!< [16..16] GPIO4_LEVEL_LOW */
      __IM  uint32_t GPIO4_LEVEL_HIGH : 1;      /*!< [17..17] GPIO4_LEVEL_HIGH */
      __IOM uint32_t GPIO4_EDGE_LOW : 1;        /*!< [18..18] GPIO4_EDGE_LOW */
      __IOM uint32_t GPIO4_EDGE_HIGH : 1;       /*!< [19..19] GPIO4_EDGE_HIGH */
      __IM  uint32_t GPIO5_LEVEL_LOW : 1;       /*!< [20..20] GPIO5_LEVEL_LOW */
      __IM  uint32_t GPIO5_LEVEL_HIGH : 1;      /*!< [21..21] GPIO5_LEVEL_HIGH */
      __IOM uint32_t GPIO5_EDGE_LOW : 1;        /*!< [22..22] GPIO5_EDGE_LOW */
      __IOM uint32_t GPIO5_EDGE_HIGH : 1;       /*!< [23..23] GPIO5_EDGE_HIGH */
      __IM  uint32_t GPIO6_LEVEL_LOW : 1;       /*!< [24..24] GPIO6_LEVEL_LOW */
      __IM  uint32_t GPIO6_LEVEL_HIGH : 1;      /*!< [25..25] GPIO6_LEVEL_HIGH */
      __IOM uint32_t GPIO6_EDGE_LOW : 1;        /*!< [26..26] GPIO6_EDGE_LOW */
      __IOM uint32_t GPIO6_EDGE_HIGH : 1;       /*!< [27..27] GPIO6_EDGE_HIGH */
      __IM  uint32_t GPIO7_LEVEL_LOW : 1;       /*!< [28..28] GPIO7_LEVEL_LOW */
      __IM  uint32_t GPIO7_LEVEL_HIGH : 1;      /*!< [29..29] GPIO7_LEVEL_HIGH */
      __IOM uint32_t GPIO7_EDGE_LOW : 1;        /*!< [30..30] GPIO7_EDGE_LOW */
      __IOM uint32_t GPIO7_EDGE_HIGH : 1;       /*!< [31..31] GPIO7_EDGE_HIGH */
    } INTR0_b;
  } ;

  union {
    __IOM uint32_t INTR1;                       /*!< (@ 0x000000F4) Raw Interrupts */

    struct {
      __IM  uint32_t GPIO8_LEVEL_LOW : 1;       /*!< [0..0] GPIO8_LEVEL_LOW */
      __IM  uint32_t GPIO8_LEVEL_HIGH : 1;      /*!< [1..1] GPIO8_LEVEL_HIGH */
      __IOM uint32_t GPIO8_EDGE_LOW : 1;        /*!< [2..2] GPIO8_EDGE_LOW */
      __IOM uint32_t GPIO8_EDGE_HIGH : 1;       /*!< [3..3] GPIO8_EDGE_HIGH */
      __IM  uint32_t GPIO9_LEVEL_LOW : 1;       /*!< [4..4] GPIO9_LEVEL_LOW */
      __IM  uint32_t GPIO9_LEVEL_HIGH : 1;      /*!< [5..5] GPIO9_LEVEL_HIGH */
      __IOM uint32_t GPIO9_EDGE_LOW : 1;        /*!< [6..6] GPIO9_EDGE_LOW */
      __IOM uint32_t GPIO9_EDGE_HIGH : 1;       /*!< [7..7] GPIO9_EDGE_HIGH */
      __IM  uint32_t GPIO10_LEVEL_LOW : 1;      /*!< [8..8] GPIO10_LEVEL_LOW */
      __IM  uint32_t GPIO10_LEVEL_HIGH : 1;     /*!< [9..9] GPIO10_LEVEL_HIGH */
      __IOM uint32_t GPIO10_EDGE_LOW : 1;       /*!< [10..10] GPIO10_EDGE_LOW */
      __IOM uint32_t GPIO10_EDGE_HIGH : 1;      /*!< [11..11] GPIO10_EDGE_HIGH */
      __IM  uint32_t GPIO11_LEVEL_LOW : 1;      /*!< [12..12] GPIO11_LEVEL_LOW */
      __IM  uint32_t GPIO11_LEVEL_HIGH : 1;     /*!< [13..13] GPIO11_LEVEL_HIGH */
      __IOM uint32_t GPIO11_EDGE_LOW : 1;       /*!< [14..14] GPIO11_EDGE_LOW */
      __IOM uint32_t GPIO11_EDGE_HIGH : 1;      /*!< [15..15] GPIO11_EDGE_HIGH */
      __IM  uint32_t GPIO12_LEVEL_LOW : 1;      /*!< [16..16] GPIO12_LEVEL_LOW */
      __IM  uint32_t GPIO12_LEVEL_HIGH : 1;     /*!< [17..17] GPIO12_LEVEL_HIGH */
      __IOM uint32_t GPIO12_EDGE_LOW : 1;       /*!< [18..18] GPIO12_EDGE_LOW */
      __IOM uint32_t GPIO12_EDGE_HIGH : 1;      /*!< [19..19] GPIO12_EDGE_HIGH */
      __IM  uint32_t GPIO13_LEVEL_LOW : 1;      /*!< [20..20] GPIO13_LEVEL_LOW */
      __IM  uint32_t GPIO13_LEVEL_HIGH : 1;     /*!< [21..21] GPIO13_LEVEL_HIGH */
      __IOM uint32_t GPIO13_EDGE_LOW : 1;       /*!< [22..22] GPIO13_EDGE_LOW */
      __IOM uint32_t GPIO13_EDGE_HIGH : 1;      /*!< [23..23] GPIO13_EDGE_HIGH */
      __IM  uint32_t GPIO14_LEVEL_LOW : 1;      /*!< [24..24] GPIO14_LEVEL_LOW */
      __IM  uint32_t GPIO14_LEVEL_HIGH : 1;     /*!< [25..25] GPIO14_LEVEL_HIGH */
      __IOM uint32_t GPIO14_EDGE_LOW : 1;       /*!< [26..26] GPIO14_EDGE_LOW */
      __IOM uint32_t GPIO14_EDGE_HIGH : 1;      /*!< [27..27] GPIO14_EDGE_HIGH */
      __IM  uint32_t GPIO15_LEVEL_LOW : 1;      /*!< [28..28] GPIO15_LEVEL_LOW */
      __IM  uint32_t GPIO15_LEVEL_HIGH : 1;     /*!< [29..29] GPIO15_LEVEL_HIGH */
      __IOM uint32_t GPIO15_EDGE_LOW : 1;       /*!< [30..30] GPIO15_EDGE_LOW */
      __IOM uint32_t GPIO15_EDGE_HIGH : 1;      /*!< [31..31] GPIO15_EDGE_HIGH */
    } INTR1_b;
  } ;

  union {
    __IOM uint32_t INTR2;                       /*!< (@ 0x000000F8) Raw Interrupts */

    struct {
      __IM  uint32_t GPIO16_LEVEL_LOW : 1;      /*!< [0..0] GPIO16_LEVEL_LOW */
      __IM  uint32_t GPIO16_LEVEL_HIGH : 1;     /*!< [1..1] GPIO16_LEVEL_HIGH */
      __IOM uint32_t GPIO16_EDGE_LOW : 1;       /*!< [2..2] GPIO16_EDGE_LOW */
      __IOM uint32_t GPIO16_EDGE_HIGH : 1;      /*!< [3..3] GPIO16_EDGE_HIGH */
      __IM  uint32_t GPIO17_LEVEL_LOW : 1;      /*!< [4..4] GPIO17_LEVEL_LOW */
      __IM  uint32_t GPIO17_LEVEL_HIGH : 1;     /*!< [5..5] GPIO17_LEVEL_HIGH */
      __IOM uint32_t GPIO17_EDGE_LOW : 1;       /*!< [6..6] GPIO17_EDGE_LOW */
      __IOM uint32_t GPIO17_EDGE_HIGH : 1;      /*!< [7..7] GPIO17_EDGE_HIGH */
      __IM  uint32_t GPIO18_LEVEL_LOW : 1;      /*!< [8..8] GPIO18_LEVEL_LOW */
      __IM  uint32_t GPIO18_LEVEL_HIGH : 1;     /*!< [9..9] GPIO18_LEVEL_HIGH */
      __IOM uint32_t GPIO18_EDGE_LOW : 1;       /*!< [10..10] GPIO18_EDGE_LOW */
      __IOM uint32_t GPIO18_EDGE_HIGH : 1;      /*!< [11..11] GPIO18_EDGE_HIGH */
      __IM  uint32_t GPIO19_LEVEL_LOW : 1;      /*!< [12..12] GPIO19_LEVEL_LOW */
      __IM  uint32_t GPIO19_LEVEL_HIGH : 1;     /*!< [13..13] GPIO19_LEVEL_HIGH */
      __IOM uint32_t GPIO19_EDGE_LOW : 1;       /*!< [14..14] GPIO19_EDGE_LOW */
      __IOM uint32_t GPIO19_EDGE_HIGH : 1;      /*!< [15..15] GPIO19_EDGE_HIGH */
      __IM  uint32_t GPIO20_LEVEL_LOW : 1;      /*!< [16..16] GPIO20_LEVEL_LOW */
      __IM  uint32_t GPIO20_LEVEL_HIGH : 1;     /*!< [17..17] GPIO20_LEVEL_HIGH */
      __IOM uint32_t GPIO20_EDGE_LOW : 1;       /*!< [18..18] GPIO20_EDGE_LOW */
      __IOM uint32_t GPIO20_EDGE_HIGH : 1;      /*!< [19..19] GPIO20_EDGE_HIGH */
      __IM  uint32_t GPIO21_LEVEL_LOW : 1;      /*!< [20..20] GPIO21_LEVEL_LOW */
      __IM  uint32_t GPIO21_LEVEL_HIGH : 1;     /*!< [21..21] GPIO21_LEVEL_HIGH */
      __IOM uint32_t GPIO21_EDGE_LOW : 1;       /*!< [22..22] GPIO21_EDGE_LOW */
      __IOM uint32_t GPIO21_EDGE_HIGH : 1;      /*!< [23..23] GPIO21_EDGE_HIGH */
      __IM  uint32_t GPIO22_LEVEL_LOW : 1;      /*!< [24..24] GPIO22_LEVEL_LOW */
      __IM  uint32_t GPIO22_LEVEL_HIGH : 1;     /*!< [25..25] GPIO22_LEVEL_HIGH */
      __IOM uint32_t GPIO22_EDGE_LOW : 1;       /*!< [26..26] GPIO22_EDGE_LOW */
      __IOM uint32_t GPIO22_EDGE_HIGH : 1;      /*!< [27..27] GPIO22_EDGE_HIGH */
      __IM  uint32_t GPIO23_LEVEL_LOW : 1;      /*!< [28..28] GPIO23_LEVEL_LOW */
      __IM  uint32_t GPIO23_LEVEL_HIGH : 1;     /*!< [29..29] GPIO23_LEVEL_HIGH */
      __IOM uint32_t GPIO23_EDGE_LOW : 1;       /*!< [30..30] GPIO23_EDGE_LOW */
      __IOM uint32_t GPIO23_EDGE_HIGH : 1;      /*!< [31..31] GPIO23_EDGE_HIGH */
    } INTR2_b;
  } ;

  union {
    __IOM uint32_t INTR3;                       /*!< (@ 0x000000FC) Raw Interrupts */

    struct {
      __IM  uint32_t GPIO24_LEVEL_LOW : 1;      /*!< [0..0] GPIO24_LEVEL_LOW */
      __IM  uint32_t GPIO24_LEVEL_HIGH : 1;     /*!< [1..1] GPIO24_LEVEL_HIGH */
      __IOM uint32_t GPIO24_EDGE_LOW : 1;       /*!< [2..2] GPIO24_EDGE_LOW */
      __IOM uint32_t GPIO24_EDGE_HIGH : 1;      /*!< [3..3] GPIO24_EDGE_HIGH */
      __IM  uint32_t GPIO25_LEVEL_LOW : 1;      /*!< [4..4] GPIO25_LEVEL_LOW */
      __IM  uint32_t GPIO25_LEVEL_HIGH : 1;     /*!< [5..5] GPIO25_LEVEL_HIGH */
      __IOM uint32_t GPIO25_EDGE_LOW : 1;       /*!< [6..6] GPIO25_EDGE_LOW */
      __IOM uint32_t GPIO25_EDGE_HIGH : 1;      /*!< [7..7] GPIO25_EDGE_HIGH */
      __IM  uint32_t GPIO26_LEVEL_LOW : 1;      /*!< [8..8] GPIO26_LEVEL_LOW */
      __IM  uint32_t GPIO26_LEVEL_HIGH : 1;     /*!< [9..9] GPIO26_LEVEL_HIGH */
      __IOM uint32_t GPIO26_EDGE_LOW : 1;       /*!< [10..10] GPIO26_EDGE_LOW */
      __IOM uint32_t GPIO26_EDGE_HIGH : 1;      /*!< [11..11] GPIO26_EDGE_HIGH */
      __IM  uint32_t GPIO27_LEVEL_LOW : 1;      /*!< [12..12] GPIO27_LEVEL_LOW */
      __IM  uint32_t GPIO27_LEVEL_HIGH : 1;     /*!< [13..13] GPIO27_LEVEL_HIGH */
      __IOM uint32_t GPIO27_EDGE_LOW : 1;       /*!< [14..14] GPIO27_EDGE_LOW */
      __IOM uint32_t GPIO27_EDGE_HIGH : 1;      /*!< [15..15] GPIO27_EDGE_HIGH */
      __IM  uint32_t GPIO28_LEVEL_LOW : 1;      /*!< [16..16] GPIO28_LEVEL_LOW */
      __IM  uint32_t GPIO28_LEVEL_HIGH : 1;     /*!< [17..17] GPIO28_LEVEL_HIGH */
      __IOM uint32_t GPIO28_EDGE_LOW : 1;       /*!< [18..18] GPIO28_EDGE_LOW */
      __IOM uint32_t GPIO28_EDGE_HIGH : 1;      /*!< [19..19] GPIO28_EDGE_HIGH */
      __IM  uint32_t GPIO29_LEVEL_LOW : 1;      /*!< [20..20] GPIO29_LEVEL_LOW */
      __IM  uint32_t GPIO29_LEVEL_HIGH : 1;     /*!< [21..21] GPIO29_LEVEL_HIGH */
      __IOM uint32_t GPIO29_EDGE_LOW : 1;       /*!< [22..22] GPIO29_EDGE_LOW */
      __IOM uint32_t GPIO29_EDGE_HIGH : 1;      /*!< [23..23] GPIO29_EDGE_HIGH */
            uint32_t            : 8;
    } INTR3_b;
  } ;

  union {
    __IOM uint32_t PROC0_INTE0;                 /*!< (@ 0x00000100) Interrupt Enable for proc0 */

    struct {
      __IOM uint32_t GPIO0_LEVEL_LOW : 1;       /*!< [0..0] GPIO0_LEVEL_LOW */
      __IOM uint32_t GPIO0_LEVEL_HIGH : 1;      /*!< [1..1] GPIO0_LEVEL_HIGH */
      __IOM uint32_t GPIO0_EDGE_LOW : 1;        /*!< [2..2] GPIO0_EDGE_LOW */
      __IOM uint32_t GPIO0_EDGE_HIGH : 1;       /*!< [3..3] GPIO0_EDGE_HIGH */
      __IOM uint32_t GPIO1_LEVEL_LOW : 1;       /*!< [4..4] GPIO1_LEVEL_LOW */
      __IOM uint32_t GPIO1_LEVEL_HIGH : 1;      /*!< [5..5] GPIO1_LEVEL_HIGH */
      __IOM uint32_t GPIO1_EDGE_LOW : 1;        /*!< [6..6] GPIO1_EDGE_LOW */
      __IOM uint32_t GPIO1_EDGE_HIGH : 1;       /*!< [7..7] GPIO1_EDGE_HIGH */
      __IOM uint32_t GPIO2_LEVEL_LOW : 1;       /*!< [8..8] GPIO2_LEVEL_LOW */
      __IOM uint32_t GPIO2_LEVEL_HIGH : 1;      /*!< [9..9] GPIO2_LEVEL_HIGH */
      __IOM uint32_t GPIO2_EDGE_LOW : 1;        /*!< [10..10] GPIO2_EDGE_LOW */
      __IOM uint32_t GPIO2_EDGE_HIGH : 1;       /*!< [11..11] GPIO2_EDGE_HIGH */
      __IOM uint32_t GPIO3_LEVEL_LOW : 1;       /*!< [12..12] GPIO3_LEVEL_LOW */
      __IOM uint32_t GPIO3_LEVEL_HIGH : 1;      /*!< [13..13] GPIO3_LEVEL_HIGH */
      __IOM uint32_t GPIO3_EDGE_LOW : 1;        /*!< [14..14] GPIO3_EDGE_LOW */
      __IOM uint32_t GPIO3_EDGE_HIGH : 1;       /*!< [15..15] GPIO3_EDGE_HIGH */
      __IOM uint32_t GPIO4_LEVEL_LOW : 1;       /*!< [16..16] GPIO4_LEVEL_LOW */
      __IOM uint32_t GPIO4_LEVEL_HIGH : 1;      /*!< [17..17] GPIO4_LEVEL_HIGH */
      __IOM uint32_t GPIO4_EDGE_LOW : 1;        /*!< [18..18] GPIO4_EDGE_LOW */
      __IOM uint32_t GPIO4_EDGE_HIGH : 1;       /*!< [19..19] GPIO4_EDGE_HIGH */
      __IOM uint32_t GPIO5_LEVEL_LOW : 1;       /*!< [20..20] GPIO5_LEVEL_LOW */
      __IOM uint32_t GPIO5_LEVEL_HIGH : 1;      /*!< [21..21] GPIO5_LEVEL_HIGH */
      __IOM uint32_t GPIO5_EDGE_LOW : 1;        /*!< [22..22] GPIO5_EDGE_LOW */
      __IOM uint32_t GPIO5_EDGE_HIGH : 1;       /*!< [23..23] GPIO5_EDGE_HIGH */
      __IOM uint32_t GPIO6_LEVEL_LOW : 1;       /*!< [24..24] GPIO6_LEVEL_LOW */
      __IOM uint32_t GPIO6_LEVEL_HIGH : 1;      /*!< [25..25] GPIO6_LEVEL_HIGH */
      __IOM uint32_t GPIO6_EDGE_LOW : 1;        /*!< [26..26] GPIO6_EDGE_LOW */
      __IOM uint32_t GPIO6_EDGE_HIGH : 1;       /*!< [27..27] GPIO6_EDGE_HIGH */
      __IOM uint32_t GPIO7_LEVEL_LOW : 1;       /*!< [28..28] GPIO7_LEVEL_LOW */
      __IOM uint32_t GPIO7_LEVEL_HIGH : 1;      /*!< [29..29] GPIO7_LEVEL_HIGH */
      __IOM uint32_t GPIO7_EDGE_LOW : 1;        /*!< [30..30] GPIO7_EDGE_LOW */
      __IOM uint32_t GPIO7_EDGE_HIGH : 1;       /*!< [31..31] GPIO7_EDGE_HIGH */
    } PROC0_INTE0_b;
  } ;

  union {
    __IOM uint32_t PROC0_INTE1;                 /*!< (@ 0x00000104) Interrupt Enable for proc0 */

    struct {
      __IOM uint32_t GPIO8_LEVEL_LOW : 1;       /*!< [0..0] GPIO8_LEVEL_LOW */
      __IOM uint32_t GPIO8_LEVEL_HIGH : 1;      /*!< [1..1] GPIO8_LEVEL_HIGH */
      __IOM uint32_t GPIO8_EDGE_LOW : 1;        /*!< [2..2] GPIO8_EDGE_LOW */
      __IOM uint32_t GPIO8_EDGE_HIGH : 1;       /*!< [3..3] GPIO8_EDGE_HIGH */
      __IOM uint32_t GPIO9_LEVEL_LOW : 1;       /*!< [4..4] GPIO9_LEVEL_LOW */
      __IOM uint32_t GPIO9_LEVEL_HIGH : 1;      /*!< [5..5] GPIO9_LEVEL_HIGH */
      __IOM uint32_t GPIO9_EDGE_LOW : 1;        /*!< [6..6] GPIO9_EDGE_LOW */
      __IOM uint32_t GPIO9_EDGE_HIGH : 1;       /*!< [7..7] GPIO9_EDGE_HIGH */
      __IOM uint32_t GPIO10_LEVEL_LOW : 1;      /*!< [8..8] GPIO10_LEVEL_LOW */
      __IOM uint32_t GPIO10_LEVEL_HIGH : 1;     /*!< [9..9] GPIO10_LEVEL_HIGH */
      __IOM uint32_t GPIO10_EDGE_LOW : 1;       /*!< [10..10] GPIO10_EDGE_LOW */
      __IOM uint32_t GPIO10_EDGE_HIGH : 1;      /*!< [11..11] GPIO10_EDGE_HIGH */
      __IOM uint32_t GPIO11_LEVEL_LOW : 1;      /*!< [12..12] GPIO11_LEVEL_LOW */
      __IOM uint32_t GPIO11_LEVEL_HIGH : 1;     /*!< [13..13] GPIO11_LEVEL_HIGH */
      __IOM uint32_t GPIO11_EDGE_LOW : 1;       /*!< [14..14] GPIO11_EDGE_LOW */
      __IOM uint32_t GPIO11_EDGE_HIGH : 1;      /*!< [15..15] GPIO11_EDGE_HIGH */
      __IOM uint32_t GPIO12_LEVEL_LOW : 1;      /*!< [16..16] GPIO12_LEVEL_LOW */
      __IOM uint32_t GPIO12_LEVEL_HIGH : 1;     /*!< [17..17] GPIO12_LEVEL_HIGH */
      __IOM uint32_t GPIO12_EDGE_LOW : 1;       /*!< [18..18] GPIO12_EDGE_LOW */
      __IOM uint32_t GPIO12_EDGE_HIGH : 1;      /*!< [19..19] GPIO12_EDGE_HIGH */
      __IOM uint32_t GPIO13_LEVEL_LOW : 1;      /*!< [20..20] GPIO13_LEVEL_LOW */
      __IOM uint32_t GPIO13_LEVEL_HIGH : 1;     /*!< [21..21] GPIO13_LEVEL_HIGH */
      __IOM uint32_t GPIO13_EDGE_LOW : 1;       /*!< [22..22] GPIO13_EDGE_LOW */
      __IOM uint32_t GPIO13_EDGE_HIGH : 1;      /*!< [23..23] GPIO13_EDGE_HIGH */
      __IOM uint32_t GPIO14_LEVEL_LOW : 1;      /*!< [24..24] GPIO14_LEVEL_LOW */
      __IOM uint32_t GPIO14_LEVEL_HIGH : 1;     /*!< [25..25] GPIO14_LEVEL_HIGH */
      __IOM uint32_t GPIO14_EDGE_LOW : 1;       /*!< [26..26] GPIO14_EDGE_LOW */
      __IOM uint32_t GPIO14_EDGE_HIGH : 1;      /*!< [27..27] GPIO14_EDGE_HIGH */
      __IOM uint32_t GPIO15_LEVEL_LOW : 1;      /*!< [28..28] GPIO15_LEVEL_LOW */
      __IOM uint32_t GPIO15_LEVEL_HIGH : 1;     /*!< [29..29] GPIO15_LEVEL_HIGH */
      __IOM uint32_t GPIO15_EDGE_LOW : 1;       /*!< [30..30] GPIO15_EDGE_LOW */
      __IOM uint32_t GPIO15_EDGE_HIGH : 1;      /*!< [31..31] GPIO15_EDGE_HIGH */
    } PROC0_INTE1_b;
  } ;

  union {
    __IOM uint32_t PROC0_INTE2;                 /*!< (@ 0x00000108) Interrupt Enable for proc0 */

    struct {
      __IOM uint32_t GPIO16_LEVEL_LOW : 1;      /*!< [0..0] GPIO16_LEVEL_LOW */
      __IOM uint32_t GPIO16_LEVEL_HIGH : 1;     /*!< [1..1] GPIO16_LEVEL_HIGH */
      __IOM uint32_t GPIO16_EDGE_LOW : 1;       /*!< [2..2] GPIO16_EDGE_LOW */
      __IOM uint32_t GPIO16_EDGE_HIGH : 1;      /*!< [3..3] GPIO16_EDGE_HIGH */
      __IOM uint32_t GPIO17_LEVEL_LOW : 1;      /*!< [4..4] GPIO17_LEVEL_LOW */
      __IOM uint32_t GPIO17_LEVEL_HIGH : 1;     /*!< [5..5] GPIO17_LEVEL_HIGH */
      __IOM uint32_t GPIO17_EDGE_LOW : 1;       /*!< [6..6] GPIO17_EDGE_LOW */
      __IOM uint32_t GPIO17_EDGE_HIGH : 1;      /*!< [7..7] GPIO17_EDGE_HIGH */
      __IOM uint32_t GPIO18_LEVEL_LOW : 1;      /*!< [8..8] GPIO18_LEVEL_LOW */
      __IOM uint32_t GPIO18_LEVEL_HIGH : 1;     /*!< [9..9] GPIO18_LEVEL_HIGH */
      __IOM uint32_t GPIO18_EDGE_LOW : 1;       /*!< [10..10] GPIO18_EDGE_LOW */
      __IOM uint32_t GPIO18_EDGE_HIGH : 1;      /*!< [11..11] GPIO18_EDGE_HIGH */
      __IOM uint32_t GPIO19_LEVEL_LOW : 1;      /*!< [12..12] GPIO19_LEVEL_LOW */
      __IOM uint32_t GPIO19_LEVEL_HIGH : 1;     /*!< [13..13] GPIO19_LEVEL_HIGH */
      __IOM uint32_t GPIO19_EDGE_LOW : 1;       /*!< [14..14] GPIO19_EDGE_LOW */
      __IOM uint32_t GPIO19_EDGE_HIGH : 1;      /*!< [15..15] GPIO19_EDGE_HIGH */
      __IOM uint32_t GPIO20_LEVEL_LOW : 1;      /*!< [16..16] GPIO20_LEVEL_LOW */
      __IOM uint32_t GPIO20_LEVEL_HIGH : 1;     /*!< [17..17] GPIO20_LEVEL_HIGH */
      __IOM uint32_t GPIO20_EDGE_LOW : 1;       /*!< [18..18] GPIO20_EDGE_LOW */
      __IOM uint32_t GPIO20_EDGE_HIGH : 1;      /*!< [19..19] GPIO20_EDGE_HIGH */
      __IOM uint32_t GPIO21_LEVEL_LOW : 1;      /*!< [20..20] GPIO21_LEVEL_LOW */
      __IOM uint32_t GPIO21_LEVEL_HIGH : 1;     /*!< [21..21] GPIO21_LEVEL_HIGH */
      __IOM uint32_t GPIO21_EDGE_LOW : 1;       /*!< [22..22] GPIO21_EDGE_LOW */
      __IOM uint32_t GPIO21_EDGE_HIGH : 1;      /*!< [23..23] GPIO21_EDGE_HIGH */
      __IOM uint32_t GPIO22_LEVEL_LOW : 1;      /*!< [24..24] GPIO22_LEVEL_LOW */
      __IOM uint32_t GPIO22_LEVEL_HIGH : 1;     /*!< [25..25] GPIO22_LEVEL_HIGH */
      __IOM uint32_t GPIO22_EDGE_LOW : 1;       /*!< [26..26] GPIO22_EDGE_LOW */
      __IOM uint32_t GPIO22_EDGE_HIGH : 1;      /*!< [27..27] GPIO22_EDGE_HIGH */
      __IOM uint32_t GPIO23_LEVEL_LOW : 1;      /*!< [28..28] GPIO23_LEVEL_LOW */
      __IOM uint32_t GPIO23_LEVEL_HIGH : 1;     /*!< [29..29] GPIO23_LEVEL_HIGH */
      __IOM uint32_t GPIO23_EDGE_LOW : 1;       /*!< [30..30] GPIO23_EDGE_LOW */
      __IOM uint32_t GPIO23_EDGE_HIGH : 1;      /*!< [31..31] GPIO23_EDGE_HIGH */
    } PROC0_INTE2_b;
  } ;

  union {
    __IOM uint32_t PROC0_INTE3;                 /*!< (@ 0x0000010C) Interrupt Enable for proc0 */

    struct {
      __IOM uint32_t GPIO24_LEVEL_LOW : 1;      /*!< [0..0] GPIO24_LEVEL_LOW */
      __IOM uint32_t GPIO24_LEVEL_HIGH : 1;     /*!< [1..1] GPIO24_LEVEL_HIGH */
      __IOM uint32_t GPIO24_EDGE_LOW : 1;       /*!< [2..2] GPIO24_EDGE_LOW */
      __IOM uint32_t GPIO24_EDGE_HIGH : 1;      /*!< [3..3] GPIO24_EDGE_HIGH */
      __IOM uint32_t GPIO25_LEVEL_LOW : 1;      /*!< [4..4] GPIO25_LEVEL_LOW */
      __IOM uint32_t GPIO25_LEVEL_HIGH : 1;     /*!< [5..5] GPIO25_LEVEL_HIGH */
      __IOM uint32_t GPIO25_EDGE_LOW : 1;       /*!< [6..6] GPIO25_EDGE_LOW */
      __IOM uint32_t GPIO25_EDGE_HIGH : 1;      /*!< [7..7] GPIO25_EDGE_HIGH */
      __IOM uint32_t GPIO26_LEVEL_LOW : 1;      /*!< [8..8] GPIO26_LEVEL_LOW */
      __IOM uint32_t GPIO26_LEVEL_HIGH : 1;     /*!< [9..9] GPIO26_LEVEL_HIGH */
      __IOM uint32_t GPIO26_EDGE_LOW : 1;       /*!< [10..10] GPIO26_EDGE_LOW */
      __IOM uint32_t GPIO26_EDGE_HIGH : 1;      /*!< [11..11] GPIO26_EDGE_HIGH */
      __IOM uint32_t GPIO27_LEVEL_LOW : 1;      /*!< [12..12] GPIO27_LEVEL_LOW */
      __IOM uint32_t GPIO27_LEVEL_HIGH : 1;     /*!< [13..13] GPIO27_LEVEL_HIGH */
      __IOM uint32_t GPIO27_EDGE_LOW : 1;       /*!< [14..14] GPIO27_EDGE_LOW */
      __IOM uint32_t GPIO27_EDGE_HIGH : 1;      /*!< [15..15] GPIO27_EDGE_HIGH */
      __IOM uint32_t GPIO28_LEVEL_LOW : 1;      /*!< [16..16] GPIO28_LEVEL_LOW */
      __IOM uint32_t GPIO28_LEVEL_HIGH : 1;     /*!< [17..17] GPIO28_LEVEL_HIGH */
      __IOM uint32_t GPIO28_EDGE_LOW : 1;       /*!< [18..18] GPIO28_EDGE_LOW */
      __IOM uint32_t GPIO28_EDGE_HIGH : 1;      /*!< [19..19] GPIO28_EDGE_HIGH */
      __IOM uint32_t GPIO29_LEVEL_LOW : 1;      /*!< [20..20] GPIO29_LEVEL_LOW */
      __IOM uint32_t GPIO29_LEVEL_HIGH : 1;     /*!< [21..21] GPIO29_LEVEL_HIGH */
      __IOM uint32_t GPIO29_EDGE_LOW : 1;       /*!< [22..22] GPIO29_EDGE_LOW */
      __IOM uint32_t GPIO29_EDGE_HIGH : 1;      /*!< [23..23] GPIO29_EDGE_HIGH */
            uint32_t            : 8;
    } PROC0_INTE3_b;
  } ;

  union {
    __IOM uint32_t PROC0_INTF0;                 /*!< (@ 0x00000110) Interrupt Force for proc0 */

    struct {
      __IOM uint32_t GPIO0_LEVEL_LOW : 1;       /*!< [0..0] GPIO0_LEVEL_LOW */
      __IOM uint32_t GPIO0_LEVEL_HIGH : 1;      /*!< [1..1] GPIO0_LEVEL_HIGH */
      __IOM uint32_t GPIO0_EDGE_LOW : 1;        /*!< [2..2] GPIO0_EDGE_LOW */
      __IOM uint32_t GPIO0_EDGE_HIGH : 1;       /*!< [3..3] GPIO0_EDGE_HIGH */
      __IOM uint32_t GPIO1_LEVEL_LOW : 1;       /*!< [4..4] GPIO1_LEVEL_LOW */
      __IOM uint32_t GPIO1_LEVEL_HIGH : 1;      /*!< [5..5] GPIO1_LEVEL_HIGH */
      __IOM uint32_t GPIO1_EDGE_LOW : 1;        /*!< [6..6] GPIO1_EDGE_LOW */
      __IOM uint32_t GPIO1_EDGE_HIGH : 1;       /*!< [7..7] GPIO1_EDGE_HIGH */
      __IOM uint32_t GPIO2_LEVEL_LOW : 1;       /*!< [8..8] GPIO2_LEVEL_LOW */
      __IOM uint32_t GPIO2_LEVEL_HIGH : 1;      /*!< [9..9] GPIO2_LEVEL_HIGH */
      __IOM uint32_t GPIO2_EDGE_LOW : 1;        /*!< [10..10] GPIO2_EDGE_LOW */
      __IOM uint32_t GPIO2_EDGE_HIGH : 1;       /*!< [11..11] GPIO2_EDGE_HIGH */
      __IOM uint32_t GPIO3_LEVEL_LOW : 1;       /*!< [12..12] GPIO3_LEVEL_LOW */
      __IOM uint32_t GPIO3_LEVEL_HIGH : 1;      /*!< [13..13] GPIO3_LEVEL_HIGH */
      __IOM uint32_t GPIO3_EDGE_LOW : 1;        /*!< [14..14] GPIO3_EDGE_LOW */
      __IOM uint32_t GPIO3_EDGE_HIGH : 1;       /*!< [15..15] GPIO3_EDGE_HIGH */
      __IOM uint32_t GPIO4_LEVEL_LOW : 1;       /*!< [16..16] GPIO4_LEVEL_LOW */
      __IOM uint32_t GPIO4_LEVEL_HIGH : 1;      /*!< [17..17] GPIO4_LEVEL_HIGH */
      __IOM uint32_t GPIO4_EDGE_LOW : 1;        /*!< [18..18] GPIO4_EDGE_LOW */
      __IOM uint32_t GPIO4_EDGE_HIGH : 1;       /*!< [19..19] GPIO4_EDGE_HIGH */
      __IOM uint32_t GPIO5_LEVEL_LOW : 1;       /*!< [20..20] GPIO5_LEVEL_LOW */
      __IOM uint32_t GPIO5_LEVEL_HIGH : 1;      /*!< [21..21] GPIO5_LEVEL_HIGH */
      __IOM uint32_t GPIO5_EDGE_LOW : 1;        /*!< [22..22] GPIO5_EDGE_LOW */
      __IOM uint32_t GPIO5_EDGE_HIGH : 1;       /*!< [23..23] GPIO5_EDGE_HIGH */
      __IOM uint32_t GPIO6_LEVEL_LOW : 1;       /*!< [24..24] GPIO6_LEVEL_LOW */
      __IOM uint32_t GPIO6_LEVEL_HIGH : 1;      /*!< [25..25] GPIO6_LEVEL_HIGH */
      __IOM uint32_t GPIO6_EDGE_LOW : 1;        /*!< [26..26] GPIO6_EDGE_LOW */
      __IOM uint32_t GPIO6_EDGE_HIGH : 1;       /*!< [27..27] GPIO6_EDGE_HIGH */
      __IOM uint32_t GPIO7_LEVEL_LOW : 1;       /*!< [28..28] GPIO7_LEVEL_LOW */
      __IOM uint32_t GPIO7_LEVEL_HIGH : 1;      /*!< [29..29] GPIO7_LEVEL_HIGH */
      __IOM uint32_t GPIO7_EDGE_LOW : 1;        /*!< [30..30] GPIO7_EDGE_LOW */
      __IOM uint32_t GPIO7_EDGE_HIGH : 1;       /*!< [31..31] GPIO7_EDGE_HIGH */
    } PROC0_INTF0_b;
  } ;

  union {
    __IOM uint32_t PROC0_INTF1;                 /*!< (@ 0x00000114) Interrupt Force for proc0 */

    struct {
      __IOM uint32_t GPIO8_LEVEL_LOW : 1;       /*!< [0..0] GPIO8_LEVEL_LOW */
      __IOM uint32_t GPIO8_LEVEL_HIGH : 1;      /*!< [1..1] GPIO8_LEVEL_HIGH */
      __IOM uint32_t GPIO8_EDGE_LOW : 1;        /*!< [2..2] GPIO8_EDGE_LOW */
      __IOM uint32_t GPIO8_EDGE_HIGH : 1;       /*!< [3..3] GPIO8_EDGE_HIGH */
      __IOM uint32_t GPIO9_LEVEL_LOW : 1;       /*!< [4..4] GPIO9_LEVEL_LOW */
      __IOM uint32_t GPIO9_LEVEL_HIGH : 1;      /*!< [5..5] GPIO9_LEVEL_HIGH */
      __IOM uint32_t GPIO9_EDGE_LOW : 1;        /*!< [6..6] GPIO9_EDGE_LOW */
      __IOM uint32_t GPIO9_EDGE_HIGH : 1;       /*!< [7..7] GPIO9_EDGE_HIGH */
      __IOM uint32_t GPIO10_LEVEL_LOW : 1;      /*!< [8..8] GPIO10_LEVEL_LOW */
      __IOM uint32_t GPIO10_LEVEL_HIGH : 1;     /*!< [9..9] GPIO10_LEVEL_HIGH */
      __IOM uint32_t GPIO10_EDGE_LOW : 1;       /*!< [10..10] GPIO10_EDGE_LOW */
      __IOM uint32_t GPIO10_EDGE_HIGH : 1;      /*!< [11..11] GPIO10_EDGE_HIGH */
      __IOM uint32_t GPIO11_LEVEL_LOW : 1;      /*!< [12..12] GPIO11_LEVEL_LOW */
      __IOM uint32_t GPIO11_LEVEL_HIGH : 1;     /*!< [13..13] GPIO11_LEVEL_HIGH */
      __IOM uint32_t GPIO11_EDGE_LOW : 1;       /*!< [14..14] GPIO11_EDGE_LOW */
      __IOM uint32_t GPIO11_EDGE_HIGH : 1;      /*!< [15..15] GPIO11_EDGE_HIGH */
      __IOM uint32_t GPIO12_LEVEL_LOW : 1;      /*!< [16..16] GPIO12_LEVEL_LOW */
      __IOM uint32_t GPIO12_LEVEL_HIGH : 1;     /*!< [17..17] GPIO12_LEVEL_HIGH */
      __IOM uint32_t GPIO12_EDGE_LOW : 1;       /*!< [18..18] GPIO12_EDGE_LOW */
      __IOM uint32_t GPIO12_EDGE_HIGH : 1;      /*!< [19..19] GPIO12_EDGE_HIGH */
      __IOM uint32_t GPIO13_LEVEL_LOW : 1;      /*!< [20..20] GPIO13_LEVEL_LOW */
      __IOM uint32_t GPIO13_LEVEL_HIGH : 1;     /*!< [21..21] GPIO13_LEVEL_HIGH */
      __IOM uint32_t GPIO13_EDGE_LOW : 1;       /*!< [22..22] GPIO13_EDGE_LOW */
      __IOM uint32_t GPIO13_EDGE_HIGH : 1;      /*!< [23..23] GPIO13_EDGE_HIGH */
      __IOM uint32_t GPIO14_LEVEL_LOW : 1;      /*!< [24..24] GPIO14_LEVEL_LOW */
      __IOM uint32_t GPIO14_LEVEL_HIGH : 1;     /*!< [25..25] GPIO14_LEVEL_HIGH */
      __IOM uint32_t GPIO14_EDGE_LOW : 1;       /*!< [26..26] GPIO14_EDGE_LOW */
      __IOM uint32_t GPIO14_EDGE_HIGH : 1;      /*!< [27..27] GPIO14_EDGE_HIGH */
      __IOM uint32_t GPIO15_LEVEL_LOW : 1;      /*!< [28..28] GPIO15_LEVEL_LOW */
      __IOM uint32_t GPIO15_LEVEL_HIGH : 1;     /*!< [29..29] GPIO15_LEVEL_HIGH */
      __IOM uint32_t GPIO15_EDGE_LOW : 1;       /*!< [30..30] GPIO15_EDGE_LOW */
      __IOM uint32_t GPIO15_EDGE_HIGH : 1;      /*!< [31..31] GPIO15_EDGE_HIGH */
    } PROC0_INTF1_b;
  } ;

  union {
    __IOM uint32_t PROC0_INTF2;                 /*!< (@ 0x00000118) Interrupt Force for proc0 */

    struct {
      __IOM uint32_t GPIO16_LEVEL_LOW : 1;      /*!< [0..0] GPIO16_LEVEL_LOW */
      __IOM uint32_t GPIO16_LEVEL_HIGH : 1;     /*!< [1..1] GPIO16_LEVEL_HIGH */
      __IOM uint32_t GPIO16_EDGE_LOW : 1;       /*!< [2..2] GPIO16_EDGE_LOW */
      __IOM uint32_t GPIO16_EDGE_HIGH : 1;      /*!< [3..3] GPIO16_EDGE_HIGH */
      __IOM uint32_t GPIO17_LEVEL_LOW : 1;      /*!< [4..4] GPIO17_LEVEL_LOW */
      __IOM uint32_t GPIO17_LEVEL_HIGH : 1;     /*!< [5..5] GPIO17_LEVEL_HIGH */
      __IOM uint32_t GPIO17_EDGE_LOW : 1;       /*!< [6..6] GPIO17_EDGE_LOW */
      __IOM uint32_t GPIO17_EDGE_HIGH : 1;      /*!< [7..7] GPIO17_EDGE_HIGH */
      __IOM uint32_t GPIO18_LEVEL_LOW : 1;      /*!< [8..8] GPIO18_LEVEL_LOW */
      __IOM uint32_t GPIO18_LEVEL_HIGH : 1;     /*!< [9..9] GPIO18_LEVEL_HIGH */
      __IOM uint32_t GPIO18_EDGE_LOW : 1;       /*!< [10..10] GPIO18_EDGE_LOW */
      __IOM uint32_t GPIO18_EDGE_HIGH : 1;      /*!< [11..11] GPIO18_EDGE_HIGH */
      __IOM uint32_t GPIO19_LEVEL_LOW : 1;      /*!< [12..12] GPIO19_LEVEL_LOW */
      __IOM uint32_t GPIO19_LEVEL_HIGH : 1;     /*!< [13..13] GPIO19_LEVEL_HIGH */
      __IOM uint32_t GPIO19_EDGE_LOW : 1;       /*!< [14..14] GPIO19_EDGE_LOW */
      __IOM uint32_t GPIO19_EDGE_HIGH : 1;      /*!< [15..15] GPIO19_EDGE_HIGH */
      __IOM uint32_t GPIO20_LEVEL_LOW : 1;      /*!< [16..16] GPIO20_LEVEL_LOW */
      __IOM uint32_t GPIO20_LEVEL_HIGH : 1;     /*!< [17..17] GPIO20_LEVEL_HIGH */
      __IOM uint32_t GPIO20_EDGE_LOW : 1;       /*!< [18..18] GPIO20_EDGE_LOW */
      __IOM uint32_t GPIO20_EDGE_HIGH : 1;      /*!< [19..19] GPIO20_EDGE_HIGH */
      __IOM uint32_t GPIO21_LEVEL_LOW : 1;      /*!< [20..20] GPIO21_LEVEL_LOW */
      __IOM uint32_t GPIO21_LEVEL_HIGH : 1;     /*!< [21..21] GPIO21_LEVEL_HIGH */
      __IOM uint32_t GPIO21_EDGE_LOW : 1;       /*!< [22..22] GPIO21_EDGE_LOW */
      __IOM uint32_t GPIO21_EDGE_HIGH : 1;      /*!< [23..23] GPIO21_EDGE_HIGH */
      __IOM uint32_t GPIO22_LEVEL_LOW : 1;      /*!< [24..24] GPIO22_LEVEL_LOW */
      __IOM uint32_t GPIO22_LEVEL_HIGH : 1;     /*!< [25..25] GPIO22_LEVEL_HIGH */
      __IOM uint32_t GPIO22_EDGE_LOW : 1;       /*!< [26..26] GPIO22_EDGE_LOW */
      __IOM uint32_t GPIO22_EDGE_HIGH : 1;      /*!< [27..27] GPIO22_EDGE_HIGH */
      __IOM uint32_t GPIO23_LEVEL_LOW : 1;      /*!< [28..28] GPIO23_LEVEL_LOW */
      __IOM uint32_t GPIO23_LEVEL_HIGH : 1;     /*!< [29..29] GPIO23_LEVEL_HIGH */
      __IOM uint32_t GPIO23_EDGE_LOW : 1;       /*!< [30..30] GPIO23_EDGE_LOW */
      __IOM uint32_t GPIO23_EDGE_HIGH : 1;      /*!< [31..31] GPIO23_EDGE_HIGH */
    } PROC0_INTF2_b;
  } ;

  union {
    __IOM uint32_t PROC0_INTF3;                 /*!< (@ 0x0000011C) Interrupt Force for proc0 */

    struct {
      __IOM uint32_t GPIO24_LEVEL_LOW : 1;      /*!< [0..0] GPIO24_LEVEL_LOW */
      __IOM uint32_t GPIO24_LEVEL_HIGH : 1;     /*!< [1..1] GPIO24_LEVEL_HIGH */
      __IOM uint32_t GPIO24_EDGE_LOW : 1;       /*!< [2..2] GPIO24_EDGE_LOW */
      __IOM uint32_t GPIO24_EDGE_HIGH : 1;      /*!< [3..3] GPIO24_EDGE_HIGH */
      __IOM uint32_t GPIO25_LEVEL_LOW : 1;      /*!< [4..4] GPIO25_LEVEL_LOW */
      __IOM uint32_t GPIO25_LEVEL_HIGH : 1;     /*!< [5..5] GPIO25_LEVEL_HIGH */
      __IOM uint32_t GPIO25_EDGE_LOW : 1;       /*!< [6..6] GPIO25_EDGE_LOW */
      __IOM uint32_t GPIO25_EDGE_HIGH : 1;      /*!< [7..7] GPIO25_EDGE_HIGH */
      __IOM uint32_t GPIO26_LEVEL_LOW : 1;      /*!< [8..8] GPIO26_LEVEL_LOW */
      __IOM uint32_t GPIO26_LEVEL_HIGH : 1;     /*!< [9..9] GPIO26_LEVEL_HIGH */
      __IOM uint32_t GPIO26_EDGE_LOW : 1;       /*!< [10..10] GPIO26_EDGE_LOW */
      __IOM uint32_t GPIO26_EDGE_HIGH : 1;      /*!< [11..11] GPIO26_EDGE_HIGH */
      __IOM uint32_t GPIO27_LEVEL_LOW : 1;      /*!< [12..12] GPIO27_LEVEL_LOW */
      __IOM uint32_t GPIO27_LEVEL_HIGH : 1;     /*!< [13..13] GPIO27_LEVEL_HIGH */
      __IOM uint32_t GPIO27_EDGE_LOW : 1;       /*!< [14..14] GPIO27_EDGE_LOW */
      __IOM uint32_t GPIO27_EDGE_HIGH : 1;      /*!< [15..15] GPIO27_EDGE_HIGH */
      __IOM uint32_t GPIO28_LEVEL_LOW : 1;      /*!< [16..16] GPIO28_LEVEL_LOW */
      __IOM uint32_t GPIO28_LEVEL_HIGH : 1;     /*!< [17..17] GPIO28_LEVEL_HIGH */
      __IOM uint32_t GPIO28_EDGE_LOW : 1;       /*!< [18..18] GPIO28_EDGE_LOW */
      __IOM uint32_t GPIO28_EDGE_HIGH : 1;      /*!< [19..19] GPIO28_EDGE_HIGH */
      __IOM uint32_t GPIO29_LEVEL_LOW : 1;      /*!< [20..20] GPIO29_LEVEL_LOW */
      __IOM uint32_t GPIO29_LEVEL_HIGH : 1;     /*!< [21..21] GPIO29_LEVEL_HIGH */
      __IOM uint32_t GPIO29_EDGE_LOW : 1;       /*!< [22..22] GPIO29_EDGE_LOW */
      __IOM uint32_t GPIO29_EDGE_HIGH : 1;      /*!< [23..23] GPIO29_EDGE_HIGH */
            uint32_t            : 8;
    } PROC0_INTF3_b;
  } ;

  union {
    __IOM uint32_t PROC0_INTS0;                 /*!< (@ 0x00000120) Interrupt status after masking & forcing for proc0 */

    struct {
      __IM  uint32_t GPIO0_LEVEL_LOW : 1;       /*!< [0..0] GPIO0_LEVEL_LOW */
      __IM  uint32_t GPIO0_LEVEL_HIGH : 1;      /*!< [1..1] GPIO0_LEVEL_HIGH */
      __IM  uint32_t GPIO0_EDGE_LOW : 1;        /*!< [2..2] GPIO0_EDGE_LOW */
      __IM  uint32_t GPIO0_EDGE_HIGH : 1;       /*!< [3..3] GPIO0_EDGE_HIGH */
      __IM  uint32_t GPIO1_LEVEL_LOW : 1;       /*!< [4..4] GPIO1_LEVEL_LOW */
      __IM  uint32_t GPIO1_LEVEL_HIGH : 1;      /*!< [5..5] GPIO1_LEVEL_HIGH */
      __IM  uint32_t GPIO1_EDGE_LOW : 1;        /*!< [6..6] GPIO1_EDGE_LOW */
      __IM  uint32_t GPIO1_EDGE_HIGH : 1;       /*!< [7..7] GPIO1_EDGE_HIGH */
      __IM  uint32_t GPIO2_LEVEL_LOW : 1;       /*!< [8..8] GPIO2_LEVEL_LOW */
      __IM  uint32_t GPIO2_LEVEL_HIGH : 1;      /*!< [9..9] GPIO2_LEVEL_HIGH */
      __IM  uint32_t GPIO2_EDGE_LOW : 1;        /*!< [10..10] GPIO2_EDGE_LOW */
      __IM  uint32_t GPIO2_EDGE_HIGH : 1;       /*!< [11..11] GPIO2_EDGE_HIGH */
      __IM  uint32_t GPIO3_LEVEL_LOW : 1;       /*!< [12..12] GPIO3_LEVEL_LOW */
      __IM  uint32_t GPIO3_LEVEL_HIGH : 1;      /*!< [13..13] GPIO3_LEVEL_HIGH */
      __IM  uint32_t GPIO3_EDGE_LOW : 1;        /*!< [14..14] GPIO3_EDGE_LOW */
      __IM  uint32_t GPIO3_EDGE_HIGH : 1;       /*!< [15..15] GPIO3_EDGE_HIGH */
      __IM  uint32_t GPIO4_LEVEL_LOW : 1;       /*!< [16..16] GPIO4_LEVEL_LOW */
      __IM  uint32_t GPIO4_LEVEL_HIGH : 1;      /*!< [17..17] GPIO4_LEVEL_HIGH */
      __IM  uint32_t GPIO4_EDGE_LOW : 1;        /*!< [18..18] GPIO4_EDGE_LOW */
      __IM  uint32_t GPIO4_EDGE_HIGH : 1;       /*!< [19..19] GPIO4_EDGE_HIGH */
      __IM  uint32_t GPIO5_LEVEL_LOW : 1;       /*!< [20..20] GPIO5_LEVEL_LOW */
      __IM  uint32_t GPIO5_LEVEL_HIGH : 1;      /*!< [21..21] GPIO5_LEVEL_HIGH */
      __IM  uint32_t GPIO5_EDGE_LOW : 1;        /*!< [22..22] GPIO5_EDGE_LOW */
      __IM  uint32_t GPIO5_EDGE_HIGH : 1;       /*!< [23..23] GPIO5_EDGE_HIGH */
      __IM  uint32_t GPIO6_LEVEL_LOW : 1;       /*!< [24..24] GPIO6_LEVEL_LOW */
      __IM  uint32_t GPIO6_LEVEL_HIGH : 1;      /*!< [25..25] GPIO6_LEVEL_HIGH */
      __IM  uint32_t GPIO6_EDGE_LOW : 1;        /*!< [26..26] GPIO6_EDGE_LOW */
      __IM  uint32_t GPIO6_EDGE_HIGH : 1;       /*!< [27..27] GPIO6_EDGE_HIGH */
      __IM  uint32_t GPIO7_LEVEL_LOW : 1;       /*!< [28..28] GPIO7_LEVEL_LOW */
      __IM  uint32_t GPIO7_LEVEL_HIGH : 1;      /*!< [29..29] GPIO7_LEVEL_HIGH */
      __IM  uint32_t GPIO7_EDGE_LOW : 1;        /*!< [30..30] GPIO7_EDGE_LOW */
      __IM  uint32_t GPIO7_EDGE_HIGH : 1;       /*!< [31..31] GPIO7_EDGE_HIGH */
    } PROC0_INTS0_b;
  } ;

  union {
    __IOM uint32_t PROC0_INTS1;                 /*!< (@ 0x00000124) Interrupt status after masking & forcing for proc0 */

    struct {
      __IM  uint32_t GPIO8_LEVEL_LOW : 1;       /*!< [0..0] GPIO8_LEVEL_LOW */
      __IM  uint32_t GPIO8_LEVEL_HIGH : 1;      /*!< [1..1] GPIO8_LEVEL_HIGH */
      __IM  uint32_t GPIO8_EDGE_LOW : 1;        /*!< [2..2] GPIO8_EDGE_LOW */
      __IM  uint32_t GPIO8_EDGE_HIGH : 1;       /*!< [3..3] GPIO8_EDGE_HIGH */
      __IM  uint32_t GPIO9_LEVEL_LOW : 1;       /*!< [4..4] GPIO9_LEVEL_LOW */
      __IM  uint32_t GPIO9_LEVEL_HIGH : 1;      /*!< [5..5] GPIO9_LEVEL_HIGH */
      __IM  uint32_t GPIO9_EDGE_LOW : 1;        /*!< [6..6] GPIO9_EDGE_LOW */
      __IM  uint32_t GPIO9_EDGE_HIGH : 1;       /*!< [7..7] GPIO9_EDGE_HIGH */
      __IM  uint32_t GPIO10_LEVEL_LOW : 1;      /*!< [8..8] GPIO10_LEVEL_LOW */
      __IM  uint32_t GPIO10_LEVEL_HIGH : 1;     /*!< [9..9] GPIO10_LEVEL_HIGH */
      __IM  uint32_t GPIO10_EDGE_LOW : 1;       /*!< [10..10] GPIO10_EDGE_LOW */
      __IM  uint32_t GPIO10_EDGE_HIGH : 1;      /*!< [11..11] GPIO10_EDGE_HIGH */
      __IM  uint32_t GPIO11_LEVEL_LOW : 1;      /*!< [12..12] GPIO11_LEVEL_LOW */
      __IM  uint32_t GPIO11_LEVEL_HIGH : 1;     /*!< [13..13] GPIO11_LEVEL_HIGH */
      __IM  uint32_t GPIO11_EDGE_LOW : 1;       /*!< [14..14] GPIO11_EDGE_LOW */
      __IM  uint32_t GPIO11_EDGE_HIGH : 1;      /*!< [15..15] GPIO11_EDGE_HIGH */
      __IM  uint32_t GPIO12_LEVEL_LOW : 1;      /*!< [16..16] GPIO12_LEVEL_LOW */
      __IM  uint32_t GPIO12_LEVEL_HIGH : 1;     /*!< [17..17] GPIO12_LEVEL_HIGH */
      __IM  uint32_t GPIO12_EDGE_LOW : 1;       /*!< [18..18] GPIO12_EDGE_LOW */
      __IM  uint32_t GPIO12_EDGE_HIGH : 1;      /*!< [19..19] GPIO12_EDGE_HIGH */
      __IM  uint32_t GPIO13_LEVEL_LOW : 1;      /*!< [20..20] GPIO13_LEVEL_LOW */
      __IM  uint32_t GPIO13_LEVEL_HIGH : 1;     /*!< [21..21] GPIO13_LEVEL_HIGH */
      __IM  uint32_t GPIO13_EDGE_LOW : 1;       /*!< [22..22] GPIO13_EDGE_LOW */
      __IM  uint32_t GPIO13_EDGE_HIGH : 1;      /*!< [23..23] GPIO13_EDGE_HIGH */
      __IM  uint32_t GPIO14_LEVEL_LOW : 1;      /*!< [24..24] GPIO14_LEVEL_LOW */
      __IM  uint32_t GPIO14_LEVEL_HIGH : 1;     /*!< [25..25] GPIO14_LEVEL_HIGH */
      __IM  uint32_t GPIO14_EDGE_LOW : 1;       /*!< [26..26] GPIO14_EDGE_LOW */
      __IM  uint32_t GPIO14_EDGE_HIGH : 1;      /*!< [27..27] GPIO14_EDGE_HIGH */
      __IM  uint32_t GPIO15_LEVEL_LOW : 1;      /*!< [28..28] GPIO15_LEVEL_LOW */
      __IM  uint32_t GPIO15_LEVEL_HIGH : 1;     /*!< [29..29] GPIO15_LEVEL_HIGH */
      __IM  uint32_t GPIO15_EDGE_LOW : 1;       /*!< [30..30] GPIO15_EDGE_LOW */
      __IM  uint32_t GPIO15_EDGE_HIGH : 1;      /*!< [31..31] GPIO15_EDGE_HIGH */
    } PROC0_INTS1_b;
  } ;

  union {
    __IOM uint32_t PROC0_INTS2;                 /*!< (@ 0x00000128) Interrupt status after masking & forcing for proc0 */

    struct {
      __IM  uint32_t GPIO16_LEVEL_LOW : 1;      /*!< [0..0] GPIO16_LEVEL_LOW */
      __IM  uint32_t GPIO16_LEVEL_HIGH : 1;     /*!< [1..1] GPIO16_LEVEL_HIGH */
      __IM  uint32_t GPIO16_EDGE_LOW : 1;       /*!< [2..2] GPIO16_EDGE_LOW */
      __IM  uint32_t GPIO16_EDGE_HIGH : 1;      /*!< [3..3] GPIO16_EDGE_HIGH */
      __IM  uint32_t GPIO17_LEVEL_LOW : 1;      /*!< [4..4] GPIO17_LEVEL_LOW */
      __IM  uint32_t GPIO17_LEVEL_HIGH : 1;     /*!< [5..5] GPIO17_LEVEL_HIGH */
      __IM  uint32_t GPIO17_EDGE_LOW : 1;       /*!< [6..6] GPIO17_EDGE_LOW */
      __IM  uint32_t GPIO17_EDGE_HIGH : 1;      /*!< [7..7] GPIO17_EDGE_HIGH */
      __IM  uint32_t GPIO18_LEVEL_LOW : 1;      /*!< [8..8] GPIO18_LEVEL_LOW */
      __IM  uint32_t GPIO18_LEVEL_HIGH : 1;     /*!< [9..9] GPIO18_LEVEL_HIGH */
      __IM  uint32_t GPIO18_EDGE_LOW : 1;       /*!< [10..10] GPIO18_EDGE_LOW */
      __IM  uint32_t GPIO18_EDGE_HIGH : 1;      /*!< [11..11] GPIO18_EDGE_HIGH */
      __IM  uint32_t GPIO19_LEVEL_LOW : 1;      /*!< [12..12] GPIO19_LEVEL_LOW */
      __IM  uint32_t GPIO19_LEVEL_HIGH : 1;     /*!< [13..13] GPIO19_LEVEL_HIGH */
      __IM  uint32_t GPIO19_EDGE_LOW : 1;       /*!< [14..14] GPIO19_EDGE_LOW */
      __IM  uint32_t GPIO19_EDGE_HIGH : 1;      /*!< [15..15] GPIO19_EDGE_HIGH */
      __IM  uint32_t GPIO20_LEVEL_LOW : 1;      /*!< [16..16] GPIO20_LEVEL_LOW */
      __IM  uint32_t GPIO20_LEVEL_HIGH : 1;     /*!< [17..17] GPIO20_LEVEL_HIGH */
      __IM  uint32_t GPIO20_EDGE_LOW : 1;       /*!< [18..18] GPIO20_EDGE_LOW */
      __IM  uint32_t GPIO20_EDGE_HIGH : 1;      /*!< [19..19] GPIO20_EDGE_HIGH */
      __IM  uint32_t GPIO21_LEVEL_LOW : 1;      /*!< [20..20] GPIO21_LEVEL_LOW */
      __IM  uint32_t GPIO21_LEVEL_HIGH : 1;     /*!< [21..21] GPIO21_LEVEL_HIGH */
      __IM  uint32_t GPIO21_EDGE_LOW : 1;       /*!< [22..22] GPIO21_EDGE_LOW */
      __IM  uint32_t GPIO21_EDGE_HIGH : 1;      /*!< [23..23] GPIO21_EDGE_HIGH */
      __IM  uint32_t GPIO22_LEVEL_LOW : 1;      /*!< [24..24] GPIO22_LEVEL_LOW */
      __IM  uint32_t GPIO22_LEVEL_HIGH : 1;     /*!< [25..25] GPIO22_LEVEL_HIGH */
      __IM  uint32_t GPIO22_EDGE_LOW : 1;       /*!< [26..26] GPIO22_EDGE_LOW */
      __IM  uint32_t GPIO22_EDGE_HIGH : 1;      /*!< [27..27] GPIO22_EDGE_HIGH */
      __IM  uint32_t GPIO23_LEVEL_LOW : 1;      /*!< [28..28] GPIO23_LEVEL_LOW */
      __IM  uint32_t GPIO23_LEVEL_HIGH : 1;     /*!< [29..29] GPIO23_LEVEL_HIGH */
      __IM  uint32_t GPIO23_EDGE_LOW : 1;       /*!< [30..30] GPIO23_EDGE_LOW */
      __IM  uint32_t GPIO23_EDGE_HIGH : 1;      /*!< [31..31] GPIO23_EDGE_HIGH */
    } PROC0_INTS2_b;
  } ;

  union {
    __IOM uint32_t PROC0_INTS3;                 /*!< (@ 0x0000012C) Interrupt status after masking & forcing for proc0 */

    struct {
      __IM  uint32_t GPIO24_LEVEL_LOW : 1;      /*!< [0..0] GPIO24_LEVEL_LOW */
      __IM  uint32_t GPIO24_LEVEL_HIGH : 1;     /*!< [1..1] GPIO24_LEVEL_HIGH */
      __IM  uint32_t GPIO24_EDGE_LOW : 1;       /*!< [2..2] GPIO24_EDGE_LOW */
      __IM  uint32_t GPIO24_EDGE_HIGH : 1;      /*!< [3..3] GPIO24_EDGE_HIGH */
      __IM  uint32_t GPIO25_LEVEL_LOW : 1;      /*!< [4..4] GPIO25_LEVEL_LOW */
      __IM  uint32_t GPIO25_LEVEL_HIGH : 1;     /*!< [5..5] GPIO25_LEVEL_HIGH */
      __IM  uint32_t GPIO25_EDGE_LOW : 1;       /*!< [6..6] GPIO25_EDGE_LOW */
      __IM  uint32_t GPIO25_EDGE_HIGH : 1;      /*!< [7..7] GPIO25_EDGE_HIGH */
      __IM  uint32_t GPIO26_LEVEL_LOW : 1;      /*!< [8..8] GPIO26_LEVEL_LOW */
      __IM  uint32_t GPIO26_LEVEL_HIGH : 1;     /*!< [9..9] GPIO26_LEVEL_HIGH */
      __IM  uint32_t GPIO26_EDGE_LOW : 1;       /*!< [10..10] GPIO26_EDGE_LOW */
      __IM  uint32_t GPIO26_EDGE_HIGH : 1;      /*!< [11..11] GPIO26_EDGE_HIGH */
      __IM  uint32_t GPIO27_LEVEL_LOW : 1;      /*!< [12..12] GPIO27_LEVEL_LOW */
      __IM  uint32_t GPIO27_LEVEL_HIGH : 1;     /*!< [13..13] GPIO27_LEVEL_HIGH */
      __IM  uint32_t GPIO27_EDGE_LOW : 1;       /*!< [14..14] GPIO27_EDGE_LOW */
      __IM  uint32_t GPIO27_EDGE_HIGH : 1;      /*!< [15..15] GPIO27_EDGE_HIGH */
      __IM  uint32_t GPIO28_LEVEL_LOW : 1;      /*!< [16..16] GPIO28_LEVEL_LOW */
      __IM  uint32_t GPIO28_LEVEL_HIGH : 1;     /*!< [17..17] GPIO28_LEVEL_HIGH */
      __IM  uint32_t GPIO28_EDGE_LOW : 1;       /*!< [18..18] GPIO28_EDGE_LOW */
      __IM  uint32_t GPIO28_EDGE_HIGH : 1;      /*!< [19..19] GPIO28_EDGE_HIGH */
      __IM  uint32_t GPIO29_LEVEL_LOW : 1;      /*!< [20..20] GPIO29_LEVEL_LOW */
      __IM  uint32_t GPIO29_LEVEL_HIGH : 1;     /*!< [21..21] GPIO29_LEVEL_HIGH */
      __IM  uint32_t GPIO29_EDGE_LOW : 1;       /*!< [22..22] GPIO29_EDGE_LOW */
      __IM  uint32_t GPIO29_EDGE_HIGH : 1;      /*!< [23..23] GPIO29_EDGE_HIGH */
            uint32_t            : 8;
    } PROC0_INTS3_b;
  } ;

  union {
    __IOM uint32_t PROC1_INTE0;                 /*!< (@ 0x00000130) Interrupt Enable for proc1 */

    struct {
      __IOM uint32_t GPIO0_LEVEL_LOW : 1;       /*!< [0..0] GPIO0_LEVEL_LOW */
      __IOM uint32_t GPIO0_LEVEL_HIGH : 1;      /*!< [1..1] GPIO0_LEVEL_HIGH */
      __IOM uint32_t GPIO0_EDGE_LOW : 1;        /*!< [2..2] GPIO0_EDGE_LOW */
      __IOM uint32_t GPIO0_EDGE_HIGH : 1;       /*!< [3..3] GPIO0_EDGE_HIGH */
      __IOM uint32_t GPIO1_LEVEL_LOW : 1;       /*!< [4..4] GPIO1_LEVEL_LOW */
      __IOM uint32_t GPIO1_LEVEL_HIGH : 1;      /*!< [5..5] GPIO1_LEVEL_HIGH */
      __IOM uint32_t GPIO1_EDGE_LOW : 1;        /*!< [6..6] GPIO1_EDGE_LOW */
      __IOM uint32_t GPIO1_EDGE_HIGH : 1;       /*!< [7..7] GPIO1_EDGE_HIGH */
      __IOM uint32_t GPIO2_LEVEL_LOW : 1;       /*!< [8..8] GPIO2_LEVEL_LOW */
      __IOM uint32_t GPIO2_LEVEL_HIGH : 1;      /*!< [9..9] GPIO2_LEVEL_HIGH */
      __IOM uint32_t GPIO2_EDGE_LOW : 1;        /*!< [10..10] GPIO2_EDGE_LOW */
      __IOM uint32_t GPIO2_EDGE_HIGH : 1;       /*!< [11..11] GPIO2_EDGE_HIGH */
      __IOM uint32_t GPIO3_LEVEL_LOW : 1;       /*!< [12..12] GPIO3_LEVEL_LOW */
      __IOM uint32_t GPIO3_LEVEL_HIGH : 1;      /*!< [13..13] GPIO3_LEVEL_HIGH */
      __IOM uint32_t GPIO3_EDGE_LOW : 1;        /*!< [14..14] GPIO3_EDGE_LOW */
      __IOM uint32_t GPIO3_EDGE_HIGH : 1;       /*!< [15..15] GPIO3_EDGE_HIGH */
      __IOM uint32_t GPIO4_LEVEL_LOW : 1;       /*!< [16..16] GPIO4_LEVEL_LOW */
      __IOM uint32_t GPIO4_LEVEL_HIGH : 1;      /*!< [17..17] GPIO4_LEVEL_HIGH */
      __IOM uint32_t GPIO4_EDGE_LOW : 1;        /*!< [18..18] GPIO4_EDGE_LOW */
      __IOM uint32_t GPIO4_EDGE_HIGH : 1;       /*!< [19..19] GPIO4_EDGE_HIGH */
      __IOM uint32_t GPIO5_LEVEL_LOW : 1;       /*!< [20..20] GPIO5_LEVEL_LOW */
      __IOM uint32_t GPIO5_LEVEL_HIGH : 1;      /*!< [21..21] GPIO5_LEVEL_HIGH */
      __IOM uint32_t GPIO5_EDGE_LOW : 1;        /*!< [22..22] GPIO5_EDGE_LOW */
      __IOM uint32_t GPIO5_EDGE_HIGH : 1;       /*!< [23..23] GPIO5_EDGE_HIGH */
      __IOM uint32_t GPIO6_LEVEL_LOW : 1;       /*!< [24..24] GPIO6_LEVEL_LOW */
      __IOM uint32_t GPIO6_LEVEL_HIGH : 1;      /*!< [25..25] GPIO6_LEVEL_HIGH */
      __IOM uint32_t GPIO6_EDGE_LOW : 1;        /*!< [26..26] GPIO6_EDGE_LOW */
      __IOM uint32_t GPIO6_EDGE_HIGH : 1;       /*!< [27..27] GPIO6_EDGE_HIGH */
      __IOM uint32_t GPIO7_LEVEL_LOW : 1;       /*!< [28..28] GPIO7_LEVEL_LOW */
      __IOM uint32_t GPIO7_LEVEL_HIGH : 1;      /*!< [29..29] GPIO7_LEVEL_HIGH */
      __IOM uint32_t GPIO7_EDGE_LOW : 1;        /*!< [30..30] GPIO7_EDGE_LOW */
      __IOM uint32_t GPIO7_EDGE_HIGH : 1;       /*!< [31..31] GPIO7_EDGE_HIGH */
    } PROC1_INTE0_b;
  } ;

  union {
    __IOM uint32_t PROC1_INTE1;                 /*!< (@ 0x00000134) Interrupt Enable for proc1 */

    struct {
      __IOM uint32_t GPIO8_LEVEL_LOW : 1;       /*!< [0..0] GPIO8_LEVEL_LOW */
      __IOM uint32_t GPIO8_LEVEL_HIGH : 1;      /*!< [1..1] GPIO8_LEVEL_HIGH */
      __IOM uint32_t GPIO8_EDGE_LOW : 1;        /*!< [2..2] GPIO8_EDGE_LOW */
      __IOM uint32_t GPIO8_EDGE_HIGH : 1;       /*!< [3..3] GPIO8_EDGE_HIGH */
      __IOM uint32_t GPIO9_LEVEL_LOW : 1;       /*!< [4..4] GPIO9_LEVEL_LOW */
      __IOM uint32_t GPIO9_LEVEL_HIGH : 1;      /*!< [5..5] GPIO9_LEVEL_HIGH */
      __IOM uint32_t GPIO9_EDGE_LOW : 1;        /*!< [6..6] GPIO9_EDGE_LOW */
      __IOM uint32_t GPIO9_EDGE_HIGH : 1;       /*!< [7..7] GPIO9_EDGE_HIGH */
      __IOM uint32_t GPIO10_LEVEL_LOW : 1;      /*!< [8..8] GPIO10_LEVEL_LOW */
      __IOM uint32_t GPIO10_LEVEL_HIGH : 1;     /*!< [9..9] GPIO10_LEVEL_HIGH */
      __IOM uint32_t GPIO10_EDGE_LOW : 1;       /*!< [10..10] GPIO10_EDGE_LOW */
      __IOM uint32_t GPIO10_EDGE_HIGH : 1;      /*!< [11..11] GPIO10_EDGE_HIGH */
      __IOM uint32_t GPIO11_LEVEL_LOW : 1;      /*!< [12..12] GPIO11_LEVEL_LOW */
      __IOM uint32_t GPIO11_LEVEL_HIGH : 1;     /*!< [13..13] GPIO11_LEVEL_HIGH */
      __IOM uint32_t GPIO11_EDGE_LOW : 1;       /*!< [14..14] GPIO11_EDGE_LOW */
      __IOM uint32_t GPIO11_EDGE_HIGH : 1;      /*!< [15..15] GPIO11_EDGE_HIGH */
      __IOM uint32_t GPIO12_LEVEL_LOW : 1;      /*!< [16..16] GPIO12_LEVEL_LOW */
      __IOM uint32_t GPIO12_LEVEL_HIGH : 1;     /*!< [17..17] GPIO12_LEVEL_HIGH */
      __IOM uint32_t GPIO12_EDGE_LOW : 1;       /*!< [18..18] GPIO12_EDGE_LOW */
      __IOM uint32_t GPIO12_EDGE_HIGH : 1;      /*!< [19..19] GPIO12_EDGE_HIGH */
      __IOM uint32_t GPIO13_LEVEL_LOW : 1;      /*!< [20..20] GPIO13_LEVEL_LOW */
      __IOM uint32_t GPIO13_LEVEL_HIGH : 1;     /*!< [21..21] GPIO13_LEVEL_HIGH */
      __IOM uint32_t GPIO13_EDGE_LOW : 1;       /*!< [22..22] GPIO13_EDGE_LOW */
      __IOM uint32_t GPIO13_EDGE_HIGH : 1;      /*!< [23..23] GPIO13_EDGE_HIGH */
      __IOM uint32_t GPIO14_LEVEL_LOW : 1;      /*!< [24..24] GPIO14_LEVEL_LOW */
      __IOM uint32_t GPIO14_LEVEL_HIGH : 1;     /*!< [25..25] GPIO14_LEVEL_HIGH */
      __IOM uint32_t GPIO14_EDGE_LOW : 1;       /*!< [26..26] GPIO14_EDGE_LOW */
      __IOM uint32_t GPIO14_EDGE_HIGH : 1;      /*!< [27..27] GPIO14_EDGE_HIGH */
      __IOM uint32_t GPIO15_LEVEL_LOW : 1;      /*!< [28..28] GPIO15_LEVEL_LOW */
      __IOM uint32_t GPIO15_LEVEL_HIGH : 1;     /*!< [29..29] GPIO15_LEVEL_HIGH */
      __IOM uint32_t GPIO15_EDGE_LOW : 1;       /*!< [30..30] GPIO15_EDGE_LOW */
      __IOM uint32_t GPIO15_EDGE_HIGH : 1;      /*!< [31..31] GPIO15_EDGE_HIGH */
    } PROC1_INTE1_b;
  } ;

  union {
    __IOM uint32_t PROC1_INTE2;                 /*!< (@ 0x00000138) Interrupt Enable for proc1 */

    struct {
      __IOM uint32_t GPIO16_LEVEL_LOW : 1;      /*!< [0..0] GPIO16_LEVEL_LOW */
      __IOM uint32_t GPIO16_LEVEL_HIGH : 1;     /*!< [1..1] GPIO16_LEVEL_HIGH */
      __IOM uint32_t GPIO16_EDGE_LOW : 1;       /*!< [2..2] GPIO16_EDGE_LOW */
      __IOM uint32_t GPIO16_EDGE_HIGH : 1;      /*!< [3..3] GPIO16_EDGE_HIGH */
      __IOM uint32_t GPIO17_LEVEL_LOW : 1;      /*!< [4..4] GPIO17_LEVEL_LOW */
      __IOM uint32_t GPIO17_LEVEL_HIGH : 1;     /*!< [5..5] GPIO17_LEVEL_HIGH */
      __IOM uint32_t GPIO17_EDGE_LOW : 1;       /*!< [6..6] GPIO17_EDGE_LOW */
      __IOM uint32_t GPIO17_EDGE_HIGH : 1;      /*!< [7..7] GPIO17_EDGE_HIGH */
      __IOM uint32_t GPIO18_LEVEL_LOW : 1;      /*!< [8..8] GPIO18_LEVEL_LOW */
      __IOM uint32_t GPIO18_LEVEL_HIGH : 1;     /*!< [9..9] GPIO18_LEVEL_HIGH */
      __IOM uint32_t GPIO18_EDGE_LOW : 1;       /*!< [10..10] GPIO18_EDGE_LOW */
      __IOM uint32_t GPIO18_EDGE_HIGH : 1;      /*!< [11..11] GPIO18_EDGE_HIGH */
      __IOM uint32_t GPIO19_LEVEL_LOW : 1;      /*!< [12..12] GPIO19_LEVEL_LOW */
      __IOM uint32_t GPIO19_LEVEL_HIGH : 1;     /*!< [13..13] GPIO19_LEVEL_HIGH */
      __IOM uint32_t GPIO19_EDGE_LOW : 1;       /*!< [14..14] GPIO19_EDGE_LOW */
      __IOM uint32_t GPIO19_EDGE_HIGH : 1;      /*!< [15..15] GPIO19_EDGE_HIGH */
      __IOM uint32_t GPIO20_LEVEL_LOW : 1;      /*!< [16..16] GPIO20_LEVEL_LOW */
      __IOM uint32_t GPIO20_LEVEL_HIGH : 1;     /*!< [17..17] GPIO20_LEVEL_HIGH */
      __IOM uint32_t GPIO20_EDGE_LOW : 1;       /*!< [18..18] GPIO20_EDGE_LOW */
      __IOM uint32_t GPIO20_EDGE_HIGH : 1;      /*!< [19..19] GPIO20_EDGE_HIGH */
      __IOM uint32_t GPIO21_LEVEL_LOW : 1;      /*!< [20..20] GPIO21_LEVEL_LOW */
      __IOM uint32_t GPIO21_LEVEL_HIGH : 1;     /*!< [21..21] GPIO21_LEVEL_HIGH */
      __IOM uint32_t GPIO21_EDGE_LOW : 1;       /*!< [22..22] GPIO21_EDGE_LOW */
      __IOM uint32_t GPIO21_EDGE_HIGH : 1;      /*!< [23..23] GPIO21_EDGE_HIGH */
      __IOM uint32_t GPIO22_LEVEL_LOW : 1;      /*!< [24..24] GPIO22_LEVEL_LOW */
      __IOM uint32_t GPIO22_LEVEL_HIGH : 1;     /*!< [25..25] GPIO22_LEVEL_HIGH */
      __IOM uint32_t GPIO22_EDGE_LOW : 1;       /*!< [26..26] GPIO22_EDGE_LOW */
      __IOM uint32_t GPIO22_EDGE_HIGH : 1;      /*!< [27..27] GPIO22_EDGE_HIGH */
      __IOM uint32_t GPIO23_LEVEL_LOW : 1;      /*!< [28..28] GPIO23_LEVEL_LOW */
      __IOM uint32_t GPIO23_LEVEL_HIGH : 1;     /*!< [29..29] GPIO23_LEVEL_HIGH */
      __IOM uint32_t GPIO23_EDGE_LOW : 1;       /*!< [30..30] GPIO23_EDGE_LOW */
      __IOM uint32_t GPIO23_EDGE_HIGH : 1;      /*!< [31..31] GPIO23_EDGE_HIGH */
    } PROC1_INTE2_b;
  } ;

  union {
    __IOM uint32_t PROC1_INTE3;                 /*!< (@ 0x0000013C) Interrupt Enable for proc1 */

    struct {
      __IOM uint32_t GPIO24_LEVEL_LOW : 1;      /*!< [0..0] GPIO24_LEVEL_LOW */
      __IOM uint32_t GPIO24_LEVEL_HIGH : 1;     /*!< [1..1] GPIO24_LEVEL_HIGH */
      __IOM uint32_t GPIO24_EDGE_LOW : 1;       /*!< [2..2] GPIO24_EDGE_LOW */
      __IOM uint32_t GPIO24_EDGE_HIGH : 1;      /*!< [3..3] GPIO24_EDGE_HIGH */
      __IOM uint32_t GPIO25_LEVEL_LOW : 1;      /*!< [4..4] GPIO25_LEVEL_LOW */
      __IOM uint32_t GPIO25_LEVEL_HIGH : 1;     /*!< [5..5] GPIO25_LEVEL_HIGH */
      __IOM uint32_t GPIO25_EDGE_LOW : 1;       /*!< [6..6] GPIO25_EDGE_LOW */
      __IOM uint32_t GPIO25_EDGE_HIGH : 1;      /*!< [7..7] GPIO25_EDGE_HIGH */
      __IOM uint32_t GPIO26_LEVEL_LOW : 1;      /*!< [8..8] GPIO26_LEVEL_LOW */
      __IOM uint32_t GPIO26_LEVEL_HIGH : 1;     /*!< [9..9] GPIO26_LEVEL_HIGH */
      __IOM uint32_t GPIO26_EDGE_LOW : 1;       /*!< [10..10] GPIO26_EDGE_LOW */
      __IOM uint32_t GPIO26_EDGE_HIGH : 1;      /*!< [11..11] GPIO26_EDGE_HIGH */
      __IOM uint32_t GPIO27_LEVEL_LOW : 1;      /*!< [12..12] GPIO27_LEVEL_LOW */
      __IOM uint32_t GPIO27_LEVEL_HIGH : 1;     /*!< [13..13] GPIO27_LEVEL_HIGH */
      __IOM uint32_t GPIO27_EDGE_LOW : 1;       /*!< [14..14] GPIO27_EDGE_LOW */
      __IOM uint32_t GPIO27_EDGE_HIGH : 1;      /*!< [15..15] GPIO27_EDGE_HIGH */
      __IOM uint32_t GPIO28_LEVEL_LOW : 1;      /*!< [16..16] GPIO28_LEVEL_LOW */
      __IOM uint32_t GPIO28_LEVEL_HIGH : 1;     /*!< [17..17] GPIO28_LEVEL_HIGH */
      __IOM uint32_t GPIO28_EDGE_LOW : 1;       /*!< [18..18] GPIO28_EDGE_LOW */
      __IOM uint32_t GPIO28_EDGE_HIGH : 1;      /*!< [19..19] GPIO28_EDGE_HIGH */
      __IOM uint32_t GPIO29_LEVEL_LOW : 1;      /*!< [20..20] GPIO29_LEVEL_LOW */
      __IOM uint32_t GPIO29_LEVEL_HIGH : 1;     /*!< [21..21] GPIO29_LEVEL_HIGH */
      __IOM uint32_t GPIO29_EDGE_LOW : 1;       /*!< [22..22] GPIO29_EDGE_LOW */
      __IOM uint32_t GPIO29_EDGE_HIGH : 1;      /*!< [23..23] GPIO29_EDGE_HIGH */
            uint32_t            : 8;
    } PROC1_INTE3_b;
  } ;

  union {
    __IOM uint32_t PROC1_INTF0;                 /*!< (@ 0x00000140) Interrupt Force for proc1 */

    struct {
      __IOM uint32_t GPIO0_LEVEL_LOW : 1;       /*!< [0..0] GPIO0_LEVEL_LOW */
      __IOM uint32_t GPIO0_LEVEL_HIGH : 1;      /*!< [1..1] GPIO0_LEVEL_HIGH */
      __IOM uint32_t GPIO0_EDGE_LOW : 1;        /*!< [2..2] GPIO0_EDGE_LOW */
      __IOM uint32_t GPIO0_EDGE_HIGH : 1;       /*!< [3..3] GPIO0_EDGE_HIGH */
      __IOM uint32_t GPIO1_LEVEL_LOW : 1;       /*!< [4..4] GPIO1_LEVEL_LOW */
      __IOM uint32_t GPIO1_LEVEL_HIGH : 1;      /*!< [5..5] GPIO1_LEVEL_HIGH */
      __IOM uint32_t GPIO1_EDGE_LOW : 1;        /*!< [6..6] GPIO1_EDGE_LOW */
      __IOM uint32_t GPIO1_EDGE_HIGH : 1;       /*!< [7..7] GPIO1_EDGE_HIGH */
      __IOM uint32_t GPIO2_LEVEL_LOW : 1;       /*!< [8..8] GPIO2_LEVEL_LOW */
      __IOM uint32_t GPIO2_LEVEL_HIGH : 1;      /*!< [9..9] GPIO2_LEVEL_HIGH */
      __IOM uint32_t GPIO2_EDGE_LOW : 1;        /*!< [10..10] GPIO2_EDGE_LOW */
      __IOM uint32_t GPIO2_EDGE_HIGH : 1;       /*!< [11..11] GPIO2_EDGE_HIGH */
      __IOM uint32_t GPIO3_LEVEL_LOW : 1;       /*!< [12..12] GPIO3_LEVEL_LOW */
      __IOM uint32_t GPIO3_LEVEL_HIGH : 1;      /*!< [13..13] GPIO3_LEVEL_HIGH */
      __IOM uint32_t GPIO3_EDGE_LOW : 1;        /*!< [14..14] GPIO3_EDGE_LOW */
      __IOM uint32_t GPIO3_EDGE_HIGH : 1;       /*!< [15..15] GPIO3_EDGE_HIGH */
      __IOM uint32_t GPIO4_LEVEL_LOW : 1;       /*!< [16..16] GPIO4_LEVEL_LOW */
      __IOM uint32_t GPIO4_LEVEL_HIGH : 1;      /*!< [17..17] GPIO4_LEVEL_HIGH */
      __IOM uint32_t GPIO4_EDGE_LOW : 1;        /*!< [18..18] GPIO4_EDGE_LOW */
      __IOM uint32_t GPIO4_EDGE_HIGH : 1;       /*!< [19..19] GPIO4_EDGE_HIGH */
      __IOM uint32_t GPIO5_LEVEL_LOW : 1;       /*!< [20..20] GPIO5_LEVEL_LOW */
      __IOM uint32_t GPIO5_LEVEL_HIGH : 1;      /*!< [21..21] GPIO5_LEVEL_HIGH */
      __IOM uint32_t GPIO5_EDGE_LOW : 1;        /*!< [22..22] GPIO5_EDGE_LOW */
      __IOM uint32_t GPIO5_EDGE_HIGH : 1;       /*!< [23..23] GPIO5_EDGE_HIGH */
      __IOM uint32_t GPIO6_LEVEL_LOW : 1;       /*!< [24..24] GPIO6_LEVEL_LOW */
      __IOM uint32_t GPIO6_LEVEL_HIGH : 1;      /*!< [25..25] GPIO6_LEVEL_HIGH */
      __IOM uint32_t GPIO6_EDGE_LOW : 1;        /*!< [26..26] GPIO6_EDGE_LOW */
      __IOM uint32_t GPIO6_EDGE_HIGH : 1;       /*!< [27..27] GPIO6_EDGE_HIGH */
      __IOM uint32_t GPIO7_LEVEL_LOW : 1;       /*!< [28..28] GPIO7_LEVEL_LOW */
      __IOM uint32_t GPIO7_LEVEL_HIGH : 1;      /*!< [29..29] GPIO7_LEVEL_HIGH */
      __IOM uint32_t GPIO7_EDGE_LOW : 1;        /*!< [30..30] GPIO7_EDGE_LOW */
      __IOM uint32_t GPIO7_EDGE_HIGH : 1;       /*!< [31..31] GPIO7_EDGE_HIGH */
    } PROC1_INTF0_b;
  } ;

  union {
    __IOM uint32_t PROC1_INTF1;                 /*!< (@ 0x00000144) Interrupt Force for proc1 */

    struct {
      __IOM uint32_t GPIO8_LEVEL_LOW : 1;       /*!< [0..0] GPIO8_LEVEL_LOW */
      __IOM uint32_t GPIO8_LEVEL_HIGH : 1;      /*!< [1..1] GPIO8_LEVEL_HIGH */
      __IOM uint32_t GPIO8_EDGE_LOW : 1;        /*!< [2..2] GPIO8_EDGE_LOW */
      __IOM uint32_t GPIO8_EDGE_HIGH : 1;       /*!< [3..3] GPIO8_EDGE_HIGH */
      __IOM uint32_t GPIO9_LEVEL_LOW : 1;       /*!< [4..4] GPIO9_LEVEL_LOW */
      __IOM uint32_t GPIO9_LEVEL_HIGH : 1;      /*!< [5..5] GPIO9_LEVEL_HIGH */
      __IOM uint32_t GPIO9_EDGE_LOW : 1;        /*!< [6..6] GPIO9_EDGE_LOW */
      __IOM uint32_t GPIO9_EDGE_HIGH : 1;       /*!< [7..7] GPIO9_EDGE_HIGH */
      __IOM uint32_t GPIO10_LEVEL_LOW : 1;      /*!< [8..8] GPIO10_LEVEL_LOW */
      __IOM uint32_t GPIO10_LEVEL_HIGH : 1;     /*!< [9..9] GPIO10_LEVEL_HIGH */
      __IOM uint32_t GPIO10_EDGE_LOW : 1;       /*!< [10..10] GPIO10_EDGE_LOW */
      __IOM uint32_t GPIO10_EDGE_HIGH : 1;      /*!< [11..11] GPIO10_EDGE_HIGH */
      __IOM uint32_t GPIO11_LEVEL_LOW : 1;      /*!< [12..12] GPIO11_LEVEL_LOW */
      __IOM uint32_t GPIO11_LEVEL_HIGH : 1;     /*!< [13..13] GPIO11_LEVEL_HIGH */
      __IOM uint32_t GPIO11_EDGE_LOW : 1;       /*!< [14..14] GPIO11_EDGE_LOW */
      __IOM uint32_t GPIO11_EDGE_HIGH : 1;      /*!< [15..15] GPIO11_EDGE_HIGH */
      __IOM uint32_t GPIO12_LEVEL_LOW : 1;      /*!< [16..16] GPIO12_LEVEL_LOW */
      __IOM uint32_t GPIO12_LEVEL_HIGH : 1;     /*!< [17..17] GPIO12_LEVEL_HIGH */
      __IOM uint32_t GPIO12_EDGE_LOW : 1;       /*!< [18..18] GPIO12_EDGE_LOW */
      __IOM uint32_t GPIO12_EDGE_HIGH : 1;      /*!< [19..19] GPIO12_EDGE_HIGH */
      __IOM uint32_t GPIO13_LEVEL_LOW : 1;      /*!< [20..20] GPIO13_LEVEL_LOW */
      __IOM uint32_t GPIO13_LEVEL_HIGH : 1;     /*!< [21..21] GPIO13_LEVEL_HIGH */
      __IOM uint32_t GPIO13_EDGE_LOW : 1;       /*!< [22..22] GPIO13_EDGE_LOW */
      __IOM uint32_t GPIO13_EDGE_HIGH : 1;      /*!< [23..23] GPIO13_EDGE_HIGH */
      __IOM uint32_t GPIO14_LEVEL_LOW : 1;      /*!< [24..24] GPIO14_LEVEL_LOW */
      __IOM uint32_t GPIO14_LEVEL_HIGH : 1;     /*!< [25..25] GPIO14_LEVEL_HIGH */
      __IOM uint32_t GPIO14_EDGE_LOW : 1;       /*!< [26..26] GPIO14_EDGE_LOW */
      __IOM uint32_t GPIO14_EDGE_HIGH : 1;      /*!< [27..27] GPIO14_EDGE_HIGH */
      __IOM uint32_t GPIO15_LEVEL_LOW : 1;      /*!< [28..28] GPIO15_LEVEL_LOW */
      __IOM uint32_t GPIO15_LEVEL_HIGH : 1;     /*!< [29..29] GPIO15_LEVEL_HIGH */
      __IOM uint32_t GPIO15_EDGE_LOW : 1;       /*!< [30..30] GPIO15_EDGE_LOW */
      __IOM uint32_t GPIO15_EDGE_HIGH : 1;      /*!< [31..31] GPIO15_EDGE_HIGH */
    } PROC1_INTF1_b;
  } ;

  union {
    __IOM uint32_t PROC1_INTF2;                 /*!< (@ 0x00000148) Interrupt Force for proc1 */

    struct {
      __IOM uint32_t GPIO16_LEVEL_LOW : 1;      /*!< [0..0] GPIO16_LEVEL_LOW */
      __IOM uint32_t GPIO16_LEVEL_HIGH : 1;     /*!< [1..1] GPIO16_LEVEL_HIGH */
      __IOM uint32_t GPIO16_EDGE_LOW : 1;       /*!< [2..2] GPIO16_EDGE_LOW */
      __IOM uint32_t GPIO16_EDGE_HIGH : 1;      /*!< [3..3] GPIO16_EDGE_HIGH */
      __IOM uint32_t GPIO17_LEVEL_LOW : 1;      /*!< [4..4] GPIO17_LEVEL_LOW */
      __IOM uint32_t GPIO17_LEVEL_HIGH : 1;     /*!< [5..5] GPIO17_LEVEL_HIGH */
      __IOM uint32_t GPIO17_EDGE_LOW : 1;       /*!< [6..6] GPIO17_EDGE_LOW */
      __IOM uint32_t GPIO17_EDGE_HIGH : 1;      /*!< [7..7] GPIO17_EDGE_HIGH */
      __IOM uint32_t GPIO18_LEVEL_LOW : 1;      /*!< [8..8] GPIO18_LEVEL_LOW */
      __IOM uint32_t GPIO18_LEVEL_HIGH : 1;     /*!< [9..9] GPIO18_LEVEL_HIGH */
      __IOM uint32_t GPIO18_EDGE_LOW : 1;       /*!< [10..10] GPIO18_EDGE_LOW */
      __IOM uint32_t GPIO18_EDGE_HIGH : 1;      /*!< [11..11] GPIO18_EDGE_HIGH */
      __IOM uint32_t GPIO19_LEVEL_LOW : 1;      /*!< [12..12] GPIO19_LEVEL_LOW */
      __IOM uint32_t GPIO19_LEVEL_HIGH : 1;     /*!< [13..13] GPIO19_LEVEL_HIGH */
      __IOM uint32_t GPIO19_EDGE_LOW : 1;       /*!< [14..14] GPIO19_EDGE_LOW */
      __IOM uint32_t GPIO19_EDGE_HIGH : 1;      /*!< [15..15] GPIO19_EDGE_HIGH */
      __IOM uint32_t GPIO20_LEVEL_LOW : 1;      /*!< [16..16] GPIO20_LEVEL_LOW */
      __IOM uint32_t GPIO20_LEVEL_HIGH : 1;     /*!< [17..17] GPIO20_LEVEL_HIGH */
      __IOM uint32_t GPIO20_EDGE_LOW : 1;       /*!< [18..18] GPIO20_EDGE_LOW */
      __IOM uint32_t GPIO20_EDGE_HIGH : 1;      /*!< [19..19] GPIO20_EDGE_HIGH */
      __IOM uint32_t GPIO21_LEVEL_LOW : 1;      /*!< [20..20] GPIO21_LEVEL_LOW */
      __IOM uint32_t GPIO21_LEVEL_HIGH : 1;     /*!< [21..21] GPIO21_LEVEL_HIGH */
      __IOM uint32_t GPIO21_EDGE_LOW : 1;       /*!< [22..22] GPIO21_EDGE_LOW */
      __IOM uint32_t GPIO21_EDGE_HIGH : 1;      /*!< [23..23] GPIO21_EDGE_HIGH */
      __IOM uint32_t GPIO22_LEVEL_LOW : 1;      /*!< [24..24] GPIO22_LEVEL_LOW */
      __IOM uint32_t GPIO22_LEVEL_HIGH : 1;     /*!< [25..25] GPIO22_LEVEL_HIGH */
      __IOM uint32_t GPIO22_EDGE_LOW : 1;       /*!< [26..26] GPIO22_EDGE_LOW */
      __IOM uint32_t GPIO22_EDGE_HIGH : 1;      /*!< [27..27] GPIO22_EDGE_HIGH */
      __IOM uint32_t GPIO23_LEVEL_LOW : 1;      /*!< [28..28] GPIO23_LEVEL_LOW */
      __IOM uint32_t GPIO23_LEVEL_HIGH : 1;     /*!< [29..29] GPIO23_LEVEL_HIGH */
      __IOM uint32_t GPIO23_EDGE_LOW : 1;       /*!< [30..30] GPIO23_EDGE_LOW */
      __IOM uint32_t GPIO23_EDGE_HIGH : 1;      /*!< [31..31] GPIO23_EDGE_HIGH */
    } PROC1_INTF2_b;
  } ;

  union {
    __IOM uint32_t PROC1_INTF3;                 /*!< (@ 0x0000014C) Interrupt Force for proc1 */

    struct {
      __IOM uint32_t GPIO24_LEVEL_LOW : 1;      /*!< [0..0] GPIO24_LEVEL_LOW */
      __IOM uint32_t GPIO24_LEVEL_HIGH : 1;     /*!< [1..1] GPIO24_LEVEL_HIGH */
      __IOM uint32_t GPIO24_EDGE_LOW : 1;       /*!< [2..2] GPIO24_EDGE_LOW */
      __IOM uint32_t GPIO24_EDGE_HIGH : 1;      /*!< [3..3] GPIO24_EDGE_HIGH */
      __IOM uint32_t GPIO25_LEVEL_LOW : 1;      /*!< [4..4] GPIO25_LEVEL_LOW */
      __IOM uint32_t GPIO25_LEVEL_HIGH : 1;     /*!< [5..5] GPIO25_LEVEL_HIGH */
      __IOM uint32_t GPIO25_EDGE_LOW : 1;       /*!< [6..6] GPIO25_EDGE_LOW */
      __IOM uint32_t GPIO25_EDGE_HIGH : 1;      /*!< [7..7] GPIO25_EDGE_HIGH */
      __IOM uint32_t GPIO26_LEVEL_LOW : 1;      /*!< [8..8] GPIO26_LEVEL_LOW */
      __IOM uint32_t GPIO26_LEVEL_HIGH : 1;     /*!< [9..9] GPIO26_LEVEL_HIGH */
      __IOM uint32_t GPIO26_EDGE_LOW : 1;       /*!< [10..10] GPIO26_EDGE_LOW */
      __IOM uint32_t GPIO26_EDGE_HIGH : 1;      /*!< [11..11] GPIO26_EDGE_HIGH */
      __IOM uint32_t GPIO27_LEVEL_LOW : 1;      /*!< [12..12] GPIO27_LEVEL_LOW */
      __IOM uint32_t GPIO27_LEVEL_HIGH : 1;     /*!< [13..13] GPIO27_LEVEL_HIGH */
      __IOM uint32_t GPIO27_EDGE_LOW : 1;       /*!< [14..14] GPIO27_EDGE_LOW */
      __IOM uint32_t GPIO27_EDGE_HIGH : 1;      /*!< [15..15] GPIO27_EDGE_HIGH */
      __IOM uint32_t GPIO28_LEVEL_LOW : 1;      /*!< [16..16] GPIO28_LEVEL_LOW */
      __IOM uint32_t GPIO28_LEVEL_HIGH : 1;     /*!< [17..17] GPIO28_LEVEL_HIGH */
      __IOM uint32_t GPIO28_EDGE_LOW : 1;       /*!< [18..18] GPIO28_EDGE_LOW */
      __IOM uint32_t GPIO28_EDGE_HIGH : 1;      /*!< [19..19] GPIO28_EDGE_HIGH */
      __IOM uint32_t GPIO29_LEVEL_LOW : 1;      /*!< [20..20] GPIO29_LEVEL_LOW */
      __IOM uint32_t GPIO29_LEVEL_HIGH : 1;     /*!< [21..21] GPIO29_LEVEL_HIGH */
      __IOM uint32_t GPIO29_EDGE_LOW : 1;       /*!< [22..22] GPIO29_EDGE_LOW */
      __IOM uint32_t GPIO29_EDGE_HIGH : 1;      /*!< [23..23] GPIO29_EDGE_HIGH */
            uint32_t            : 8;
    } PROC1_INTF3_b;
  } ;

  union {
    __IOM uint32_t PROC1_INTS0;                 /*!< (@ 0x00000150) Interrupt status after masking & forcing for proc1 */

    struct {
      __IM  uint32_t GPIO0_LEVEL_LOW : 1;       /*!< [0..0] GPIO0_LEVEL_LOW */
      __IM  uint32_t GPIO0_LEVEL_HIGH : 1;      /*!< [1..1] GPIO0_LEVEL_HIGH */
      __IM  uint32_t GPIO0_EDGE_LOW : 1;        /*!< [2..2] GPIO0_EDGE_LOW */
      __IM  uint32_t GPIO0_EDGE_HIGH : 1;       /*!< [3..3] GPIO0_EDGE_HIGH */
      __IM  uint32_t GPIO1_LEVEL_LOW : 1;       /*!< [4..4] GPIO1_LEVEL_LOW */
      __IM  uint32_t GPIO1_LEVEL_HIGH : 1;      /*!< [5..5] GPIO1_LEVEL_HIGH */
      __IM  uint32_t GPIO1_EDGE_LOW : 1;        /*!< [6..6] GPIO1_EDGE_LOW */
      __IM  uint32_t GPIO1_EDGE_HIGH : 1;       /*!< [7..7] GPIO1_EDGE_HIGH */
      __IM  uint32_t GPIO2_LEVEL_LOW : 1;       /*!< [8..8] GPIO2_LEVEL_LOW */
      __IM  uint32_t GPIO2_LEVEL_HIGH : 1;      /*!< [9..9] GPIO2_LEVEL_HIGH */
      __IM  uint32_t GPIO2_EDGE_LOW : 1;        /*!< [10..10] GPIO2_EDGE_LOW */
      __IM  uint32_t GPIO2_EDGE_HIGH : 1;       /*!< [11..11] GPIO2_EDGE_HIGH */
      __IM  uint32_t GPIO3_LEVEL_LOW : 1;       /*!< [12..12] GPIO3_LEVEL_LOW */
      __IM  uint32_t GPIO3_LEVEL_HIGH : 1;      /*!< [13..13] GPIO3_LEVEL_HIGH */
      __IM  uint32_t GPIO3_EDGE_LOW : 1;        /*!< [14..14] GPIO3_EDGE_LOW */
      __IM  uint32_t GPIO3_EDGE_HIGH : 1;       /*!< [15..15] GPIO3_EDGE_HIGH */
      __IM  uint32_t GPIO4_LEVEL_LOW : 1;       /*!< [16..16] GPIO4_LEVEL_LOW */
      __IM  uint32_t GPIO4_LEVEL_HIGH : 1;      /*!< [17..17] GPIO4_LEVEL_HIGH */
      __IM  uint32_t GPIO4_EDGE_LOW : 1;        /*!< [18..18] GPIO4_EDGE_LOW */
      __IM  uint32_t GPIO4_EDGE_HIGH : 1;       /*!< [19..19] GPIO4_EDGE_HIGH */
      __IM  uint32_t GPIO5_LEVEL_LOW : 1;       /*!< [20..20] GPIO5_LEVEL_LOW */
      __IM  uint32_t GPIO5_LEVEL_HIGH : 1;      /*!< [21..21] GPIO5_LEVEL_HIGH */
      __IM  uint32_t GPIO5_EDGE_LOW : 1;        /*!< [22..22] GPIO5_EDGE_LOW */
      __IM  uint32_t GPIO5_EDGE_HIGH : 1;       /*!< [23..23] GPIO5_EDGE_HIGH */
      __IM  uint32_t GPIO6_LEVEL_LOW : 1;       /*!< [24..24] GPIO6_LEVEL_LOW */
      __IM  uint32_t GPIO6_LEVEL_HIGH : 1;      /*!< [25..25] GPIO6_LEVEL_HIGH */
      __IM  uint32_t GPIO6_EDGE_LOW : 1;        /*!< [26..26] GPIO6_EDGE_LOW */
      __IM  uint32_t GPIO6_EDGE_HIGH : 1;       /*!< [27..27] GPIO6_EDGE_HIGH */
      __IM  uint32_t GPIO7_LEVEL_LOW : 1;       /*!< [28..28] GPIO7_LEVEL_LOW */
      __IM  uint32_t GPIO7_LEVEL_HIGH : 1;      /*!< [29..29] GPIO7_LEVEL_HIGH */
      __IM  uint32_t GPIO7_EDGE_LOW : 1;        /*!< [30..30] GPIO7_EDGE_LOW */
      __IM  uint32_t GPIO7_EDGE_HIGH : 1;       /*!< [31..31] GPIO7_EDGE_HIGH */
    } PROC1_INTS0_b;
  } ;

  union {
    __IOM uint32_t PROC1_INTS1;                 /*!< (@ 0x00000154) Interrupt status after masking & forcing for proc1 */

    struct {
      __IM  uint32_t GPIO8_LEVEL_LOW : 1;       /*!< [0..0] GPIO8_LEVEL_LOW */
      __IM  uint32_t GPIO8_LEVEL_HIGH : 1;      /*!< [1..1] GPIO8_LEVEL_HIGH */
      __IM  uint32_t GPIO8_EDGE_LOW : 1;        /*!< [2..2] GPIO8_EDGE_LOW */
      __IM  uint32_t GPIO8_EDGE_HIGH : 1;       /*!< [3..3] GPIO8_EDGE_HIGH */
      __IM  uint32_t GPIO9_LEVEL_LOW : 1;       /*!< [4..4] GPIO9_LEVEL_LOW */
      __IM  uint32_t GPIO9_LEVEL_HIGH : 1;      /*!< [5..5] GPIO9_LEVEL_HIGH */
      __IM  uint32_t GPIO9_EDGE_LOW : 1;        /*!< [6..6] GPIO9_EDGE_LOW */
      __IM  uint32_t GPIO9_EDGE_HIGH : 1;       /*!< [7..7] GPIO9_EDGE_HIGH */
      __IM  uint32_t GPIO10_LEVEL_LOW : 1;      /*!< [8..8] GPIO10_LEVEL_LOW */
      __IM  uint32_t GPIO10_LEVEL_HIGH : 1;     /*!< [9..9] GPIO10_LEVEL_HIGH */
      __IM  uint32_t GPIO10_EDGE_LOW : 1;       /*!< [10..10] GPIO10_EDGE_LOW */
      __IM  uint32_t GPIO10_EDGE_HIGH : 1;      /*!< [11..11] GPIO10_EDGE_HIGH */
      __IM  uint32_t GPIO11_LEVEL_LOW : 1;      /*!< [12..12] GPIO11_LEVEL_LOW */
      __IM  uint32_t GPIO11_LEVEL_HIGH : 1;     /*!< [13..13] GPIO11_LEVEL_HIGH */
      __IM  uint32_t GPIO11_EDGE_LOW : 1;       /*!< [14..14] GPIO11_EDGE_LOW */
      __IM  uint32_t GPIO11_EDGE_HIGH : 1;      /*!< [15..15] GPIO11_EDGE_HIGH */
      __IM  uint32_t GPIO12_LEVEL_LOW : 1;      /*!< [16..16] GPIO12_LEVEL_LOW */
      __IM  uint32_t GPIO12_LEVEL_HIGH : 1;     /*!< [17..17] GPIO12_LEVEL_HIGH */
      __IM  uint32_t GPIO12_EDGE_LOW : 1;       /*!< [18..18] GPIO12_EDGE_LOW */
      __IM  uint32_t GPIO12_EDGE_HIGH : 1;      /*!< [19..19] GPIO12_EDGE_HIGH */
      __IM  uint32_t GPIO13_LEVEL_LOW : 1;      /*!< [20..20] GPIO13_LEVEL_LOW */
      __IM  uint32_t GPIO13_LEVEL_HIGH : 1;     /*!< [21..21] GPIO13_LEVEL_HIGH */
      __IM  uint32_t GPIO13_EDGE_LOW : 1;       /*!< [22..22] GPIO13_EDGE_LOW */
      __IM  uint32_t GPIO13_EDGE_HIGH : 1;      /*!< [23..23] GPIO13_EDGE_HIGH */
      __IM  uint32_t GPIO14_LEVEL_LOW : 1;      /*!< [24..24] GPIO14_LEVEL_LOW */
      __IM  uint32_t GPIO14_LEVEL_HIGH : 1;     /*!< [25..25] GPIO14_LEVEL_HIGH */
      __IM  uint32_t GPIO14_EDGE_LOW : 1;       /*!< [26..26] GPIO14_EDGE_LOW */
      __IM  uint32_t GPIO14_EDGE_HIGH : 1;      /*!< [27..27] GPIO14_EDGE_HIGH */
      __IM  uint32_t GPIO15_LEVEL_LOW : 1;      /*!< [28..28] GPIO15_LEVEL_LOW */
      __IM  uint32_t GPIO15_LEVEL_HIGH : 1;     /*!< [29..29] GPIO15_LEVEL_HIGH */
      __IM  uint32_t GPIO15_EDGE_LOW : 1;       /*!< [30..30] GPIO15_EDGE_LOW */
      __IM  uint32_t GPIO15_EDGE_HIGH : 1;      /*!< [31..31] GPIO15_EDGE_HIGH */
    } PROC1_INTS1_b;
  } ;

  union {
    __IOM uint32_t PROC1_INTS2;                 /*!< (@ 0x00000158) Interrupt status after masking & forcing for proc1 */

    struct {
      __IM  uint32_t GPIO16_LEVEL_LOW : 1;      /*!< [0..0] GPIO16_LEVEL_LOW */
      __IM  uint32_t GPIO16_LEVEL_HIGH : 1;     /*!< [1..1] GPIO16_LEVEL_HIGH */
      __IM  uint32_t GPIO16_EDGE_LOW : 1;       /*!< [2..2] GPIO16_EDGE_LOW */
      __IM  uint32_t GPIO16_EDGE_HIGH : 1;      /*!< [3..3] GPIO16_EDGE_HIGH */
      __IM  uint32_t GPIO17_LEVEL_LOW : 1;      /*!< [4..4] GPIO17_LEVEL_LOW */
      __IM  uint32_t GPIO17_LEVEL_HIGH : 1;     /*!< [5..5] GPIO17_LEVEL_HIGH */
      __IM  uint32_t GPIO17_EDGE_LOW : 1;       /*!< [6..6] GPIO17_EDGE_LOW */
      __IM  uint32_t GPIO17_EDGE_HIGH : 1;      /*!< [7..7] GPIO17_EDGE_HIGH */
      __IM  uint32_t GPIO18_LEVEL_LOW : 1;      /*!< [8..8] GPIO18_LEVEL_LOW */
      __IM  uint32_t GPIO18_LEVEL_HIGH : 1;     /*!< [9..9] GPIO18_LEVEL_HIGH */
      __IM  uint32_t GPIO18_EDGE_LOW : 1;       /*!< [10..10] GPIO18_EDGE_LOW */
      __IM  uint32_t GPIO18_EDGE_HIGH : 1;      /*!< [11..11] GPIO18_EDGE_HIGH */
      __IM  uint32_t GPIO19_LEVEL_LOW : 1;      /*!< [12..12] GPIO19_LEVEL_LOW */
      __IM  uint32_t GPIO19_LEVEL_HIGH : 1;     /*!< [13..13] GPIO19_LEVEL_HIGH */
      __IM  uint32_t GPIO19_EDGE_LOW : 1;       /*!< [14..14] GPIO19_EDGE_LOW */
      __IM  uint32_t GPIO19_EDGE_HIGH : 1;      /*!< [15..15] GPIO19_EDGE_HIGH */
      __IM  uint32_t GPIO20_LEVEL_LOW : 1;      /*!< [16..16] GPIO20_LEVEL_LOW */
      __IM  uint32_t GPIO20_LEVEL_HIGH : 1;     /*!< [17..17] GPIO20_LEVEL_HIGH */
      __IM  uint32_t GPIO20_EDGE_LOW : 1;       /*!< [18..18] GPIO20_EDGE_LOW */
      __IM  uint32_t GPIO20_EDGE_HIGH : 1;      /*!< [19..19] GPIO20_EDGE_HIGH */
      __IM  uint32_t GPIO21_LEVEL_LOW : 1;      /*!< [20..20] GPIO21_LEVEL_LOW */
      __IM  uint32_t GPIO21_LEVEL_HIGH : 1;     /*!< [21..21] GPIO21_LEVEL_HIGH */
      __IM  uint32_t GPIO21_EDGE_LOW : 1;       /*!< [22..22] GPIO21_EDGE_LOW */
      __IM  uint32_t GPIO21_EDGE_HIGH : 1;      /*!< [23..23] GPIO21_EDGE_HIGH */
      __IM  uint32_t GPIO22_LEVEL_LOW : 1;      /*!< [24..24] GPIO22_LEVEL_LOW */
      __IM  uint32_t GPIO22_LEVEL_HIGH : 1;     /*!< [25..25] GPIO22_LEVEL_HIGH */
      __IM  uint32_t GPIO22_EDGE_LOW : 1;       /*!< [26..26] GPIO22_EDGE_LOW */
      __IM  uint32_t GPIO22_EDGE_HIGH : 1;      /*!< [27..27] GPIO22_EDGE_HIGH */
      __IM  uint32_t GPIO23_LEVEL_LOW : 1;      /*!< [28..28] GPIO23_LEVEL_LOW */
      __IM  uint32_t GPIO23_LEVEL_HIGH : 1;     /*!< [29..29] GPIO23_LEVEL_HIGH */
      __IM  uint32_t GPIO23_EDGE_LOW : 1;       /*!< [30..30] GPIO23_EDGE_LOW */
      __IM  uint32_t GPIO23_EDGE_HIGH : 1;      /*!< [31..31] GPIO23_EDGE_HIGH */
    } PROC1_INTS2_b;
  } ;

  union {
    __IOM uint32_t PROC1_INTS3;                 /*!< (@ 0x0000015C) Interrupt status after masking & forcing for proc1 */

    struct {
      __IM  uint32_t GPIO24_LEVEL_LOW : 1;      /*!< [0..0] GPIO24_LEVEL_LOW */
      __IM  uint32_t GPIO24_LEVEL_HIGH : 1;     /*!< [1..1] GPIO24_LEVEL_HIGH */
      __IM  uint32_t GPIO24_EDGE_LOW : 1;       /*!< [2..2] GPIO24_EDGE_LOW */
      __IM  uint32_t GPIO24_EDGE_HIGH : 1;      /*!< [3..3] GPIO24_EDGE_HIGH */
      __IM  uint32_t GPIO25_LEVEL_LOW : 1;      /*!< [4..4] GPIO25_LEVEL_LOW */
      __IM  uint32_t GPIO25_LEVEL_HIGH : 1;     /*!< [5..5] GPIO25_LEVEL_HIGH */
      __IM  uint32_t GPIO25_EDGE_LOW : 1;       /*!< [6..6] GPIO25_EDGE_LOW */
      __IM  uint32_t GPIO25_EDGE_HIGH : 1;      /*!< [7..7] GPIO25_EDGE_HIGH */
      __IM  uint32_t GPIO26_LEVEL_LOW : 1;      /*!< [8..8] GPIO26_LEVEL_LOW */
      __IM  uint32_t GPIO26_LEVEL_HIGH : 1;     /*!< [9..9] GPIO26_LEVEL_HIGH */
      __IM  uint32_t GPIO26_EDGE_LOW : 1;       /*!< [10..10] GPIO26_EDGE_LOW */
      __IM  uint32_t GPIO26_EDGE_HIGH : 1;      /*!< [11..11] GPIO26_EDGE_HIGH */
      __IM  uint32_t GPIO27_LEVEL_LOW : 1;      /*!< [12..12] GPIO27_LEVEL_LOW */
      __IM  uint32_t GPIO27_LEVEL_HIGH : 1;     /*!< [13..13] GPIO27_LEVEL_HIGH */
      __IM  uint32_t GPIO27_EDGE_LOW : 1;       /*!< [14..14] GPIO27_EDGE_LOW */
      __IM  uint32_t GPIO27_EDGE_HIGH : 1;      /*!< [15..15] GPIO27_EDGE_HIGH */
      __IM  uint32_t GPIO28_LEVEL_LOW : 1;      /*!< [16..16] GPIO28_LEVEL_LOW */
      __IM  uint32_t GPIO28_LEVEL_HIGH : 1;     /*!< [17..17] GPIO28_LEVEL_HIGH */
      __IM  uint32_t GPIO28_EDGE_LOW : 1;       /*!< [18..18] GPIO28_EDGE_LOW */
      __IM  uint32_t GPIO28_EDGE_HIGH : 1;      /*!< [19..19] GPIO28_EDGE_HIGH */
      __IM  uint32_t GPIO29_LEVEL_LOW : 1;      /*!< [20..20] GPIO29_LEVEL_LOW */
      __IM  uint32_t GPIO29_LEVEL_HIGH : 1;     /*!< [21..21] GPIO29_LEVEL_HIGH */
      __IM  uint32_t GPIO29_EDGE_LOW : 1;       /*!< [22..22] GPIO29_EDGE_LOW */
      __IM  uint32_t GPIO29_EDGE_HIGH : 1;      /*!< [23..23] GPIO29_EDGE_HIGH */
            uint32_t            : 8;
    } PROC1_INTS3_b;
  } ;

  union {
    __IOM uint32_t DORMANT_WAKE_INTE0;          /*!< (@ 0x00000160) Interrupt Enable for dormant_wake */

    struct {
      __IOM uint32_t GPIO0_LEVEL_LOW : 1;       /*!< [0..0] GPIO0_LEVEL_LOW */
      __IOM uint32_t GPIO0_LEVEL_HIGH : 1;      /*!< [1..1] GPIO0_LEVEL_HIGH */
      __IOM uint32_t GPIO0_EDGE_LOW : 1;        /*!< [2..2] GPIO0_EDGE_LOW */
      __IOM uint32_t GPIO0_EDGE_HIGH : 1;       /*!< [3..3] GPIO0_EDGE_HIGH */
      __IOM uint32_t GPIO1_LEVEL_LOW : 1;       /*!< [4..4] GPIO1_LEVEL_LOW */
      __IOM uint32_t GPIO1_LEVEL_HIGH : 1;      /*!< [5..5] GPIO1_LEVEL_HIGH */
      __IOM uint32_t GPIO1_EDGE_LOW : 1;        /*!< [6..6] GPIO1_EDGE_LOW */
      __IOM uint32_t GPIO1_EDGE_HIGH : 1;       /*!< [7..7] GPIO1_EDGE_HIGH */
      __IOM uint32_t GPIO2_LEVEL_LOW : 1;       /*!< [8..8] GPIO2_LEVEL_LOW */
      __IOM uint32_t GPIO2_LEVEL_HIGH : 1;      /*!< [9..9] GPIO2_LEVEL_HIGH */
      __IOM uint32_t GPIO2_EDGE_LOW : 1;        /*!< [10..10] GPIO2_EDGE_LOW */
      __IOM uint32_t GPIO2_EDGE_HIGH : 1;       /*!< [11..11] GPIO2_EDGE_HIGH */
      __IOM uint32_t GPIO3_LEVEL_LOW : 1;       /*!< [12..12] GPIO3_LEVEL_LOW */
      __IOM uint32_t GPIO3_LEVEL_HIGH : 1;      /*!< [13..13] GPIO3_LEVEL_HIGH */
      __IOM uint32_t GPIO3_EDGE_LOW : 1;        /*!< [14..14] GPIO3_EDGE_LOW */
      __IOM uint32_t GPIO3_EDGE_HIGH : 1;       /*!< [15..15] GPIO3_EDGE_HIGH */
      __IOM uint32_t GPIO4_LEVEL_LOW : 1;       /*!< [16..16] GPIO4_LEVEL_LOW */
      __IOM uint32_t GPIO4_LEVEL_HIGH : 1;      /*!< [17..17] GPIO4_LEVEL_HIGH */
      __IOM uint32_t GPIO4_EDGE_LOW : 1;        /*!< [18..18] GPIO4_EDGE_LOW */
      __IOM uint32_t GPIO4_EDGE_HIGH : 1;       /*!< [19..19] GPIO4_EDGE_HIGH */
      __IOM uint32_t GPIO5_LEVEL_LOW : 1;       /*!< [20..20] GPIO5_LEVEL_LOW */
      __IOM uint32_t GPIO5_LEVEL_HIGH : 1;      /*!< [21..21] GPIO5_LEVEL_HIGH */
      __IOM uint32_t GPIO5_EDGE_LOW : 1;        /*!< [22..22] GPIO5_EDGE_LOW */
      __IOM uint32_t GPIO5_EDGE_HIGH : 1;       /*!< [23..23] GPIO5_EDGE_HIGH */
      __IOM uint32_t GPIO6_LEVEL_LOW : 1;       /*!< [24..24] GPIO6_LEVEL_LOW */
      __IOM uint32_t GPIO6_LEVEL_HIGH : 1;      /*!< [25..25] GPIO6_LEVEL_HIGH */
      __IOM uint32_t GPIO6_EDGE_LOW : 1;        /*!< [26..26] GPIO6_EDGE_LOW */
      __IOM uint32_t GPIO6_EDGE_HIGH : 1;       /*!< [27..27] GPIO6_EDGE_HIGH */
      __IOM uint32_t GPIO7_LEVEL_LOW : 1;       /*!< [28..28] GPIO7_LEVEL_LOW */
      __IOM uint32_t GPIO7_LEVEL_HIGH : 1;      /*!< [29..29] GPIO7_LEVEL_HIGH */
      __IOM uint32_t GPIO7_EDGE_LOW : 1;        /*!< [30..30] GPIO7_EDGE_LOW */
      __IOM uint32_t GPIO7_EDGE_HIGH : 1;       /*!< [31..31] GPIO7_EDGE_HIGH */
    } DORMANT_WAKE_INTE0_b;
  } ;

  union {
    __IOM uint32_t DORMANT_WAKE_INTE1;          /*!< (@ 0x00000164) Interrupt Enable for dormant_wake */

    struct {
      __IOM uint32_t GPIO8_LEVEL_LOW : 1;       /*!< [0..0] GPIO8_LEVEL_LOW */
      __IOM uint32_t GPIO8_LEVEL_HIGH : 1;      /*!< [1..1] GPIO8_LEVEL_HIGH */
      __IOM uint32_t GPIO8_EDGE_LOW : 1;        /*!< [2..2] GPIO8_EDGE_LOW */
      __IOM uint32_t GPIO8_EDGE_HIGH : 1;       /*!< [3..3] GPIO8_EDGE_HIGH */
      __IOM uint32_t GPIO9_LEVEL_LOW : 1;       /*!< [4..4] GPIO9_LEVEL_LOW */
      __IOM uint32_t GPIO9_LEVEL_HIGH : 1;      /*!< [5..5] GPIO9_LEVEL_HIGH */
      __IOM uint32_t GPIO9_EDGE_LOW : 1;        /*!< [6..6] GPIO9_EDGE_LOW */
      __IOM uint32_t GPIO9_EDGE_HIGH : 1;       /*!< [7..7] GPIO9_EDGE_HIGH */
      __IOM uint32_t GPIO10_LEVEL_LOW : 1;      /*!< [8..8] GPIO10_LEVEL_LOW */
      __IOM uint32_t GPIO10_LEVEL_HIGH : 1;     /*!< [9..9] GPIO10_LEVEL_HIGH */
      __IOM uint32_t GPIO10_EDGE_LOW : 1;       /*!< [10..10] GPIO10_EDGE_LOW */
      __IOM uint32_t GPIO10_EDGE_HIGH : 1;      /*!< [11..11] GPIO10_EDGE_HIGH */
      __IOM uint32_t GPIO11_LEVEL_LOW : 1;      /*!< [12..12] GPIO11_LEVEL_LOW */
      __IOM uint32_t GPIO11_LEVEL_HIGH : 1;     /*!< [13..13] GPIO11_LEVEL_HIGH */
      __IOM uint32_t GPIO11_EDGE_LOW : 1;       /*!< [14..14] GPIO11_EDGE_LOW */
      __IOM uint32_t GPIO11_EDGE_HIGH : 1;      /*!< [15..15] GPIO11_EDGE_HIGH */
      __IOM uint32_t GPIO12_LEVEL_LOW : 1;      /*!< [16..16] GPIO12_LEVEL_LOW */
      __IOM uint32_t GPIO12_LEVEL_HIGH : 1;     /*!< [17..17] GPIO12_LEVEL_HIGH */
      __IOM uint32_t GPIO12_EDGE_LOW : 1;       /*!< [18..18] GPIO12_EDGE_LOW */
      __IOM uint32_t GPIO12_EDGE_HIGH : 1;      /*!< [19..19] GPIO12_EDGE_HIGH */
      __IOM uint32_t GPIO13_LEVEL_LOW : 1;      /*!< [20..20] GPIO13_LEVEL_LOW */
      __IOM uint32_t GPIO13_LEVEL_HIGH : 1;     /*!< [21..21] GPIO13_LEVEL_HIGH */
      __IOM uint32_t GPIO13_EDGE_LOW : 1;       /*!< [22..22] GPIO13_EDGE_LOW */
      __IOM uint32_t GPIO13_EDGE_HIGH : 1;      /*!< [23..23] GPIO13_EDGE_HIGH */
      __IOM uint32_t GPIO14_LEVEL_LOW : 1;      /*!< [24..24] GPIO14_LEVEL_LOW */
      __IOM uint32_t GPIO14_LEVEL_HIGH : 1;     /*!< [25..25] GPIO14_LEVEL_HIGH */
      __IOM uint32_t GPIO14_EDGE_LOW : 1;       /*!< [26..26] GPIO14_EDGE_LOW */
      __IOM uint32_t GPIO14_EDGE_HIGH : 1;      /*!< [27..27] GPIO14_EDGE_HIGH */
      __IOM uint32_t GPIO15_LEVEL_LOW : 1;      /*!< [28..28] GPIO15_LEVEL_LOW */
      __IOM uint32_t GPIO15_LEVEL_HIGH : 1;     /*!< [29..29] GPIO15_LEVEL_HIGH */
      __IOM uint32_t GPIO15_EDGE_LOW : 1;       /*!< [30..30] GPIO15_EDGE_LOW */
      __IOM uint32_t GPIO15_EDGE_HIGH : 1;      /*!< [31..31] GPIO15_EDGE_HIGH */
    } DORMANT_WAKE_INTE1_b;
  } ;

  union {
    __IOM uint32_t DORMANT_WAKE_INTE2;          /*!< (@ 0x00000168) Interrupt Enable for dormant_wake */

    struct {
      __IOM uint32_t GPIO16_LEVEL_LOW : 1;      /*!< [0..0] GPIO16_LEVEL_LOW */
      __IOM uint32_t GPIO16_LEVEL_HIGH : 1;     /*!< [1..1] GPIO16_LEVEL_HIGH */
      __IOM uint32_t GPIO16_EDGE_LOW : 1;       /*!< [2..2] GPIO16_EDGE_LOW */
      __IOM uint32_t GPIO16_EDGE_HIGH : 1;      /*!< [3..3] GPIO16_EDGE_HIGH */
      __IOM uint32_t GPIO17_LEVEL_LOW : 1;      /*!< [4..4] GPIO17_LEVEL_LOW */
      __IOM uint32_t GPIO17_LEVEL_HIGH : 1;     /*!< [5..5] GPIO17_LEVEL_HIGH */
      __IOM uint32_t GPIO17_EDGE_LOW : 1;       /*!< [6..6] GPIO17_EDGE_LOW */
      __IOM uint32_t GPIO17_EDGE_HIGH : 1;      /*!< [7..7] GPIO17_EDGE_HIGH */
      __IOM uint32_t GPIO18_LEVEL_LOW : 1;      /*!< [8..8] GPIO18_LEVEL_LOW */
      __IOM uint32_t GPIO18_LEVEL_HIGH : 1;     /*!< [9..9] GPIO18_LEVEL_HIGH */
      __IOM uint32_t GPIO18_EDGE_LOW : 1;       /*!< [10..10] GPIO18_EDGE_LOW */
      __IOM uint32_t GPIO18_EDGE_HIGH : 1;      /*!< [11..11] GPIO18_EDGE_HIGH */
      __IOM uint32_t GPIO19_LEVEL_LOW : 1;      /*!< [12..12] GPIO19_LEVEL_LOW */
      __IOM uint32_t GPIO19_LEVEL_HIGH : 1;     /*!< [13..13] GPIO19_LEVEL_HIGH */
      __IOM uint32_t GPIO19_EDGE_LOW : 1;       /*!< [14..14] GPIO19_EDGE_LOW */
      __IOM uint32_t GPIO19_EDGE_HIGH : 1;      /*!< [15..15] GPIO19_EDGE_HIGH */
      __IOM uint32_t GPIO20_LEVEL_LOW : 1;      /*!< [16..16] GPIO20_LEVEL_LOW */
      __IOM uint32_t GPIO20_LEVEL_HIGH : 1;     /*!< [17..17] GPIO20_LEVEL_HIGH */
      __IOM uint32_t GPIO20_EDGE_LOW : 1;       /*!< [18..18] GPIO20_EDGE_LOW */
      __IOM uint32_t GPIO20_EDGE_HIGH : 1;      /*!< [19..19] GPIO20_EDGE_HIGH */
      __IOM uint32_t GPIO21_LEVEL_LOW : 1;      /*!< [20..20] GPIO21_LEVEL_LOW */
      __IOM uint32_t GPIO21_LEVEL_HIGH : 1;     /*!< [21..21] GPIO21_LEVEL_HIGH */
      __IOM uint32_t GPIO21_EDGE_LOW : 1;       /*!< [22..22] GPIO21_EDGE_LOW */
      __IOM uint32_t GPIO21_EDGE_HIGH : 1;      /*!< [23..23] GPIO21_EDGE_HIGH */
      __IOM uint32_t GPIO22_LEVEL_LOW : 1;      /*!< [24..24] GPIO22_LEVEL_LOW */
      __IOM uint32_t GPIO22_LEVEL_HIGH : 1;     /*!< [25..25] GPIO22_LEVEL_HIGH */
      __IOM uint32_t GPIO22_EDGE_LOW : 1;       /*!< [26..26] GPIO22_EDGE_LOW */
      __IOM uint32_t GPIO22_EDGE_HIGH : 1;      /*!< [27..27] GPIO22_EDGE_HIGH */
      __IOM uint32_t GPIO23_LEVEL_LOW : 1;      /*!< [28..28] GPIO23_LEVEL_LOW */
      __IOM uint32_t GPIO23_LEVEL_HIGH : 1;     /*!< [29..29] GPIO23_LEVEL_HIGH */
      __IOM uint32_t GPIO23_EDGE_LOW : 1;       /*!< [30..30] GPIO23_EDGE_LOW */
      __IOM uint32_t GPIO23_EDGE_HIGH : 1;      /*!< [31..31] GPIO23_EDGE_HIGH */
    } DORMANT_WAKE_INTE2_b;
  } ;

  union {
    __IOM uint32_t DORMANT_WAKE_INTE3;          /*!< (@ 0x0000016C) Interrupt Enable for dormant_wake */

    struct {
      __IOM uint32_t GPIO24_LEVEL_LOW : 1;      /*!< [0..0] GPIO24_LEVEL_LOW */
      __IOM uint32_t GPIO24_LEVEL_HIGH : 1;     /*!< [1..1] GPIO24_LEVEL_HIGH */
      __IOM uint32_t GPIO24_EDGE_LOW : 1;       /*!< [2..2] GPIO24_EDGE_LOW */
      __IOM uint32_t GPIO24_EDGE_HIGH : 1;      /*!< [3..3] GPIO24_EDGE_HIGH */
      __IOM uint32_t GPIO25_LEVEL_LOW : 1;      /*!< [4..4] GPIO25_LEVEL_LOW */
      __IOM uint32_t GPIO25_LEVEL_HIGH : 1;     /*!< [5..5] GPIO25_LEVEL_HIGH */
      __IOM uint32_t GPIO25_EDGE_LOW : 1;       /*!< [6..6] GPIO25_EDGE_LOW */
      __IOM uint32_t GPIO25_EDGE_HIGH : 1;      /*!< [7..7] GPIO25_EDGE_HIGH */
      __IOM uint32_t GPIO26_LEVEL_LOW : 1;      /*!< [8..8] GPIO26_LEVEL_LOW */
      __IOM uint32_t GPIO26_LEVEL_HIGH : 1;     /*!< [9..9] GPIO26_LEVEL_HIGH */
      __IOM uint32_t GPIO26_EDGE_LOW : 1;       /*!< [10..10] GPIO26_EDGE_LOW */
      __IOM uint32_t GPIO26_EDGE_HIGH : 1;      /*!< [11..11] GPIO26_EDGE_HIGH */
      __IOM uint32_t GPIO27_LEVEL_LOW : 1;      /*!< [12..12] GPIO27_LEVEL_LOW */
      __IOM uint32_t GPIO27_LEVEL_HIGH : 1;     /*!< [13..13] GPIO27_LEVEL_HIGH */
      __IOM uint32_t GPIO27_EDGE_LOW : 1;       /*!< [14..14] GPIO27_EDGE_LOW */
      __IOM uint32_t GPIO27_EDGE_HIGH : 1;      /*!< [15..15] GPIO27_EDGE_HIGH */
      __IOM uint32_t GPIO28_LEVEL_LOW : 1;      /*!< [16..16] GPIO28_LEVEL_LOW */
      __IOM uint32_t GPIO28_LEVEL_HIGH : 1;     /*!< [17..17] GPIO28_LEVEL_HIGH */
      __IOM uint32_t GPIO28_EDGE_LOW : 1;       /*!< [18..18] GPIO28_EDGE_LOW */
      __IOM uint32_t GPIO28_EDGE_HIGH : 1;      /*!< [19..19] GPIO28_EDGE_HIGH */
      __IOM uint32_t GPIO29_LEVEL_LOW : 1;      /*!< [20..20] GPIO29_LEVEL_LOW */
      __IOM uint32_t GPIO29_LEVEL_HIGH : 1;     /*!< [21..21] GPIO29_LEVEL_HIGH */
      __IOM uint32_t GPIO29_EDGE_LOW : 1;       /*!< [22..22] GPIO29_EDGE_LOW */
      __IOM uint32_t GPIO29_EDGE_HIGH : 1;      /*!< [23..23] GPIO29_EDGE_HIGH */
            uint32_t            : 8;
    } DORMANT_WAKE_INTE3_b;
  } ;

  union {
    __IOM uint32_t DORMANT_WAKE_INTF0;          /*!< (@ 0x00000170) Interrupt Force for dormant_wake */

    struct {
      __IOM uint32_t GPIO0_LEVEL_LOW : 1;       /*!< [0..0] GPIO0_LEVEL_LOW */
      __IOM uint32_t GPIO0_LEVEL_HIGH : 1;      /*!< [1..1] GPIO0_LEVEL_HIGH */
      __IOM uint32_t GPIO0_EDGE_LOW : 1;        /*!< [2..2] GPIO0_EDGE_LOW */
      __IOM uint32_t GPIO0_EDGE_HIGH : 1;       /*!< [3..3] GPIO0_EDGE_HIGH */
      __IOM uint32_t GPIO1_LEVEL_LOW : 1;       /*!< [4..4] GPIO1_LEVEL_LOW */
      __IOM uint32_t GPIO1_LEVEL_HIGH : 1;      /*!< [5..5] GPIO1_LEVEL_HIGH */
      __IOM uint32_t GPIO1_EDGE_LOW : 1;        /*!< [6..6] GPIO1_EDGE_LOW */
      __IOM uint32_t GPIO1_EDGE_HIGH : 1;       /*!< [7..7] GPIO1_EDGE_HIGH */
      __IOM uint32_t GPIO2_LEVEL_LOW : 1;       /*!< [8..8] GPIO2_LEVEL_LOW */
      __IOM uint32_t GPIO2_LEVEL_HIGH : 1;      /*!< [9..9] GPIO2_LEVEL_HIGH */
      __IOM uint32_t GPIO2_EDGE_LOW : 1;        /*!< [10..10] GPIO2_EDGE_LOW */
      __IOM uint32_t GPIO2_EDGE_HIGH : 1;       /*!< [11..11] GPIO2_EDGE_HIGH */
      __IOM uint32_t GPIO3_LEVEL_LOW : 1;       /*!< [12..12] GPIO3_LEVEL_LOW */
      __IOM uint32_t GPIO3_LEVEL_HIGH : 1;      /*!< [13..13] GPIO3_LEVEL_HIGH */
      __IOM uint32_t GPIO3_EDGE_LOW : 1;        /*!< [14..14] GPIO3_EDGE_LOW */
      __IOM uint32_t GPIO3_EDGE_HIGH : 1;       /*!< [15..15] GPIO3_EDGE_HIGH */
      __IOM uint32_t GPIO4_LEVEL_LOW : 1;       /*!< [16..16] GPIO4_LEVEL_LOW */
      __IOM uint32_t GPIO4_LEVEL_HIGH : 1;      /*!< [17..17] GPIO4_LEVEL_HIGH */
      __IOM uint32_t GPIO4_EDGE_LOW : 1;        /*!< [18..18] GPIO4_EDGE_LOW */
      __IOM uint32_t GPIO4_EDGE_HIGH : 1;       /*!< [19..19] GPIO4_EDGE_HIGH */
      __IOM uint32_t GPIO5_LEVEL_LOW : 1;       /*!< [20..20] GPIO5_LEVEL_LOW */
      __IOM uint32_t GPIO5_LEVEL_HIGH : 1;      /*!< [21..21] GPIO5_LEVEL_HIGH */
      __IOM uint32_t GPIO5_EDGE_LOW : 1;        /*!< [22..22] GPIO5_EDGE_LOW */
      __IOM uint32_t GPIO5_EDGE_HIGH : 1;       /*!< [23..23] GPIO5_EDGE_HIGH */
      __IOM uint32_t GPIO6_LEVEL_LOW : 1;       /*!< [24..24] GPIO6_LEVEL_LOW */
      __IOM uint32_t GPIO6_LEVEL_HIGH : 1;      /*!< [25..25] GPIO6_LEVEL_HIGH */
      __IOM uint32_t GPIO6_EDGE_LOW : 1;        /*!< [26..26] GPIO6_EDGE_LOW */
      __IOM uint32_t GPIO6_EDGE_HIGH : 1;       /*!< [27..27] GPIO6_EDGE_HIGH */
      __IOM uint32_t GPIO7_LEVEL_LOW : 1;       /*!< [28..28] GPIO7_LEVEL_LOW */
      __IOM uint32_t GPIO7_LEVEL_HIGH : 1;      /*!< [29..29] GPIO7_LEVEL_HIGH */
      __IOM uint32_t GPIO7_EDGE_LOW : 1;        /*!< [30..30] GPIO7_EDGE_LOW */
      __IOM uint32_t GPIO7_EDGE_HIGH : 1;       /*!< [31..31] GPIO7_EDGE_HIGH */
    } DORMANT_WAKE_INTF0_b;
  } ;

  union {
    __IOM uint32_t DORMANT_WAKE_INTF1;          /*!< (@ 0x00000174) Interrupt Force for dormant_wake */

    struct {
      __IOM uint32_t GPIO8_LEVEL_LOW : 1;       /*!< [0..0] GPIO8_LEVEL_LOW */
      __IOM uint32_t GPIO8_LEVEL_HIGH : 1;      /*!< [1..1] GPIO8_LEVEL_HIGH */
      __IOM uint32_t GPIO8_EDGE_LOW : 1;        /*!< [2..2] GPIO8_EDGE_LOW */
      __IOM uint32_t GPIO8_EDGE_HIGH : 1;       /*!< [3..3] GPIO8_EDGE_HIGH */
      __IOM uint32_t GPIO9_LEVEL_LOW : 1;       /*!< [4..4] GPIO9_LEVEL_LOW */
      __IOM uint32_t GPIO9_LEVEL_HIGH : 1;      /*!< [5..5] GPIO9_LEVEL_HIGH */
      __IOM uint32_t GPIO9_EDGE_LOW : 1;        /*!< [6..6] GPIO9_EDGE_LOW */
      __IOM uint32_t GPIO9_EDGE_HIGH : 1;       /*!< [7..7] GPIO9_EDGE_HIGH */
      __IOM uint32_t GPIO10_LEVEL_LOW : 1;      /*!< [8..8] GPIO10_LEVEL_LOW */
      __IOM uint32_t GPIO10_LEVEL_HIGH : 1;     /*!< [9..9] GPIO10_LEVEL_HIGH */
      __IOM uint32_t GPIO10_EDGE_LOW : 1;       /*!< [10..10] GPIO10_EDGE_LOW */
      __IOM uint32_t GPIO10_EDGE_HIGH : 1;      /*!< [11..11] GPIO10_EDGE_HIGH */
      __IOM uint32_t GPIO11_LEVEL_LOW : 1;      /*!< [12..12] GPIO11_LEVEL_LOW */
      __IOM uint32_t GPIO11_LEVEL_HIGH : 1;     /*!< [13..13] GPIO11_LEVEL_HIGH */
      __IOM uint32_t GPIO11_EDGE_LOW : 1;       /*!< [14..14] GPIO11_EDGE_LOW */
      __IOM uint32_t GPIO11_EDGE_HIGH : 1;      /*!< [15..15] GPIO11_EDGE_HIGH */
      __IOM uint32_t GPIO12_LEVEL_LOW : 1;      /*!< [16..16] GPIO12_LEVEL_LOW */
      __IOM uint32_t GPIO12_LEVEL_HIGH : 1;     /*!< [17..17] GPIO12_LEVEL_HIGH */
      __IOM uint32_t GPIO12_EDGE_LOW : 1;       /*!< [18..18] GPIO12_EDGE_LOW */
      __IOM uint32_t GPIO12_EDGE_HIGH : 1;      /*!< [19..19] GPIO12_EDGE_HIGH */
      __IOM uint32_t GPIO13_LEVEL_LOW : 1;      /*!< [20..20] GPIO13_LEVEL_LOW */
      __IOM uint32_t GPIO13_LEVEL_HIGH : 1;     /*!< [21..21] GPIO13_LEVEL_HIGH */
      __IOM uint32_t GPIO13_EDGE_LOW : 1;       /*!< [22..22] GPIO13_EDGE_LOW */
      __IOM uint32_t GPIO13_EDGE_HIGH : 1;      /*!< [23..23] GPIO13_EDGE_HIGH */
      __IOM uint32_t GPIO14_LEVEL_LOW : 1;      /*!< [24..24] GPIO14_LEVEL_LOW */
      __IOM uint32_t GPIO14_LEVEL_HIGH : 1;     /*!< [25..25] GPIO14_LEVEL_HIGH */
      __IOM uint32_t GPIO14_EDGE_LOW : 1;       /*!< [26..26] GPIO14_EDGE_LOW */
      __IOM uint32_t GPIO14_EDGE_HIGH : 1;      /*!< [27..27] GPIO14_EDGE_HIGH */
      __IOM uint32_t GPIO15_LEVEL_LOW : 1;      /*!< [28..28] GPIO15_LEVEL_LOW */
      __IOM uint32_t GPIO15_LEVEL_HIGH : 1;     /*!< [29..29] GPIO15_LEVEL_HIGH */
      __IOM uint32_t GPIO15_EDGE_LOW : 1;       /*!< [30..30] GPIO15_EDGE_LOW */
      __IOM uint32_t GPIO15_EDGE_HIGH : 1;      /*!< [31..31] GPIO15_EDGE_HIGH */
    } DORMANT_WAKE_INTF1_b;
  } ;

  union {
    __IOM uint32_t DORMANT_WAKE_INTF2;          /*!< (@ 0x00000178) Interrupt Force for dormant_wake */

    struct {
      __IOM uint32_t GPIO16_LEVEL_LOW : 1;      /*!< [0..0] GPIO16_LEVEL_LOW */
      __IOM uint32_t GPIO16_LEVEL_HIGH : 1;     /*!< [1..1] GPIO16_LEVEL_HIGH */
      __IOM uint32_t GPIO16_EDGE_LOW : 1;       /*!< [2..2] GPIO16_EDGE_LOW */
      __IOM uint32_t GPIO16_EDGE_HIGH : 1;      /*!< [3..3] GPIO16_EDGE_HIGH */
      __IOM uint32_t GPIO17_LEVEL_LOW : 1;      /*!< [4..4] GPIO17_LEVEL_LOW */
      __IOM uint32_t GPIO17_LEVEL_HIGH : 1;     /*!< [5..5] GPIO17_LEVEL_HIGH */
      __IOM uint32_t GPIO17_EDGE_LOW : 1;       /*!< [6..6] GPIO17_EDGE_LOW */
      __IOM uint32_t GPIO17_EDGE_HIGH : 1;      /*!< [7..7] GPIO17_EDGE_HIGH */
      __IOM uint32_t GPIO18_LEVEL_LOW : 1;      /*!< [8..8] GPIO18_LEVEL_LOW */
      __IOM uint32_t GPIO18_LEVEL_HIGH : 1;     /*!< [9..9] GPIO18_LEVEL_HIGH */
      __IOM uint32_t GPIO18_EDGE_LOW : 1;       /*!< [10..10] GPIO18_EDGE_LOW */
      __IOM uint32_t GPIO18_EDGE_HIGH : 1;      /*!< [11..11] GPIO18_EDGE_HIGH */
      __IOM uint32_t GPIO19_LEVEL_LOW : 1;      /*!< [12..12] GPIO19_LEVEL_LOW */
      __IOM uint32_t GPIO19_LEVEL_HIGH : 1;     /*!< [13..13] GPIO19_LEVEL_HIGH */
      __IOM uint32_t GPIO19_EDGE_LOW : 1;       /*!< [14..14] GPIO19_EDGE_LOW */
      __IOM uint32_t GPIO19_EDGE_HIGH : 1;      /*!< [15..15] GPIO19_EDGE_HIGH */
      __IOM uint32_t GPIO20_LEVEL_LOW : 1;      /*!< [16..16] GPIO20_LEVEL_LOW */
      __IOM uint32_t GPIO20_LEVEL_HIGH : 1;     /*!< [17..17] GPIO20_LEVEL_HIGH */
      __IOM uint32_t GPIO20_EDGE_LOW : 1;       /*!< [18..18] GPIO20_EDGE_LOW */
      __IOM uint32_t GPIO20_EDGE_HIGH : 1;      /*!< [19..19] GPIO20_EDGE_HIGH */
      __IOM uint32_t GPIO21_LEVEL_LOW : 1;      /*!< [20..20] GPIO21_LEVEL_LOW */
      __IOM uint32_t GPIO21_LEVEL_HIGH : 1;     /*!< [21..21] GPIO21_LEVEL_HIGH */
      __IOM uint32_t GPIO21_EDGE_LOW : 1;       /*!< [22..22] GPIO21_EDGE_LOW */
      __IOM uint32_t GPIO21_EDGE_HIGH : 1;      /*!< [23..23] GPIO21_EDGE_HIGH */
      __IOM uint32_t GPIO22_LEVEL_LOW : 1;      /*!< [24..24] GPIO22_LEVEL_LOW */
      __IOM uint32_t GPIO22_LEVEL_HIGH : 1;     /*!< [25..25] GPIO22_LEVEL_HIGH */
      __IOM uint32_t GPIO22_EDGE_LOW : 1;       /*!< [26..26] GPIO22_EDGE_LOW */
      __IOM uint32_t GPIO22_EDGE_HIGH : 1;      /*!< [27..27] GPIO22_EDGE_HIGH */
      __IOM uint32_t GPIO23_LEVEL_LOW : 1;      /*!< [28..28] GPIO23_LEVEL_LOW */
      __IOM uint32_t GPIO23_LEVEL_HIGH : 1;     /*!< [29..29] GPIO23_LEVEL_HIGH */
      __IOM uint32_t GPIO23_EDGE_LOW : 1;       /*!< [30..30] GPIO23_EDGE_LOW */
      __IOM uint32_t GPIO23_EDGE_HIGH : 1;      /*!< [31..31] GPIO23_EDGE_HIGH */
    } DORMANT_WAKE_INTF2_b;
  } ;

  union {
    __IOM uint32_t DORMANT_WAKE_INTF3;          /*!< (@ 0x0000017C) Interrupt Force for dormant_wake */

    struct {
      __IOM uint32_t GPIO24_LEVEL_LOW : 1;      /*!< [0..0] GPIO24_LEVEL_LOW */
      __IOM uint32_t GPIO24_LEVEL_HIGH : 1;     /*!< [1..1] GPIO24_LEVEL_HIGH */
      __IOM uint32_t GPIO24_EDGE_LOW : 1;       /*!< [2..2] GPIO24_EDGE_LOW */
      __IOM uint32_t GPIO24_EDGE_HIGH : 1;      /*!< [3..3] GPIO24_EDGE_HIGH */
      __IOM uint32_t GPIO25_LEVEL_LOW : 1;      /*!< [4..4] GPIO25_LEVEL_LOW */
      __IOM uint32_t GPIO25_LEVEL_HIGH : 1;     /*!< [5..5] GPIO25_LEVEL_HIGH */
      __IOM uint32_t GPIO25_EDGE_LOW : 1;       /*!< [6..6] GPIO25_EDGE_LOW */
      __IOM uint32_t GPIO25_EDGE_HIGH : 1;      /*!< [7..7] GPIO25_EDGE_HIGH */
      __IOM uint32_t GPIO26_LEVEL_LOW : 1;      /*!< [8..8] GPIO26_LEVEL_LOW */
      __IOM uint32_t GPIO26_LEVEL_HIGH : 1;     /*!< [9..9] GPIO26_LEVEL_HIGH */
      __IOM uint32_t GPIO26_EDGE_LOW : 1;       /*!< [10..10] GPIO26_EDGE_LOW */
      __IOM uint32_t GPIO26_EDGE_HIGH : 1;      /*!< [11..11] GPIO26_EDGE_HIGH */
      __IOM uint32_t GPIO27_LEVEL_LOW : 1;      /*!< [12..12] GPIO27_LEVEL_LOW */
      __IOM uint32_t GPIO27_LEVEL_HIGH : 1;     /*!< [13..13] GPIO27_LEVEL_HIGH */
      __IOM uint32_t GPIO27_EDGE_LOW : 1;       /*!< [14..14] GPIO27_EDGE_LOW */
      __IOM uint32_t GPIO27_EDGE_HIGH : 1;      /*!< [15..15] GPIO27_EDGE_HIGH */
      __IOM uint32_t GPIO28_LEVEL_LOW : 1;      /*!< [16..16] GPIO28_LEVEL_LOW */
      __IOM uint32_t GPIO28_LEVEL_HIGH : 1;     /*!< [17..17] GPIO28_LEVEL_HIGH */
      __IOM uint32_t GPIO28_EDGE_LOW : 1;       /*!< [18..18] GPIO28_EDGE_LOW */
      __IOM uint32_t GPIO28_EDGE_HIGH : 1;      /*!< [19..19] GPIO28_EDGE_HIGH */
      __IOM uint32_t GPIO29_LEVEL_LOW : 1;      /*!< [20..20] GPIO29_LEVEL_LOW */
      __IOM uint32_t GPIO29_LEVEL_HIGH : 1;     /*!< [21..21] GPIO29_LEVEL_HIGH */
      __IOM uint32_t GPIO29_EDGE_LOW : 1;       /*!< [22..22] GPIO29_EDGE_LOW */
      __IOM uint32_t GPIO29_EDGE_HIGH : 1;      /*!< [23..23] GPIO29_EDGE_HIGH */
            uint32_t            : 8;
    } DORMANT_WAKE_INTF3_b;
  } ;

  union {
    __IOM uint32_t DORMANT_WAKE_INTS0;          /*!< (@ 0x00000180) Interrupt status after masking & forcing for dormant_wake */

    struct {
      __IM  uint32_t GPIO0_LEVEL_LOW : 1;       /*!< [0..0] GPIO0_LEVEL_LOW */
      __IM  uint32_t GPIO0_LEVEL_HIGH : 1;      /*!< [1..1] GPIO0_LEVEL_HIGH */
      __IM  uint32_t GPIO0_EDGE_LOW : 1;        /*!< [2..2] GPIO0_EDGE_LOW */
      __IM  uint32_t GPIO0_EDGE_HIGH : 1;       /*!< [3..3] GPIO0_EDGE_HIGH */
      __IM  uint32_t GPIO1_LEVEL_LOW : 1;       /*!< [4..4] GPIO1_LEVEL_LOW */
      __IM  uint32_t GPIO1_LEVEL_HIGH : 1;      /*!< [5..5] GPIO1_LEVEL_HIGH */
      __IM  uint32_t GPIO1_EDGE_LOW : 1;        /*!< [6..6] GPIO1_EDGE_LOW */
      __IM  uint32_t GPIO1_EDGE_HIGH : 1;       /*!< [7..7] GPIO1_EDGE_HIGH */
      __IM  uint32_t GPIO2_LEVEL_LOW : 1;       /*!< [8..8] GPIO2_LEVEL_LOW */
      __IM  uint32_t GPIO2_LEVEL_HIGH : 1;      /*!< [9..9] GPIO2_LEVEL_HIGH */
      __IM  uint32_t GPIO2_EDGE_LOW : 1;        /*!< [10..10] GPIO2_EDGE_LOW */
      __IM  uint32_t GPIO2_EDGE_HIGH : 1;       /*!< [11..11] GPIO2_EDGE_HIGH */
      __IM  uint32_t GPIO3_LEVEL_LOW : 1;       /*!< [12..12] GPIO3_LEVEL_LOW */
      __IM  uint32_t GPIO3_LEVEL_HIGH : 1;      /*!< [13..13] GPIO3_LEVEL_HIGH */
      __IM  uint32_t GPIO3_EDGE_LOW : 1;        /*!< [14..14] GPIO3_EDGE_LOW */
      __IM  uint32_t GPIO3_EDGE_HIGH : 1;       /*!< [15..15] GPIO3_EDGE_HIGH */
      __IM  uint32_t GPIO4_LEVEL_LOW : 1;       /*!< [16..16] GPIO4_LEVEL_LOW */
      __IM  uint32_t GPIO4_LEVEL_HIGH : 1;      /*!< [17..17] GPIO4_LEVEL_HIGH */
      __IM  uint32_t GPIO4_EDGE_LOW : 1;        /*!< [18..18] GPIO4_EDGE_LOW */
      __IM  uint32_t GPIO4_EDGE_HIGH : 1;       /*!< [19..19] GPIO4_EDGE_HIGH */
      __IM  uint32_t GPIO5_LEVEL_LOW : 1;       /*!< [20..20] GPIO5_LEVEL_LOW */
      __IM  uint32_t GPIO5_LEVEL_HIGH : 1;      /*!< [21..21] GPIO5_LEVEL_HIGH */
      __IM  uint32_t GPIO5_EDGE_LOW : 1;        /*!< [22..22] GPIO5_EDGE_LOW */
      __IM  uint32_t GPIO5_EDGE_HIGH : 1;       /*!< [23..23] GPIO5_EDGE_HIGH */
      __IM  uint32_t GPIO6_LEVEL_LOW : 1;       /*!< [24..24] GPIO6_LEVEL_LOW */
      __IM  uint32_t GPIO6_LEVEL_HIGH : 1;      /*!< [25..25] GPIO6_LEVEL_HIGH */
      __IM  uint32_t GPIO6_EDGE_LOW : 1;        /*!< [26..26] GPIO6_EDGE_LOW */
      __IM  uint32_t GPIO6_EDGE_HIGH : 1;       /*!< [27..27] GPIO6_EDGE_HIGH */
      __IM  uint32_t GPIO7_LEVEL_LOW : 1;       /*!< [28..28] GPIO7_LEVEL_LOW */
      __IM  uint32_t GPIO7_LEVEL_HIGH : 1;      /*!< [29..29] GPIO7_LEVEL_HIGH */
      __IM  uint32_t GPIO7_EDGE_LOW : 1;        /*!< [30..30] GPIO7_EDGE_LOW */
      __IM  uint32_t GPIO7_EDGE_HIGH : 1;       /*!< [31..31] GPIO7_EDGE_HIGH */
    } DORMANT_WAKE_INTS0_b;
  } ;

  union {
    __IOM uint32_t DORMANT_WAKE_INTS1;          /*!< (@ 0x00000184) Interrupt status after masking & forcing for dormant_wake */

    struct {
      __IM  uint32_t GPIO8_LEVEL_LOW : 1;       /*!< [0..0] GPIO8_LEVEL_LOW */
      __IM  uint32_t GPIO8_LEVEL_HIGH : 1;      /*!< [1..1] GPIO8_LEVEL_HIGH */
      __IM  uint32_t GPIO8_EDGE_LOW : 1;        /*!< [2..2] GPIO8_EDGE_LOW */
      __IM  uint32_t GPIO8_EDGE_HIGH : 1;       /*!< [3..3] GPIO8_EDGE_HIGH */
      __IM  uint32_t GPIO9_LEVEL_LOW : 1;       /*!< [4..4] GPIO9_LEVEL_LOW */
      __IM  uint32_t GPIO9_LEVEL_HIGH : 1;      /*!< [5..5] GPIO9_LEVEL_HIGH */
      __IM  uint32_t GPIO9_EDGE_LOW : 1;        /*!< [6..6] GPIO9_EDGE_LOW */
      __IM  uint32_t GPIO9_EDGE_HIGH : 1;       /*!< [7..7] GPIO9_EDGE_HIGH */
      __IM  uint32_t GPIO10_LEVEL_LOW : 1;      /*!< [8..8] GPIO10_LEVEL_LOW */
      __IM  uint32_t GPIO10_LEVEL_HIGH : 1;     /*!< [9..9] GPIO10_LEVEL_HIGH */
      __IM  uint32_t GPIO10_EDGE_LOW : 1;       /*!< [10..10] GPIO10_EDGE_LOW */
      __IM  uint32_t GPIO10_EDGE_HIGH : 1;      /*!< [11..11] GPIO10_EDGE_HIGH */
      __IM  uint32_t GPIO11_LEVEL_LOW : 1;      /*!< [12..12] GPIO11_LEVEL_LOW */
      __IM  uint32_t GPIO11_LEVEL_HIGH : 1;     /*!< [13..13] GPIO11_LEVEL_HIGH */
      __IM  uint32_t GPIO11_EDGE_LOW : 1;       /*!< [14..14] GPIO11_EDGE_LOW */
      __IM  uint32_t GPIO11_EDGE_HIGH : 1;      /*!< [15..15] GPIO11_EDGE_HIGH */
      __IM  uint32_t GPIO12_LEVEL_LOW : 1;      /*!< [16..16] GPIO12_LEVEL_LOW */
      __IM  uint32_t GPIO12_LEVEL_HIGH : 1;     /*!< [17..17] GPIO12_LEVEL_HIGH */
      __IM  uint32_t GPIO12_EDGE_LOW : 1;       /*!< [18..18] GPIO12_EDGE_LOW */
      __IM  uint32_t GPIO12_EDGE_HIGH : 1;      /*!< [19..19] GPIO12_EDGE_HIGH */
      __IM  uint32_t GPIO13_LEVEL_LOW : 1;      /*!< [20..20] GPIO13_LEVEL_LOW */
      __IM  uint32_t GPIO13_LEVEL_HIGH : 1;     /*!< [21..21] GPIO13_LEVEL_HIGH */
      __IM  uint32_t GPIO13_EDGE_LOW : 1;       /*!< [22..22] GPIO13_EDGE_LOW */
      __IM  uint32_t GPIO13_EDGE_HIGH : 1;      /*!< [23..23] GPIO13_EDGE_HIGH */
      __IM  uint32_t GPIO14_LEVEL_LOW : 1;      /*!< [24..24] GPIO14_LEVEL_LOW */
      __IM  uint32_t GPIO14_LEVEL_HIGH : 1;     /*!< [25..25] GPIO14_LEVEL_HIGH */
      __IM  uint32_t GPIO14_EDGE_LOW : 1;       /*!< [26..26] GPIO14_EDGE_LOW */
      __IM  uint32_t GPIO14_EDGE_HIGH : 1;      /*!< [27..27] GPIO14_EDGE_HIGH */
      __IM  uint32_t GPIO15_LEVEL_LOW : 1;      /*!< [28..28] GPIO15_LEVEL_LOW */
      __IM  uint32_t GPIO15_LEVEL_HIGH : 1;     /*!< [29..29] GPIO15_LEVEL_HIGH */
      __IM  uint32_t GPIO15_EDGE_LOW : 1;       /*!< [30..30] GPIO15_EDGE_LOW */
      __IM  uint32_t GPIO15_EDGE_HIGH : 1;      /*!< [31..31] GPIO15_EDGE_HIGH */
    } DORMANT_WAKE_INTS1_b;
  } ;

  union {
    __IOM uint32_t DORMANT_WAKE_INTS2;          /*!< (@ 0x00000188) Interrupt status after masking & forcing for dormant_wake */

    struct {
      __IM  uint32_t GPIO16_LEVEL_LOW : 1;      /*!< [0..0] GPIO16_LEVEL_LOW */
      __IM  uint32_t GPIO16_LEVEL_HIGH : 1;     /*!< [1..1] GPIO16_LEVEL_HIGH */
      __IM  uint32_t GPIO16_EDGE_LOW : 1;       /*!< [2..2] GPIO16_EDGE_LOW */
      __IM  uint32_t GPIO16_EDGE_HIGH : 1;      /*!< [3..3] GPIO16_EDGE_HIGH */
      __IM  uint32_t GPIO17_LEVEL_LOW : 1;      /*!< [4..4] GPIO17_LEVEL_LOW */
      __IM  uint32_t GPIO17_LEVEL_HIGH : 1;     /*!< [5..5] GPIO17_LEVEL_HIGH */
      __IM  uint32_t GPIO17_EDGE_LOW : 1;       /*!< [6..6] GPIO17_EDGE_LOW */
      __IM  uint32_t GPIO17_EDGE_HIGH : 1;      /*!< [7..7] GPIO17_EDGE_HIGH */
      __IM  uint32_t GPIO18_LEVEL_LOW : 1;      /*!< [8..8] GPIO18_LEVEL_LOW */
      __IM  uint32_t GPIO18_LEVEL_HIGH : 1;     /*!< [9..9] GPIO18_LEVEL_HIGH */
      __IM  uint32_t GPIO18_EDGE_LOW : 1;       /*!< [10..10] GPIO18_EDGE_LOW */
      __IM  uint32_t GPIO18_EDGE_HIGH : 1;      /*!< [11..11] GPIO18_EDGE_HIGH */
      __IM  uint32_t GPIO19_LEVEL_LOW : 1;      /*!< [12..12] GPIO19_LEVEL_LOW */
      __IM  uint32_t GPIO19_LEVEL_HIGH : 1;     /*!< [13..13] GPIO19_LEVEL_HIGH */
      __IM  uint32_t GPIO19_EDGE_LOW : 1;       /*!< [14..14] GPIO19_EDGE_LOW */
      __IM  uint32_t GPIO19_EDGE_HIGH : 1;      /*!< [15..15] GPIO19_EDGE_HIGH */
      __IM  uint32_t GPIO20_LEVEL_LOW : 1;      /*!< [16..16] GPIO20_LEVEL_LOW */
      __IM  uint32_t GPIO20_LEVEL_HIGH : 1;     /*!< [17..17] GPIO20_LEVEL_HIGH */
      __IM  uint32_t GPIO20_EDGE_LOW : 1;       /*!< [18..18] GPIO20_EDGE_LOW */
      __IM  uint32_t GPIO20_EDGE_HIGH : 1;      /*!< [19..19] GPIO20_EDGE_HIGH */
      __IM  uint32_t GPIO21_LEVEL_LOW : 1;      /*!< [20..20] GPIO21_LEVEL_LOW */
      __IM  uint32_t GPIO21_LEVEL_HIGH : 1;     /*!< [21..21] GPIO21_LEVEL_HIGH */
      __IM  uint32_t GPIO21_EDGE_LOW : 1;       /*!< [22..22] GPIO21_EDGE_LOW */
      __IM  uint32_t GPIO21_EDGE_HIGH : 1;      /*!< [23..23] GPIO21_EDGE_HIGH */
      __IM  uint32_t GPIO22_LEVEL_LOW : 1;      /*!< [24..24] GPIO22_LEVEL_LOW */
      __IM  uint32_t GPIO22_LEVEL_HIGH : 1;     /*!< [25..25] GPIO22_LEVEL_HIGH */
      __IM  uint32_t GPIO22_EDGE_LOW : 1;       /*!< [26..26] GPIO22_EDGE_LOW */
      __IM  uint32_t GPIO22_EDGE_HIGH : 1;      /*!< [27..27] GPIO22_EDGE_HIGH */
      __IM  uint32_t GPIO23_LEVEL_LOW : 1;      /*!< [28..28] GPIO23_LEVEL_LOW */
      __IM  uint32_t GPIO23_LEVEL_HIGH : 1;     /*!< [29..29] GPIO23_LEVEL_HIGH */
      __IM  uint32_t GPIO23_EDGE_LOW : 1;       /*!< [30..30] GPIO23_EDGE_LOW */
      __IM  uint32_t GPIO23_EDGE_HIGH : 1;      /*!< [31..31] GPIO23_EDGE_HIGH */
    } DORMANT_WAKE_INTS2_b;
  } ;

  union {
    __IOM uint32_t DORMANT_WAKE_INTS3;          /*!< (@ 0x0000018C) Interrupt status after masking & forcing for dormant_wake */

    struct {
      __IM  uint32_t GPIO24_LEVEL_LOW : 1;      /*!< [0..0] GPIO24_LEVEL_LOW */
      __IM  uint32_t GPIO24_LEVEL_HIGH : 1;     /*!< [1..1] GPIO24_LEVEL_HIGH */
      __IM  uint32_t GPIO24_EDGE_LOW : 1;       /*!< [2..2] GPIO24_EDGE_LOW */
      __IM  uint32_t GPIO24_EDGE_HIGH : 1;      /*!< [3..3] GPIO24_EDGE_HIGH */
      __IM  uint32_t GPIO25_LEVEL_LOW : 1;      /*!< [4..4] GPIO25_LEVEL_LOW */
      __IM  uint32_t GPIO25_LEVEL_HIGH : 1;     /*!< [5..5] GPIO25_LEVEL_HIGH */
      __IM  uint32_t GPIO25_EDGE_LOW : 1;       /*!< [6..6] GPIO25_EDGE_LOW */
      __IM  uint32_t GPIO25_EDGE_HIGH : 1;      /*!< [7..7] GPIO25_EDGE_HIGH */
      __IM  uint32_t GPIO26_LEVEL_LOW : 1;      /*!< [8..8] GPIO26_LEVEL_LOW */
      __IM  uint32_t GPIO26_LEVEL_HIGH : 1;     /*!< [9..9] GPIO26_LEVEL_HIGH */
      __IM  uint32_t GPIO26_EDGE_LOW : 1;       /*!< [10..10] GPIO26_EDGE_LOW */
      __IM  uint32_t GPIO26_EDGE_HIGH : 1;      /*!< [11..11] GPIO26_EDGE_HIGH */
      __IM  uint32_t GPIO27_LEVEL_LOW : 1;      /*!< [12..12] GPIO27_LEVEL_LOW */
      __IM  uint32_t GPIO27_LEVEL_HIGH : 1;     /*!< [13..13] GPIO27_LEVEL_HIGH */
      __IM  uint32_t GPIO27_EDGE_LOW : 1;       /*!< [14..14] GPIO27_EDGE_LOW */
      __IM  uint32_t GPIO27_EDGE_HIGH : 1;      /*!< [15..15] GPIO27_EDGE_HIGH */
      __IM  uint32_t GPIO28_LEVEL_LOW : 1;      /*!< [16..16] GPIO28_LEVEL_LOW */
      __IM  uint32_t GPIO28_LEVEL_HIGH : 1;     /*!< [17..17] GPIO28_LEVEL_HIGH */
      __IM  uint32_t GPIO28_EDGE_LOW : 1;       /*!< [18..18] GPIO28_EDGE_LOW */
      __IM  uint32_t GPIO28_EDGE_HIGH : 1;      /*!< [19..19] GPIO28_EDGE_HIGH */
      __IM  uint32_t GPIO29_LEVEL_LOW : 1;      /*!< [20..20] GPIO29_LEVEL_LOW */
      __IM  uint32_t GPIO29_LEVEL_HIGH : 1;     /*!< [21..21] GPIO29_LEVEL_HIGH */
      __IM  uint32_t GPIO29_EDGE_LOW : 1;       /*!< [22..22] GPIO29_EDGE_LOW */
      __IM  uint32_t GPIO29_EDGE_HIGH : 1;      /*!< [23..23] GPIO29_EDGE_HIGH */
            uint32_t            : 8;
    } DORMANT_WAKE_INTS3_b;
  } ;
} IO_BANK0_Type;                                /*!< Size = 400 (0x190) */
