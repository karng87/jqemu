// sed -En '/ PADS_BANK0/p' mcu-start/include/rp2040.h > PADS_BANK0.h

//  * @brief PADS_BANK0 (PADS_BANK0)

#define PADS_BANK0_BASE             0x4001C000UL
#define PADS_BANK0                  ((PADS_BANK0_Type*)        PADS_BANK0_BASE)
#define PADS_BANK0_XOR              ((PADS_BANK0_Type*)        (PADS_BANK0_BASE+0x1000))
#define PADS_BANK0_SET              ((PADS_BANK0_Type*)        (PADS_BANK0_BASE+0x2000))
#define PADS_BANK0_CLR              ((PADS_BANK0_Type*)        (PADS_BANK0_BASE+0x3000))
/* ================                                        PADS_BANK0                                         ================ */
#define PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT_Pos (0UL)          /*!< VOLTAGE_SELECT (Bit 0) */
#define PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT_Msk (0x1UL)        /*!< VOLTAGE_SELECT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO0_OD_Pos           (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO0_OD_Msk           (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO0_IE_Pos           (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO0_IE_Msk           (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO0_DRIVE_Pos        (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO0_DRIVE_Msk        (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO0_PUE_Pos          (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO0_PUE_Msk          (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO0_PDE_Pos          (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO0_PDE_Msk          (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO0_SCHMITT_Pos      (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO0_SCHMITT_Msk      (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO0_SLEWFAST_Pos     (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO0_SLEWFAST_Msk     (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO1_OD_Pos           (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO1_OD_Msk           (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO1_IE_Pos           (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO1_IE_Msk           (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO1_DRIVE_Pos        (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO1_DRIVE_Msk        (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO1_PUE_Pos          (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO1_PUE_Msk          (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO1_PDE_Pos          (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO1_PDE_Msk          (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO1_SCHMITT_Pos      (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO1_SCHMITT_Msk      (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO1_SLEWFAST_Pos     (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO1_SLEWFAST_Msk     (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO2_OD_Pos           (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO2_OD_Msk           (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO2_IE_Pos           (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO2_IE_Msk           (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO2_DRIVE_Pos        (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO2_DRIVE_Msk        (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO2_PUE_Pos          (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO2_PUE_Msk          (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO2_PDE_Pos          (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO2_PDE_Msk          (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO2_SCHMITT_Pos      (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO2_SCHMITT_Msk      (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO2_SLEWFAST_Pos     (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO2_SLEWFAST_Msk     (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO3_OD_Pos           (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO3_OD_Msk           (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO3_IE_Pos           (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO3_IE_Msk           (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO3_DRIVE_Pos        (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO3_DRIVE_Msk        (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO3_PUE_Pos          (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO3_PUE_Msk          (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO3_PDE_Pos          (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO3_PDE_Msk          (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO3_SCHMITT_Pos      (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO3_SCHMITT_Msk      (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO3_SLEWFAST_Pos     (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO3_SLEWFAST_Msk     (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO4_OD_Pos           (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO4_OD_Msk           (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO4_IE_Pos           (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO4_IE_Msk           (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO4_DRIVE_Pos        (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO4_DRIVE_Msk        (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO4_PUE_Pos          (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO4_PUE_Msk          (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO4_PDE_Pos          (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO4_PDE_Msk          (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO4_SCHMITT_Pos      (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO4_SCHMITT_Msk      (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO4_SLEWFAST_Pos     (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO4_SLEWFAST_Msk     (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO5_OD_Pos           (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO5_OD_Msk           (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO5_IE_Pos           (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO5_IE_Msk           (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO5_DRIVE_Pos        (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO5_DRIVE_Msk        (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO5_PUE_Pos          (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO5_PUE_Msk          (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO5_PDE_Pos          (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO5_PDE_Msk          (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO5_SCHMITT_Pos      (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO5_SCHMITT_Msk      (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO5_SLEWFAST_Pos     (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO5_SLEWFAST_Msk     (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO6_OD_Pos           (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO6_OD_Msk           (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO6_IE_Pos           (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO6_IE_Msk           (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO6_DRIVE_Pos        (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO6_DRIVE_Msk        (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO6_PUE_Pos          (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO6_PUE_Msk          (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO6_PDE_Pos          (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO6_PDE_Msk          (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO6_SCHMITT_Pos      (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO6_SCHMITT_Msk      (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO6_SLEWFAST_Pos     (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO6_SLEWFAST_Msk     (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO7_OD_Pos           (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO7_OD_Msk           (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO7_IE_Pos           (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO7_IE_Msk           (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO7_DRIVE_Pos        (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO7_DRIVE_Msk        (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO7_PUE_Pos          (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO7_PUE_Msk          (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO7_PDE_Pos          (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO7_PDE_Msk          (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO7_SCHMITT_Pos      (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO7_SCHMITT_Msk      (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO7_SLEWFAST_Pos     (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO7_SLEWFAST_Msk     (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO8_OD_Pos           (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO8_OD_Msk           (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO8_IE_Pos           (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO8_IE_Msk           (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO8_DRIVE_Pos        (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO8_DRIVE_Msk        (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO8_PUE_Pos          (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO8_PUE_Msk          (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO8_PDE_Pos          (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO8_PDE_Msk          (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO8_SCHMITT_Pos      (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO8_SCHMITT_Msk      (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO8_SLEWFAST_Pos     (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO8_SLEWFAST_Msk     (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO9_OD_Pos           (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO9_OD_Msk           (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO9_IE_Pos           (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO9_IE_Msk           (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO9_DRIVE_Pos        (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO9_DRIVE_Msk        (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO9_PUE_Pos          (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO9_PUE_Msk          (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO9_PDE_Pos          (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO9_PDE_Msk          (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO9_SCHMITT_Pos      (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO9_SCHMITT_Msk      (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO9_SLEWFAST_Pos     (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO9_SLEWFAST_Msk     (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO10_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO10_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO10_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO10_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO10_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO10_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO10_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO10_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO10_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO10_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO10_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO10_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO10_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO10_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO11_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO11_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO11_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO11_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO11_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO11_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO11_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO11_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO11_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO11_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO11_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO11_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO11_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO11_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO12_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO12_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO12_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO12_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO12_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO12_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO12_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO12_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO12_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO12_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO12_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO12_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO12_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO12_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO13_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO13_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO13_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO13_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO13_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO13_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO13_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO13_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO13_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO13_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO13_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO13_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO13_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO13_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO14_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO14_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO14_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO14_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO14_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO14_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO14_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO14_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO14_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO14_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO14_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO14_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO14_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO14_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO15_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO15_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO15_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO15_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO15_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO15_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO15_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO15_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO15_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO15_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO15_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO15_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO15_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO15_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO16_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO16_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO16_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO16_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO16_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO16_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO16_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO16_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO16_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO16_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO16_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO16_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO16_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO16_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO17_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO17_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO17_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO17_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO17_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO17_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO17_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO17_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO17_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO17_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO17_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO17_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO17_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO17_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO18_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO18_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO18_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO18_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO18_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO18_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO18_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO18_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO18_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO18_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO18_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO18_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO18_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO18_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO19_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO19_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO19_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO19_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO19_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO19_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO19_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO19_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO19_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO19_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO19_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO19_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO19_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO19_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO20_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO20_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO20_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO20_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO20_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO20_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO20_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO20_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO20_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO20_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO20_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO20_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO20_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO20_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO21_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO21_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO21_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO21_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO21_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO21_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO21_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO21_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO21_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO21_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO21_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO21_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO21_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO21_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO22_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO22_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO22_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO22_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO22_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO22_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO22_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO22_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO22_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO22_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO22_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO22_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO22_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO22_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO23_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO23_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO23_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO23_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO23_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO23_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO23_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO23_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO23_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO23_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO23_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO23_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO23_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO23_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO24_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO24_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO24_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO24_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO24_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO24_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO24_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO24_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO24_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO24_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO24_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO24_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO24_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO24_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO25_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO25_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO25_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO25_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO25_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO25_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO25_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO25_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO25_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO25_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO25_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO25_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO25_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO25_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO26_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO26_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO26_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO26_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO26_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO26_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO26_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO26_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO26_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO26_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO26_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO26_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO26_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO26_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO27_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO27_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO27_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO27_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO27_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO27_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO27_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO27_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO27_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO27_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO27_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO27_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO27_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO27_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO28_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO28_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO28_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO28_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO28_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO28_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO28_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO28_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO28_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO28_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO28_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO28_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO28_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO28_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO29_OD_Pos          (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_GPIO29_OD_Msk          (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO29_IE_Pos          (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_GPIO29_IE_Msk          (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO29_DRIVE_Pos       (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_GPIO29_DRIVE_Msk       (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_GPIO29_PUE_Pos         (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_GPIO29_PUE_Msk         (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO29_PDE_Pos         (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_GPIO29_PDE_Msk         (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO29_SCHMITT_Pos     (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_GPIO29_SCHMITT_Msk     (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_GPIO29_SLEWFAST_Pos    (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_GPIO29_SLEWFAST_Msk    (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_SWCLK_OD_Pos           (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_SWCLK_OD_Msk           (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_SWCLK_IE_Pos           (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_SWCLK_IE_Msk           (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_SWCLK_DRIVE_Pos        (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_SWCLK_DRIVE_Msk        (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_SWCLK_PUE_Pos          (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_SWCLK_PUE_Msk          (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_SWCLK_PDE_Pos          (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_SWCLK_PDE_Msk          (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_SWCLK_SCHMITT_Pos      (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_SWCLK_SCHMITT_Msk      (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_SWCLK_SLEWFAST_Pos     (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_SWCLK_SLEWFAST_Msk     (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
#define PADS_BANK0_SWD_OD_Pos             (7UL)                     /*!< OD (Bit 7) */
#define PADS_BANK0_SWD_OD_Msk             (0x80UL)                  /*!< OD (Bitfield-Mask: 0x01) */
#define PADS_BANK0_SWD_IE_Pos             (6UL)                     /*!< IE (Bit 6) */
#define PADS_BANK0_SWD_IE_Msk             (0x40UL)                  /*!< IE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_SWD_DRIVE_Pos          (4UL)                     /*!< DRIVE (Bit 4) */
#define PADS_BANK0_SWD_DRIVE_Msk          (0x30UL)                  /*!< DRIVE (Bitfield-Mask: 0x03) */
#define PADS_BANK0_SWD_PUE_Pos            (3UL)                     /*!< PUE (Bit 3) */
#define PADS_BANK0_SWD_PUE_Msk            (0x8UL)                   /*!< PUE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_SWD_PDE_Pos            (2UL)                     /*!< PDE (Bit 2) */
#define PADS_BANK0_SWD_PDE_Msk            (0x4UL)                   /*!< PDE (Bitfield-Mask: 0x01) */
#define PADS_BANK0_SWD_SCHMITT_Pos        (1UL)                     /*!< SCHMITT (Bit 1) */
#define PADS_BANK0_SWD_SCHMITT_Msk        (0x2UL)                   /*!< SCHMITT (Bitfield-Mask: 0x01) */
#define PADS_BANK0_SWD_SLEWFAST_Pos       (0UL)                     /*!< SLEWFAST (Bit 0) */
#define PADS_BANK0_SWD_SLEWFAST_Msk       (0x1UL)                   /*!< SLEWFAST (Bitfield-Mask: 0x01) */
/* ================                                        PADS_BANK0                                         ================ */
/* ====================================  PADS_BANK0 VOLTAGE_SELECT VOLTAGE_SELECT [0..0]  ==================================== */
typedef enum {                                  /*!< PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT */
  PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT_3v3 = 0,/*!< 3v3 : Set voltage to 3.3V (DVDD >= 2V5) */
  PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT_1v8 = 1,/*!< 1v8 : Set voltage to 1.8V (DVDD <= 1V8) */
} PADS_BANK0_VOLTAGE_SELECT_VOLTAGE_SELECT_Enum;
/* =============================================  PADS_BANK0 GPIO0 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO0_DRIVE */
  PADS_BANK0_GPIO0_DRIVE_2mA           = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO0_DRIVE_4mA           = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO0_DRIVE_8mA           = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO0_DRIVE_12mA          = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO0_DRIVE_Enum;
/* =============================================  PADS_BANK0 GPIO1 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO1_DRIVE */
  PADS_BANK0_GPIO1_DRIVE_2mA           = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO1_DRIVE_4mA           = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO1_DRIVE_8mA           = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO1_DRIVE_12mA          = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO1_DRIVE_Enum;
/* =============================================  PADS_BANK0 GPIO2 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO2_DRIVE */
  PADS_BANK0_GPIO2_DRIVE_2mA           = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO2_DRIVE_4mA           = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO2_DRIVE_8mA           = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO2_DRIVE_12mA          = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO2_DRIVE_Enum;
/* =============================================  PADS_BANK0 GPIO3 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO3_DRIVE */
  PADS_BANK0_GPIO3_DRIVE_2mA           = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO3_DRIVE_4mA           = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO3_DRIVE_8mA           = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO3_DRIVE_12mA          = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO3_DRIVE_Enum;
/* =============================================  PADS_BANK0 GPIO4 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO4_DRIVE */
  PADS_BANK0_GPIO4_DRIVE_2mA           = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO4_DRIVE_4mA           = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO4_DRIVE_8mA           = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO4_DRIVE_12mA          = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO4_DRIVE_Enum;
/* =============================================  PADS_BANK0 GPIO5 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO5_DRIVE */
  PADS_BANK0_GPIO5_DRIVE_2mA           = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO5_DRIVE_4mA           = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO5_DRIVE_8mA           = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO5_DRIVE_12mA          = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO5_DRIVE_Enum;
/* =============================================  PADS_BANK0 GPIO6 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO6_DRIVE */
  PADS_BANK0_GPIO6_DRIVE_2mA           = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO6_DRIVE_4mA           = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO6_DRIVE_8mA           = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO6_DRIVE_12mA          = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO6_DRIVE_Enum;
/* =============================================  PADS_BANK0 GPIO7 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO7_DRIVE */
  PADS_BANK0_GPIO7_DRIVE_2mA           = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO7_DRIVE_4mA           = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO7_DRIVE_8mA           = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO7_DRIVE_12mA          = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO7_DRIVE_Enum;
/* =============================================  PADS_BANK0 GPIO8 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO8_DRIVE */
  PADS_BANK0_GPIO8_DRIVE_2mA           = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO8_DRIVE_4mA           = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO8_DRIVE_8mA           = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO8_DRIVE_12mA          = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO8_DRIVE_Enum;
/* =============================================  PADS_BANK0 GPIO9 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO9_DRIVE */
  PADS_BANK0_GPIO9_DRIVE_2mA           = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO9_DRIVE_4mA           = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO9_DRIVE_8mA           = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO9_DRIVE_12mA          = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO9_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO10 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO10_DRIVE */
  PADS_BANK0_GPIO10_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO10_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO10_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO10_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO10_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO11 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO11_DRIVE */
  PADS_BANK0_GPIO11_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO11_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO11_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO11_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO11_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO12 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO12_DRIVE */
  PADS_BANK0_GPIO12_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO12_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO12_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO12_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO12_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO13 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO13_DRIVE */
  PADS_BANK0_GPIO13_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO13_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO13_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO13_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO13_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO14 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO14_DRIVE */
  PADS_BANK0_GPIO14_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO14_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO14_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO14_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO14_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO15 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO15_DRIVE */
  PADS_BANK0_GPIO15_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO15_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO15_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO15_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO15_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO16 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO16_DRIVE */
  PADS_BANK0_GPIO16_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO16_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO16_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO16_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO16_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO17 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO17_DRIVE */
  PADS_BANK0_GPIO17_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO17_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO17_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO17_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO17_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO18 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO18_DRIVE */
  PADS_BANK0_GPIO18_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO18_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO18_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO18_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO18_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO19 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO19_DRIVE */
  PADS_BANK0_GPIO19_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO19_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO19_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO19_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO19_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO20 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO20_DRIVE */
  PADS_BANK0_GPIO20_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO20_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO20_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO20_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO20_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO21 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO21_DRIVE */
  PADS_BANK0_GPIO21_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO21_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO21_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO21_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO21_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO22 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO22_DRIVE */
  PADS_BANK0_GPIO22_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO22_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO22_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO22_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO22_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO23 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO23_DRIVE */
  PADS_BANK0_GPIO23_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO23_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO23_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO23_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO23_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO24 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO24_DRIVE */
  PADS_BANK0_GPIO24_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO24_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO24_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO24_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO24_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO25 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO25_DRIVE */
  PADS_BANK0_GPIO25_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO25_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO25_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO25_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO25_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO26 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO26_DRIVE */
  PADS_BANK0_GPIO26_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO26_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO26_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO26_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO26_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO27 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO27_DRIVE */
  PADS_BANK0_GPIO27_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO27_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO27_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO27_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO27_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO28 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO28_DRIVE */
  PADS_BANK0_GPIO28_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO28_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO28_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO28_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO28_DRIVE_Enum;
/* ============================================  PADS_BANK0 GPIO29 DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_GPIO29_DRIVE */
  PADS_BANK0_GPIO29_DRIVE_2mA          = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_GPIO29_DRIVE_4mA          = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_GPIO29_DRIVE_8mA          = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_GPIO29_DRIVE_12mA         = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_GPIO29_DRIVE_Enum;
/* =============================================  PADS_BANK0 SWCLK DRIVE [4..5]  ============================================= */
typedef enum {                                  /*!< PADS_BANK0_SWCLK_DRIVE */
  PADS_BANK0_SWCLK_DRIVE_2mA           = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_SWCLK_DRIVE_4mA           = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_SWCLK_DRIVE_8mA           = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_SWCLK_DRIVE_12mA          = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_SWCLK_DRIVE_Enum;
/* ==============================================  PADS_BANK0 SWD DRIVE [4..5]  ============================================== */
typedef enum {                                  /*!< PADS_BANK0_SWD_DRIVE */
  PADS_BANK0_SWD_DRIVE_2mA             = 0,     /*!< 2mA : 2mA */
  PADS_BANK0_SWD_DRIVE_4mA             = 1,     /*!< 4mA : 4mA */
  PADS_BANK0_SWD_DRIVE_8mA             = 2,     /*!< 8mA : 8mA */
  PADS_BANK0_SWD_DRIVE_12mA            = 3,     /*!< 12mA : 12mA */
} PADS_BANK0_SWD_DRIVE_Enum;
