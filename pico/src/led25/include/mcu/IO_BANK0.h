/* ================                                         IO_BANK0                                          ================ */
#include  "IO_BANK0_Type.h"

#define IO_BANK0_BASE               0x40014000UL
#define IO_BANK0                    ((IO_BANK0_Type*)          IO_BANK0_BASE)
#define IO_BANK0_XOR                ((IO_BANK0_Type*)          (IO_BANK0_BASE+0x1000))
#define IO_BANK0_SET                ((IO_BANK0_Type*)          (IO_BANK0_BASE+0x2000))
#define IO_BANK0_CLR                ((IO_BANK0_Type*)          (IO_BANK0_BASE+0x3000))
/* ================                                         IO_BANK0                                          ================ */
#define IO_BANK0_GPIO0_STATUS_IRQTOPROC_Pos (26UL)                  /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO0_STATUS_IRQTOPROC_Msk (0x4000000UL)           /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO0_STATUS_IRQFROMPAD_Pos (24UL)                 /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO0_STATUS_IRQFROMPAD_Msk (0x1000000UL)          /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO0_STATUS_INTOPERI_Pos (19UL)                   /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO0_STATUS_INTOPERI_Msk (0x80000UL)              /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO0_STATUS_INFROMPAD_Pos (17UL)                  /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO0_STATUS_INFROMPAD_Msk (0x20000UL)             /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO0_STATUS_OETOPAD_Pos (13UL)                    /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO0_STATUS_OETOPAD_Msk (0x2000UL)                /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO0_STATUS_OEFROMPERI_Pos (12UL)                 /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO0_STATUS_OEFROMPERI_Msk (0x1000UL)             /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO0_STATUS_OUTTOPAD_Pos (9UL)                    /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO0_STATUS_OUTTOPAD_Msk (0x200UL)                /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO0_STATUS_OUTFROMPERI_Pos (8UL)                 /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO0_STATUS_OUTFROMPERI_Msk (0x100UL)             /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO0_CTRL_IRQOVER_Pos   (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO0_CTRL_IRQOVER_Msk   (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO0_CTRL_INOVER_Pos    (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO0_CTRL_INOVER_Msk    (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO0_CTRL_OEOVER_Pos    (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO0_CTRL_OEOVER_Msk    (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO0_CTRL_OUTOVER_Pos   (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO0_CTRL_OUTOVER_Msk   (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO0_CTRL_FUNCSEL_Pos   (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO0_CTRL_FUNCSEL_Msk   (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO1_STATUS_IRQTOPROC_Pos (26UL)                  /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO1_STATUS_IRQTOPROC_Msk (0x4000000UL)           /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO1_STATUS_IRQFROMPAD_Pos (24UL)                 /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO1_STATUS_IRQFROMPAD_Msk (0x1000000UL)          /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO1_STATUS_INTOPERI_Pos (19UL)                   /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO1_STATUS_INTOPERI_Msk (0x80000UL)              /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO1_STATUS_INFROMPAD_Pos (17UL)                  /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO1_STATUS_INFROMPAD_Msk (0x20000UL)             /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO1_STATUS_OETOPAD_Pos (13UL)                    /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO1_STATUS_OETOPAD_Msk (0x2000UL)                /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO1_STATUS_OEFROMPERI_Pos (12UL)                 /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO1_STATUS_OEFROMPERI_Msk (0x1000UL)             /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO1_STATUS_OUTTOPAD_Pos (9UL)                    /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO1_STATUS_OUTTOPAD_Msk (0x200UL)                /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO1_STATUS_OUTFROMPERI_Pos (8UL)                 /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO1_STATUS_OUTFROMPERI_Msk (0x100UL)             /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO1_CTRL_IRQOVER_Pos   (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO1_CTRL_IRQOVER_Msk   (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO1_CTRL_INOVER_Pos    (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO1_CTRL_INOVER_Msk    (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO1_CTRL_OEOVER_Pos    (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO1_CTRL_OEOVER_Msk    (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO1_CTRL_OUTOVER_Pos   (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO1_CTRL_OUTOVER_Msk   (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO1_CTRL_FUNCSEL_Pos   (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO1_CTRL_FUNCSEL_Msk   (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO2_STATUS_IRQTOPROC_Pos (26UL)                  /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO2_STATUS_IRQTOPROC_Msk (0x4000000UL)           /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO2_STATUS_IRQFROMPAD_Pos (24UL)                 /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO2_STATUS_IRQFROMPAD_Msk (0x1000000UL)          /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO2_STATUS_INTOPERI_Pos (19UL)                   /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO2_STATUS_INTOPERI_Msk (0x80000UL)              /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO2_STATUS_INFROMPAD_Pos (17UL)                  /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO2_STATUS_INFROMPAD_Msk (0x20000UL)             /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO2_STATUS_OETOPAD_Pos (13UL)                    /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO2_STATUS_OETOPAD_Msk (0x2000UL)                /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO2_STATUS_OEFROMPERI_Pos (12UL)                 /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO2_STATUS_OEFROMPERI_Msk (0x1000UL)             /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO2_STATUS_OUTTOPAD_Pos (9UL)                    /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO2_STATUS_OUTTOPAD_Msk (0x200UL)                /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO2_STATUS_OUTFROMPERI_Pos (8UL)                 /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO2_STATUS_OUTFROMPERI_Msk (0x100UL)             /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO2_CTRL_IRQOVER_Pos   (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO2_CTRL_IRQOVER_Msk   (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO2_CTRL_INOVER_Pos    (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO2_CTRL_INOVER_Msk    (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO2_CTRL_OEOVER_Pos    (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO2_CTRL_OEOVER_Msk    (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO2_CTRL_OUTOVER_Pos   (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO2_CTRL_OUTOVER_Msk   (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO2_CTRL_FUNCSEL_Pos   (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO2_CTRL_FUNCSEL_Msk   (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO3_STATUS_IRQTOPROC_Pos (26UL)                  /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO3_STATUS_IRQTOPROC_Msk (0x4000000UL)           /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO3_STATUS_IRQFROMPAD_Pos (24UL)                 /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO3_STATUS_IRQFROMPAD_Msk (0x1000000UL)          /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO3_STATUS_INTOPERI_Pos (19UL)                   /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO3_STATUS_INTOPERI_Msk (0x80000UL)              /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO3_STATUS_INFROMPAD_Pos (17UL)                  /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO3_STATUS_INFROMPAD_Msk (0x20000UL)             /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO3_STATUS_OETOPAD_Pos (13UL)                    /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO3_STATUS_OETOPAD_Msk (0x2000UL)                /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO3_STATUS_OEFROMPERI_Pos (12UL)                 /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO3_STATUS_OEFROMPERI_Msk (0x1000UL)             /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO3_STATUS_OUTTOPAD_Pos (9UL)                    /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO3_STATUS_OUTTOPAD_Msk (0x200UL)                /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO3_STATUS_OUTFROMPERI_Pos (8UL)                 /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO3_STATUS_OUTFROMPERI_Msk (0x100UL)             /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO3_CTRL_IRQOVER_Pos   (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO3_CTRL_IRQOVER_Msk   (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO3_CTRL_INOVER_Pos    (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO3_CTRL_INOVER_Msk    (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO3_CTRL_OEOVER_Pos    (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO3_CTRL_OEOVER_Msk    (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO3_CTRL_OUTOVER_Pos   (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO3_CTRL_OUTOVER_Msk   (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO3_CTRL_FUNCSEL_Pos   (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO3_CTRL_FUNCSEL_Msk   (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO4_STATUS_IRQTOPROC_Pos (26UL)                  /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO4_STATUS_IRQTOPROC_Msk (0x4000000UL)           /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO4_STATUS_IRQFROMPAD_Pos (24UL)                 /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO4_STATUS_IRQFROMPAD_Msk (0x1000000UL)          /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO4_STATUS_INTOPERI_Pos (19UL)                   /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO4_STATUS_INTOPERI_Msk (0x80000UL)              /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO4_STATUS_INFROMPAD_Pos (17UL)                  /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO4_STATUS_INFROMPAD_Msk (0x20000UL)             /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO4_STATUS_OETOPAD_Pos (13UL)                    /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO4_STATUS_OETOPAD_Msk (0x2000UL)                /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO4_STATUS_OEFROMPERI_Pos (12UL)                 /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO4_STATUS_OEFROMPERI_Msk (0x1000UL)             /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO4_STATUS_OUTTOPAD_Pos (9UL)                    /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO4_STATUS_OUTTOPAD_Msk (0x200UL)                /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO4_STATUS_OUTFROMPERI_Pos (8UL)                 /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO4_STATUS_OUTFROMPERI_Msk (0x100UL)             /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO4_CTRL_IRQOVER_Pos   (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO4_CTRL_IRQOVER_Msk   (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO4_CTRL_INOVER_Pos    (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO4_CTRL_INOVER_Msk    (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO4_CTRL_OEOVER_Pos    (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO4_CTRL_OEOVER_Msk    (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO4_CTRL_OUTOVER_Pos   (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO4_CTRL_OUTOVER_Msk   (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO4_CTRL_FUNCSEL_Pos   (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO4_CTRL_FUNCSEL_Msk   (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO5_STATUS_IRQTOPROC_Pos (26UL)                  /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO5_STATUS_IRQTOPROC_Msk (0x4000000UL)           /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO5_STATUS_IRQFROMPAD_Pos (24UL)                 /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO5_STATUS_IRQFROMPAD_Msk (0x1000000UL)          /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO5_STATUS_INTOPERI_Pos (19UL)                   /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO5_STATUS_INTOPERI_Msk (0x80000UL)              /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO5_STATUS_INFROMPAD_Pos (17UL)                  /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO5_STATUS_INFROMPAD_Msk (0x20000UL)             /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO5_STATUS_OETOPAD_Pos (13UL)                    /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO5_STATUS_OETOPAD_Msk (0x2000UL)                /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO5_STATUS_OEFROMPERI_Pos (12UL)                 /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO5_STATUS_OEFROMPERI_Msk (0x1000UL)             /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO5_STATUS_OUTTOPAD_Pos (9UL)                    /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO5_STATUS_OUTTOPAD_Msk (0x200UL)                /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO5_STATUS_OUTFROMPERI_Pos (8UL)                 /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO5_STATUS_OUTFROMPERI_Msk (0x100UL)             /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO5_CTRL_IRQOVER_Pos   (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO5_CTRL_IRQOVER_Msk   (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO5_CTRL_INOVER_Pos    (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO5_CTRL_INOVER_Msk    (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO5_CTRL_OEOVER_Pos    (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO5_CTRL_OEOVER_Msk    (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO5_CTRL_OUTOVER_Pos   (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO5_CTRL_OUTOVER_Msk   (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO5_CTRL_FUNCSEL_Pos   (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO5_CTRL_FUNCSEL_Msk   (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO6_STATUS_IRQTOPROC_Pos (26UL)                  /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO6_STATUS_IRQTOPROC_Msk (0x4000000UL)           /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO6_STATUS_IRQFROMPAD_Pos (24UL)                 /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO6_STATUS_IRQFROMPAD_Msk (0x1000000UL)          /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO6_STATUS_INTOPERI_Pos (19UL)                   /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO6_STATUS_INTOPERI_Msk (0x80000UL)              /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO6_STATUS_INFROMPAD_Pos (17UL)                  /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO6_STATUS_INFROMPAD_Msk (0x20000UL)             /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO6_STATUS_OETOPAD_Pos (13UL)                    /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO6_STATUS_OETOPAD_Msk (0x2000UL)                /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO6_STATUS_OEFROMPERI_Pos (12UL)                 /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO6_STATUS_OEFROMPERI_Msk (0x1000UL)             /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO6_STATUS_OUTTOPAD_Pos (9UL)                    /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO6_STATUS_OUTTOPAD_Msk (0x200UL)                /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO6_STATUS_OUTFROMPERI_Pos (8UL)                 /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO6_STATUS_OUTFROMPERI_Msk (0x100UL)             /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO6_CTRL_IRQOVER_Pos   (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO6_CTRL_IRQOVER_Msk   (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO6_CTRL_INOVER_Pos    (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO6_CTRL_INOVER_Msk    (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO6_CTRL_OEOVER_Pos    (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO6_CTRL_OEOVER_Msk    (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO6_CTRL_OUTOVER_Pos   (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO6_CTRL_OUTOVER_Msk   (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO6_CTRL_FUNCSEL_Pos   (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO6_CTRL_FUNCSEL_Msk   (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO7_STATUS_IRQTOPROC_Pos (26UL)                  /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO7_STATUS_IRQTOPROC_Msk (0x4000000UL)           /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO7_STATUS_IRQFROMPAD_Pos (24UL)                 /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO7_STATUS_IRQFROMPAD_Msk (0x1000000UL)          /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO7_STATUS_INTOPERI_Pos (19UL)                   /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO7_STATUS_INTOPERI_Msk (0x80000UL)              /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO7_STATUS_INFROMPAD_Pos (17UL)                  /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO7_STATUS_INFROMPAD_Msk (0x20000UL)             /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO7_STATUS_OETOPAD_Pos (13UL)                    /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO7_STATUS_OETOPAD_Msk (0x2000UL)                /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO7_STATUS_OEFROMPERI_Pos (12UL)                 /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO7_STATUS_OEFROMPERI_Msk (0x1000UL)             /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO7_STATUS_OUTTOPAD_Pos (9UL)                    /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO7_STATUS_OUTTOPAD_Msk (0x200UL)                /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO7_STATUS_OUTFROMPERI_Pos (8UL)                 /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO7_STATUS_OUTFROMPERI_Msk (0x100UL)             /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO7_CTRL_IRQOVER_Pos   (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO7_CTRL_IRQOVER_Msk   (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO7_CTRL_INOVER_Pos    (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO7_CTRL_INOVER_Msk    (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO7_CTRL_OEOVER_Pos    (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO7_CTRL_OEOVER_Msk    (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO7_CTRL_OUTOVER_Pos   (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO7_CTRL_OUTOVER_Msk   (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO7_CTRL_FUNCSEL_Pos   (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO7_CTRL_FUNCSEL_Msk   (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO8_STATUS_IRQTOPROC_Pos (26UL)                  /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO8_STATUS_IRQTOPROC_Msk (0x4000000UL)           /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO8_STATUS_IRQFROMPAD_Pos (24UL)                 /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO8_STATUS_IRQFROMPAD_Msk (0x1000000UL)          /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO8_STATUS_INTOPERI_Pos (19UL)                   /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO8_STATUS_INTOPERI_Msk (0x80000UL)              /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO8_STATUS_INFROMPAD_Pos (17UL)                  /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO8_STATUS_INFROMPAD_Msk (0x20000UL)             /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO8_STATUS_OETOPAD_Pos (13UL)                    /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO8_STATUS_OETOPAD_Msk (0x2000UL)                /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO8_STATUS_OEFROMPERI_Pos (12UL)                 /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO8_STATUS_OEFROMPERI_Msk (0x1000UL)             /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO8_STATUS_OUTTOPAD_Pos (9UL)                    /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO8_STATUS_OUTTOPAD_Msk (0x200UL)                /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO8_STATUS_OUTFROMPERI_Pos (8UL)                 /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO8_STATUS_OUTFROMPERI_Msk (0x100UL)             /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO8_CTRL_IRQOVER_Pos   (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO8_CTRL_IRQOVER_Msk   (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO8_CTRL_INOVER_Pos    (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO8_CTRL_INOVER_Msk    (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO8_CTRL_OEOVER_Pos    (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO8_CTRL_OEOVER_Msk    (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO8_CTRL_OUTOVER_Pos   (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO8_CTRL_OUTOVER_Msk   (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO8_CTRL_FUNCSEL_Pos   (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO8_CTRL_FUNCSEL_Msk   (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO9_STATUS_IRQTOPROC_Pos (26UL)                  /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO9_STATUS_IRQTOPROC_Msk (0x4000000UL)           /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO9_STATUS_IRQFROMPAD_Pos (24UL)                 /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO9_STATUS_IRQFROMPAD_Msk (0x1000000UL)          /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO9_STATUS_INTOPERI_Pos (19UL)                   /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO9_STATUS_INTOPERI_Msk (0x80000UL)              /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO9_STATUS_INFROMPAD_Pos (17UL)                  /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO9_STATUS_INFROMPAD_Msk (0x20000UL)             /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO9_STATUS_OETOPAD_Pos (13UL)                    /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO9_STATUS_OETOPAD_Msk (0x2000UL)                /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO9_STATUS_OEFROMPERI_Pos (12UL)                 /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO9_STATUS_OEFROMPERI_Msk (0x1000UL)             /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO9_STATUS_OUTTOPAD_Pos (9UL)                    /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO9_STATUS_OUTTOPAD_Msk (0x200UL)                /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO9_STATUS_OUTFROMPERI_Pos (8UL)                 /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO9_STATUS_OUTFROMPERI_Msk (0x100UL)             /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO9_CTRL_IRQOVER_Pos   (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO9_CTRL_IRQOVER_Msk   (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO9_CTRL_INOVER_Pos    (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO9_CTRL_INOVER_Msk    (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO9_CTRL_OEOVER_Pos    (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO9_CTRL_OEOVER_Msk    (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO9_CTRL_OUTOVER_Pos   (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO9_CTRL_OUTOVER_Msk   (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO9_CTRL_FUNCSEL_Pos   (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO9_CTRL_FUNCSEL_Msk   (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO10_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO10_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO10_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO10_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO10_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO10_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO10_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO10_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO10_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO10_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO10_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO10_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO10_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO10_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO10_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO10_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO10_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO10_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO10_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO10_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO10_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO10_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO10_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO10_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO10_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO10_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO11_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO11_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO11_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO11_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO11_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO11_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO11_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO11_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO11_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO11_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO11_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO11_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO11_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO11_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO11_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO11_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO11_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO11_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO11_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO11_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO11_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO11_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO11_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO11_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO11_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO11_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO12_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO12_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO12_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO12_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO12_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO12_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO12_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO12_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO12_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO12_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO12_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO12_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO12_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO12_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO12_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO12_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO12_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO12_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO12_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO12_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO12_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO12_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO12_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO12_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO12_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO12_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO13_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO13_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO13_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO13_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO13_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO13_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO13_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO13_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO13_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO13_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO13_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO13_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO13_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO13_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO13_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO13_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO13_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO13_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO13_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO13_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO13_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO13_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO13_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO13_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO13_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO13_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO14_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO14_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO14_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO14_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO14_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO14_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO14_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO14_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO14_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO14_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO14_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO14_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO14_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO14_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO14_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO14_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO14_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO14_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO14_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO14_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO14_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO14_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO14_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO14_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO14_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO14_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO15_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO15_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO15_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO15_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO15_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO15_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO15_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO15_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO15_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO15_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO15_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO15_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO15_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO15_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO15_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO15_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO15_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO15_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO15_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO15_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO15_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO15_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO15_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO15_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO15_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO15_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO16_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO16_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO16_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO16_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO16_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO16_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO16_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO16_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO16_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO16_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO16_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO16_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO16_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO16_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO16_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO16_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO16_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO16_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO16_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO16_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO16_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO16_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO16_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO16_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO16_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO16_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO17_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO17_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO17_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO17_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO17_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO17_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO17_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO17_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO17_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO17_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO17_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO17_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO17_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO17_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO17_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO17_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO17_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO17_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO17_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO17_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO17_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO17_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO17_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO17_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO17_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO17_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO18_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO18_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO18_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO18_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO18_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO18_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO18_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO18_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO18_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO18_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO18_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO18_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO18_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO18_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO18_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO18_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO18_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO18_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO18_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO18_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO18_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO18_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO18_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO18_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO18_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO18_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO19_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO19_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO19_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO19_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO19_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO19_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO19_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO19_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO19_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO19_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO19_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO19_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO19_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO19_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO19_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO19_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO19_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO19_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO19_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO19_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO19_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO19_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO19_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO19_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO19_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO19_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO20_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO20_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO20_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO20_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO20_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO20_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO20_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO20_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO20_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO20_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO20_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO20_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO20_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO20_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO20_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO20_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO20_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO20_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO20_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO20_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO20_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO20_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO20_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO20_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO20_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO20_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO21_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO21_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO21_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO21_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO21_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO21_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO21_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO21_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO21_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO21_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO21_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO21_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO21_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO21_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO21_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO21_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO21_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO21_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO21_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO21_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO21_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO21_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO21_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO21_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO21_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO21_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO22_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO22_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO22_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO22_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO22_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO22_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO22_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO22_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO22_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO22_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO22_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO22_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO22_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO22_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO22_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO22_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO22_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO22_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO22_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO22_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO22_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO22_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO22_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO22_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO22_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO22_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO23_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO23_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO23_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO23_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO23_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO23_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO23_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO23_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO23_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO23_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO23_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO23_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO23_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO23_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO23_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO23_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO23_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO23_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO23_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO23_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO23_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO23_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO23_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO23_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO23_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO23_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO24_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO24_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO24_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO24_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO24_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO24_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO24_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO24_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO24_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO24_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO24_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO24_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO24_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO24_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO24_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO24_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO24_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO24_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO24_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO24_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO24_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO24_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO24_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO24_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO24_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO24_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO25_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO25_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO25_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO25_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO25_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO25_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO25_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO25_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO25_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO25_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO25_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO25_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO25_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO25_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO25_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO25_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO25_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO25_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO25_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO25_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO25_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO25_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO25_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO25_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO25_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO25_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO26_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO26_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO26_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO26_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO26_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO26_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO26_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO26_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO26_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO26_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO26_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO26_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO26_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO26_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO26_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO26_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO26_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO26_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO26_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO26_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO26_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO26_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO26_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO26_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO26_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO26_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO27_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO27_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO27_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO27_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO27_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO27_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO27_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO27_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO27_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO27_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO27_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO27_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO27_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO27_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO27_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO27_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO27_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO27_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO27_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO27_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO27_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO27_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO27_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO27_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO27_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO27_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO28_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO28_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO28_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO28_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO28_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO28_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO28_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO28_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO28_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO28_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO28_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO28_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO28_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO28_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO28_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO28_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO28_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO28_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO28_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO28_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO28_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO28_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO28_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO28_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO28_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO28_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_GPIO29_STATUS_IRQTOPROC_Pos (26UL)                 /*!< IRQTOPROC (Bit 26) */
#define IO_BANK0_GPIO29_STATUS_IRQTOPROC_Msk (0x4000000UL)          /*!< IRQTOPROC (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO29_STATUS_IRQFROMPAD_Pos (24UL)                /*!< IRQFROMPAD (Bit 24) */
#define IO_BANK0_GPIO29_STATUS_IRQFROMPAD_Msk (0x1000000UL)         /*!< IRQFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO29_STATUS_INTOPERI_Pos (19UL)                  /*!< INTOPERI (Bit 19) */
#define IO_BANK0_GPIO29_STATUS_INTOPERI_Msk (0x80000UL)             /*!< INTOPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO29_STATUS_INFROMPAD_Pos (17UL)                 /*!< INFROMPAD (Bit 17) */
#define IO_BANK0_GPIO29_STATUS_INFROMPAD_Msk (0x20000UL)            /*!< INFROMPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO29_STATUS_OETOPAD_Pos (13UL)                   /*!< OETOPAD (Bit 13) */
#define IO_BANK0_GPIO29_STATUS_OETOPAD_Msk (0x2000UL)               /*!< OETOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO29_STATUS_OEFROMPERI_Pos (12UL)                /*!< OEFROMPERI (Bit 12) */
#define IO_BANK0_GPIO29_STATUS_OEFROMPERI_Msk (0x1000UL)            /*!< OEFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO29_STATUS_OUTTOPAD_Pos (9UL)                   /*!< OUTTOPAD (Bit 9) */
#define IO_BANK0_GPIO29_STATUS_OUTTOPAD_Msk (0x200UL)               /*!< OUTTOPAD (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO29_STATUS_OUTFROMPERI_Pos (8UL)                /*!< OUTFROMPERI (Bit 8) */
#define IO_BANK0_GPIO29_STATUS_OUTFROMPERI_Msk (0x100UL)            /*!< OUTFROMPERI (Bitfield-Mask: 0x01) */
#define IO_BANK0_GPIO29_CTRL_IRQOVER_Pos  (28UL)                    /*!< IRQOVER (Bit 28) */
#define IO_BANK0_GPIO29_CTRL_IRQOVER_Msk  (0x30000000UL)            /*!< IRQOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO29_CTRL_INOVER_Pos   (16UL)                    /*!< INOVER (Bit 16) */
#define IO_BANK0_GPIO29_CTRL_INOVER_Msk   (0x30000UL)               /*!< INOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO29_CTRL_OEOVER_Pos   (12UL)                    /*!< OEOVER (Bit 12) */
#define IO_BANK0_GPIO29_CTRL_OEOVER_Msk   (0x3000UL)                /*!< OEOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO29_CTRL_OUTOVER_Pos  (8UL)                     /*!< OUTOVER (Bit 8) */
#define IO_BANK0_GPIO29_CTRL_OUTOVER_Msk  (0x300UL)                 /*!< OUTOVER (Bitfield-Mask: 0x03) */
#define IO_BANK0_GPIO29_CTRL_FUNCSEL_Pos  (0UL)                     /*!< FUNCSEL (Bit 0) */
#define IO_BANK0_GPIO29_CTRL_FUNCSEL_Msk  (0x1fUL)                  /*!< FUNCSEL (Bitfield-Mask: 0x1f) */
#define IO_BANK0_INTR0_GPIO7_EDGE_HIGH_Pos (31UL)                   /*!< GPIO7_EDGE_HIGH (Bit 31) */
#define IO_BANK0_INTR0_GPIO7_EDGE_HIGH_Msk (0x80000000UL)           /*!< GPIO7_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO7_EDGE_LOW_Pos (30UL)                    /*!< GPIO7_EDGE_LOW (Bit 30) */
#define IO_BANK0_INTR0_GPIO7_EDGE_LOW_Msk (0x40000000UL)            /*!< GPIO7_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO7_LEVEL_HIGH_Pos (29UL)                  /*!< GPIO7_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_INTR0_GPIO7_LEVEL_HIGH_Msk (0x20000000UL)          /*!< GPIO7_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO7_LEVEL_LOW_Pos (28UL)                   /*!< GPIO7_LEVEL_LOW (Bit 28) */
#define IO_BANK0_INTR0_GPIO7_LEVEL_LOW_Msk (0x10000000UL)           /*!< GPIO7_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO6_EDGE_HIGH_Pos (27UL)                   /*!< GPIO6_EDGE_HIGH (Bit 27) */
#define IO_BANK0_INTR0_GPIO6_EDGE_HIGH_Msk (0x8000000UL)            /*!< GPIO6_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO6_EDGE_LOW_Pos (26UL)                    /*!< GPIO6_EDGE_LOW (Bit 26) */
#define IO_BANK0_INTR0_GPIO6_EDGE_LOW_Msk (0x4000000UL)             /*!< GPIO6_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO6_LEVEL_HIGH_Pos (25UL)                  /*!< GPIO6_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_INTR0_GPIO6_LEVEL_HIGH_Msk (0x2000000UL)           /*!< GPIO6_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO6_LEVEL_LOW_Pos (24UL)                   /*!< GPIO6_LEVEL_LOW (Bit 24) */
#define IO_BANK0_INTR0_GPIO6_LEVEL_LOW_Msk (0x1000000UL)            /*!< GPIO6_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO5_EDGE_HIGH_Pos (23UL)                   /*!< GPIO5_EDGE_HIGH (Bit 23) */
#define IO_BANK0_INTR0_GPIO5_EDGE_HIGH_Msk (0x800000UL)             /*!< GPIO5_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO5_EDGE_LOW_Pos (22UL)                    /*!< GPIO5_EDGE_LOW (Bit 22) */
#define IO_BANK0_INTR0_GPIO5_EDGE_LOW_Msk (0x400000UL)              /*!< GPIO5_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO5_LEVEL_HIGH_Pos (21UL)                  /*!< GPIO5_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_INTR0_GPIO5_LEVEL_HIGH_Msk (0x200000UL)            /*!< GPIO5_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO5_LEVEL_LOW_Pos (20UL)                   /*!< GPIO5_LEVEL_LOW (Bit 20) */
#define IO_BANK0_INTR0_GPIO5_LEVEL_LOW_Msk (0x100000UL)             /*!< GPIO5_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO4_EDGE_HIGH_Pos (19UL)                   /*!< GPIO4_EDGE_HIGH (Bit 19) */
#define IO_BANK0_INTR0_GPIO4_EDGE_HIGH_Msk (0x80000UL)              /*!< GPIO4_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO4_EDGE_LOW_Pos (18UL)                    /*!< GPIO4_EDGE_LOW (Bit 18) */
#define IO_BANK0_INTR0_GPIO4_EDGE_LOW_Msk (0x40000UL)               /*!< GPIO4_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO4_LEVEL_HIGH_Pos (17UL)                  /*!< GPIO4_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_INTR0_GPIO4_LEVEL_HIGH_Msk (0x20000UL)             /*!< GPIO4_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO4_LEVEL_LOW_Pos (16UL)                   /*!< GPIO4_LEVEL_LOW (Bit 16) */
#define IO_BANK0_INTR0_GPIO4_LEVEL_LOW_Msk (0x10000UL)              /*!< GPIO4_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO3_EDGE_HIGH_Pos (15UL)                   /*!< GPIO3_EDGE_HIGH (Bit 15) */
#define IO_BANK0_INTR0_GPIO3_EDGE_HIGH_Msk (0x8000UL)               /*!< GPIO3_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO3_EDGE_LOW_Pos (14UL)                    /*!< GPIO3_EDGE_LOW (Bit 14) */
#define IO_BANK0_INTR0_GPIO3_EDGE_LOW_Msk (0x4000UL)                /*!< GPIO3_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO3_LEVEL_HIGH_Pos (13UL)                  /*!< GPIO3_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_INTR0_GPIO3_LEVEL_HIGH_Msk (0x2000UL)              /*!< GPIO3_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO3_LEVEL_LOW_Pos (12UL)                   /*!< GPIO3_LEVEL_LOW (Bit 12) */
#define IO_BANK0_INTR0_GPIO3_LEVEL_LOW_Msk (0x1000UL)               /*!< GPIO3_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO2_EDGE_HIGH_Pos (11UL)                   /*!< GPIO2_EDGE_HIGH (Bit 11) */
#define IO_BANK0_INTR0_GPIO2_EDGE_HIGH_Msk (0x800UL)                /*!< GPIO2_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO2_EDGE_LOW_Pos (10UL)                    /*!< GPIO2_EDGE_LOW (Bit 10) */
#define IO_BANK0_INTR0_GPIO2_EDGE_LOW_Msk (0x400UL)                 /*!< GPIO2_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO2_LEVEL_HIGH_Pos (9UL)                   /*!< GPIO2_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_INTR0_GPIO2_LEVEL_HIGH_Msk (0x200UL)               /*!< GPIO2_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO2_LEVEL_LOW_Pos (8UL)                    /*!< GPIO2_LEVEL_LOW (Bit 8) */
#define IO_BANK0_INTR0_GPIO2_LEVEL_LOW_Msk (0x100UL)                /*!< GPIO2_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO1_EDGE_HIGH_Pos (7UL)                    /*!< GPIO1_EDGE_HIGH (Bit 7) */
#define IO_BANK0_INTR0_GPIO1_EDGE_HIGH_Msk (0x80UL)                 /*!< GPIO1_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO1_EDGE_LOW_Pos (6UL)                     /*!< GPIO1_EDGE_LOW (Bit 6) */
#define IO_BANK0_INTR0_GPIO1_EDGE_LOW_Msk (0x40UL)                  /*!< GPIO1_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO1_LEVEL_HIGH_Pos (5UL)                   /*!< GPIO1_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_INTR0_GPIO1_LEVEL_HIGH_Msk (0x20UL)                /*!< GPIO1_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO1_LEVEL_LOW_Pos (4UL)                    /*!< GPIO1_LEVEL_LOW (Bit 4) */
#define IO_BANK0_INTR0_GPIO1_LEVEL_LOW_Msk (0x10UL)                 /*!< GPIO1_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO0_EDGE_HIGH_Pos (3UL)                    /*!< GPIO0_EDGE_HIGH (Bit 3) */
#define IO_BANK0_INTR0_GPIO0_EDGE_HIGH_Msk (0x8UL)                  /*!< GPIO0_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO0_EDGE_LOW_Pos (2UL)                     /*!< GPIO0_EDGE_LOW (Bit 2) */
#define IO_BANK0_INTR0_GPIO0_EDGE_LOW_Msk (0x4UL)                   /*!< GPIO0_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO0_LEVEL_HIGH_Pos (1UL)                   /*!< GPIO0_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_INTR0_GPIO0_LEVEL_HIGH_Msk (0x2UL)                 /*!< GPIO0_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR0_GPIO0_LEVEL_LOW_Pos (0UL)                    /*!< GPIO0_LEVEL_LOW (Bit 0) */
#define IO_BANK0_INTR0_GPIO0_LEVEL_LOW_Msk (0x1UL)                  /*!< GPIO0_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO15_EDGE_HIGH_Pos (31UL)                  /*!< GPIO15_EDGE_HIGH (Bit 31) */
#define IO_BANK0_INTR1_GPIO15_EDGE_HIGH_Msk (0x80000000UL)          /*!< GPIO15_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO15_EDGE_LOW_Pos (30UL)                   /*!< GPIO15_EDGE_LOW (Bit 30) */
#define IO_BANK0_INTR1_GPIO15_EDGE_LOW_Msk (0x40000000UL)           /*!< GPIO15_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO15_LEVEL_HIGH_Pos (29UL)                 /*!< GPIO15_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_INTR1_GPIO15_LEVEL_HIGH_Msk (0x20000000UL)         /*!< GPIO15_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO15_LEVEL_LOW_Pos (28UL)                  /*!< GPIO15_LEVEL_LOW (Bit 28) */
#define IO_BANK0_INTR1_GPIO15_LEVEL_LOW_Msk (0x10000000UL)          /*!< GPIO15_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO14_EDGE_HIGH_Pos (27UL)                  /*!< GPIO14_EDGE_HIGH (Bit 27) */
#define IO_BANK0_INTR1_GPIO14_EDGE_HIGH_Msk (0x8000000UL)           /*!< GPIO14_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO14_EDGE_LOW_Pos (26UL)                   /*!< GPIO14_EDGE_LOW (Bit 26) */
#define IO_BANK0_INTR1_GPIO14_EDGE_LOW_Msk (0x4000000UL)            /*!< GPIO14_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO14_LEVEL_HIGH_Pos (25UL)                 /*!< GPIO14_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_INTR1_GPIO14_LEVEL_HIGH_Msk (0x2000000UL)          /*!< GPIO14_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO14_LEVEL_LOW_Pos (24UL)                  /*!< GPIO14_LEVEL_LOW (Bit 24) */
#define IO_BANK0_INTR1_GPIO14_LEVEL_LOW_Msk (0x1000000UL)           /*!< GPIO14_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO13_EDGE_HIGH_Pos (23UL)                  /*!< GPIO13_EDGE_HIGH (Bit 23) */
#define IO_BANK0_INTR1_GPIO13_EDGE_HIGH_Msk (0x800000UL)            /*!< GPIO13_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO13_EDGE_LOW_Pos (22UL)                   /*!< GPIO13_EDGE_LOW (Bit 22) */
#define IO_BANK0_INTR1_GPIO13_EDGE_LOW_Msk (0x400000UL)             /*!< GPIO13_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO13_LEVEL_HIGH_Pos (21UL)                 /*!< GPIO13_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_INTR1_GPIO13_LEVEL_HIGH_Msk (0x200000UL)           /*!< GPIO13_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO13_LEVEL_LOW_Pos (20UL)                  /*!< GPIO13_LEVEL_LOW (Bit 20) */
#define IO_BANK0_INTR1_GPIO13_LEVEL_LOW_Msk (0x100000UL)            /*!< GPIO13_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO12_EDGE_HIGH_Pos (19UL)                  /*!< GPIO12_EDGE_HIGH (Bit 19) */
#define IO_BANK0_INTR1_GPIO12_EDGE_HIGH_Msk (0x80000UL)             /*!< GPIO12_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO12_EDGE_LOW_Pos (18UL)                   /*!< GPIO12_EDGE_LOW (Bit 18) */
#define IO_BANK0_INTR1_GPIO12_EDGE_LOW_Msk (0x40000UL)              /*!< GPIO12_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO12_LEVEL_HIGH_Pos (17UL)                 /*!< GPIO12_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_INTR1_GPIO12_LEVEL_HIGH_Msk (0x20000UL)            /*!< GPIO12_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO12_LEVEL_LOW_Pos (16UL)                  /*!< GPIO12_LEVEL_LOW (Bit 16) */
#define IO_BANK0_INTR1_GPIO12_LEVEL_LOW_Msk (0x10000UL)             /*!< GPIO12_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO11_EDGE_HIGH_Pos (15UL)                  /*!< GPIO11_EDGE_HIGH (Bit 15) */
#define IO_BANK0_INTR1_GPIO11_EDGE_HIGH_Msk (0x8000UL)              /*!< GPIO11_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO11_EDGE_LOW_Pos (14UL)                   /*!< GPIO11_EDGE_LOW (Bit 14) */
#define IO_BANK0_INTR1_GPIO11_EDGE_LOW_Msk (0x4000UL)               /*!< GPIO11_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO11_LEVEL_HIGH_Pos (13UL)                 /*!< GPIO11_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_INTR1_GPIO11_LEVEL_HIGH_Msk (0x2000UL)             /*!< GPIO11_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO11_LEVEL_LOW_Pos (12UL)                  /*!< GPIO11_LEVEL_LOW (Bit 12) */
#define IO_BANK0_INTR1_GPIO11_LEVEL_LOW_Msk (0x1000UL)              /*!< GPIO11_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO10_EDGE_HIGH_Pos (11UL)                  /*!< GPIO10_EDGE_HIGH (Bit 11) */
#define IO_BANK0_INTR1_GPIO10_EDGE_HIGH_Msk (0x800UL)               /*!< GPIO10_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO10_EDGE_LOW_Pos (10UL)                   /*!< GPIO10_EDGE_LOW (Bit 10) */
#define IO_BANK0_INTR1_GPIO10_EDGE_LOW_Msk (0x400UL)                /*!< GPIO10_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO10_LEVEL_HIGH_Pos (9UL)                  /*!< GPIO10_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_INTR1_GPIO10_LEVEL_HIGH_Msk (0x200UL)              /*!< GPIO10_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO10_LEVEL_LOW_Pos (8UL)                   /*!< GPIO10_LEVEL_LOW (Bit 8) */
#define IO_BANK0_INTR1_GPIO10_LEVEL_LOW_Msk (0x100UL)               /*!< GPIO10_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO9_EDGE_HIGH_Pos (7UL)                    /*!< GPIO9_EDGE_HIGH (Bit 7) */
#define IO_BANK0_INTR1_GPIO9_EDGE_HIGH_Msk (0x80UL)                 /*!< GPIO9_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO9_EDGE_LOW_Pos (6UL)                     /*!< GPIO9_EDGE_LOW (Bit 6) */
#define IO_BANK0_INTR1_GPIO9_EDGE_LOW_Msk (0x40UL)                  /*!< GPIO9_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO9_LEVEL_HIGH_Pos (5UL)                   /*!< GPIO9_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_INTR1_GPIO9_LEVEL_HIGH_Msk (0x20UL)                /*!< GPIO9_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO9_LEVEL_LOW_Pos (4UL)                    /*!< GPIO9_LEVEL_LOW (Bit 4) */
#define IO_BANK0_INTR1_GPIO9_LEVEL_LOW_Msk (0x10UL)                 /*!< GPIO9_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO8_EDGE_HIGH_Pos (3UL)                    /*!< GPIO8_EDGE_HIGH (Bit 3) */
#define IO_BANK0_INTR1_GPIO8_EDGE_HIGH_Msk (0x8UL)                  /*!< GPIO8_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO8_EDGE_LOW_Pos (2UL)                     /*!< GPIO8_EDGE_LOW (Bit 2) */
#define IO_BANK0_INTR1_GPIO8_EDGE_LOW_Msk (0x4UL)                   /*!< GPIO8_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO8_LEVEL_HIGH_Pos (1UL)                   /*!< GPIO8_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_INTR1_GPIO8_LEVEL_HIGH_Msk (0x2UL)                 /*!< GPIO8_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR1_GPIO8_LEVEL_LOW_Pos (0UL)                    /*!< GPIO8_LEVEL_LOW (Bit 0) */
#define IO_BANK0_INTR1_GPIO8_LEVEL_LOW_Msk (0x1UL)                  /*!< GPIO8_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO23_EDGE_HIGH_Pos (31UL)                  /*!< GPIO23_EDGE_HIGH (Bit 31) */
#define IO_BANK0_INTR2_GPIO23_EDGE_HIGH_Msk (0x80000000UL)          /*!< GPIO23_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO23_EDGE_LOW_Pos (30UL)                   /*!< GPIO23_EDGE_LOW (Bit 30) */
#define IO_BANK0_INTR2_GPIO23_EDGE_LOW_Msk (0x40000000UL)           /*!< GPIO23_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO23_LEVEL_HIGH_Pos (29UL)                 /*!< GPIO23_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_INTR2_GPIO23_LEVEL_HIGH_Msk (0x20000000UL)         /*!< GPIO23_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO23_LEVEL_LOW_Pos (28UL)                  /*!< GPIO23_LEVEL_LOW (Bit 28) */
#define IO_BANK0_INTR2_GPIO23_LEVEL_LOW_Msk (0x10000000UL)          /*!< GPIO23_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO22_EDGE_HIGH_Pos (27UL)                  /*!< GPIO22_EDGE_HIGH (Bit 27) */
#define IO_BANK0_INTR2_GPIO22_EDGE_HIGH_Msk (0x8000000UL)           /*!< GPIO22_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO22_EDGE_LOW_Pos (26UL)                   /*!< GPIO22_EDGE_LOW (Bit 26) */
#define IO_BANK0_INTR2_GPIO22_EDGE_LOW_Msk (0x4000000UL)            /*!< GPIO22_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO22_LEVEL_HIGH_Pos (25UL)                 /*!< GPIO22_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_INTR2_GPIO22_LEVEL_HIGH_Msk (0x2000000UL)          /*!< GPIO22_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO22_LEVEL_LOW_Pos (24UL)                  /*!< GPIO22_LEVEL_LOW (Bit 24) */
#define IO_BANK0_INTR2_GPIO22_LEVEL_LOW_Msk (0x1000000UL)           /*!< GPIO22_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO21_EDGE_HIGH_Pos (23UL)                  /*!< GPIO21_EDGE_HIGH (Bit 23) */
#define IO_BANK0_INTR2_GPIO21_EDGE_HIGH_Msk (0x800000UL)            /*!< GPIO21_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO21_EDGE_LOW_Pos (22UL)                   /*!< GPIO21_EDGE_LOW (Bit 22) */
#define IO_BANK0_INTR2_GPIO21_EDGE_LOW_Msk (0x400000UL)             /*!< GPIO21_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO21_LEVEL_HIGH_Pos (21UL)                 /*!< GPIO21_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_INTR2_GPIO21_LEVEL_HIGH_Msk (0x200000UL)           /*!< GPIO21_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO21_LEVEL_LOW_Pos (20UL)                  /*!< GPIO21_LEVEL_LOW (Bit 20) */
#define IO_BANK0_INTR2_GPIO21_LEVEL_LOW_Msk (0x100000UL)            /*!< GPIO21_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO20_EDGE_HIGH_Pos (19UL)                  /*!< GPIO20_EDGE_HIGH (Bit 19) */
#define IO_BANK0_INTR2_GPIO20_EDGE_HIGH_Msk (0x80000UL)             /*!< GPIO20_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO20_EDGE_LOW_Pos (18UL)                   /*!< GPIO20_EDGE_LOW (Bit 18) */
#define IO_BANK0_INTR2_GPIO20_EDGE_LOW_Msk (0x40000UL)              /*!< GPIO20_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO20_LEVEL_HIGH_Pos (17UL)                 /*!< GPIO20_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_INTR2_GPIO20_LEVEL_HIGH_Msk (0x20000UL)            /*!< GPIO20_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO20_LEVEL_LOW_Pos (16UL)                  /*!< GPIO20_LEVEL_LOW (Bit 16) */
#define IO_BANK0_INTR2_GPIO20_LEVEL_LOW_Msk (0x10000UL)             /*!< GPIO20_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO19_EDGE_HIGH_Pos (15UL)                  /*!< GPIO19_EDGE_HIGH (Bit 15) */
#define IO_BANK0_INTR2_GPIO19_EDGE_HIGH_Msk (0x8000UL)              /*!< GPIO19_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO19_EDGE_LOW_Pos (14UL)                   /*!< GPIO19_EDGE_LOW (Bit 14) */
#define IO_BANK0_INTR2_GPIO19_EDGE_LOW_Msk (0x4000UL)               /*!< GPIO19_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO19_LEVEL_HIGH_Pos (13UL)                 /*!< GPIO19_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_INTR2_GPIO19_LEVEL_HIGH_Msk (0x2000UL)             /*!< GPIO19_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO19_LEVEL_LOW_Pos (12UL)                  /*!< GPIO19_LEVEL_LOW (Bit 12) */
#define IO_BANK0_INTR2_GPIO19_LEVEL_LOW_Msk (0x1000UL)              /*!< GPIO19_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO18_EDGE_HIGH_Pos (11UL)                  /*!< GPIO18_EDGE_HIGH (Bit 11) */
#define IO_BANK0_INTR2_GPIO18_EDGE_HIGH_Msk (0x800UL)               /*!< GPIO18_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO18_EDGE_LOW_Pos (10UL)                   /*!< GPIO18_EDGE_LOW (Bit 10) */
#define IO_BANK0_INTR2_GPIO18_EDGE_LOW_Msk (0x400UL)                /*!< GPIO18_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO18_LEVEL_HIGH_Pos (9UL)                  /*!< GPIO18_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_INTR2_GPIO18_LEVEL_HIGH_Msk (0x200UL)              /*!< GPIO18_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO18_LEVEL_LOW_Pos (8UL)                   /*!< GPIO18_LEVEL_LOW (Bit 8) */
#define IO_BANK0_INTR2_GPIO18_LEVEL_LOW_Msk (0x100UL)               /*!< GPIO18_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO17_EDGE_HIGH_Pos (7UL)                   /*!< GPIO17_EDGE_HIGH (Bit 7) */
#define IO_BANK0_INTR2_GPIO17_EDGE_HIGH_Msk (0x80UL)                /*!< GPIO17_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO17_EDGE_LOW_Pos (6UL)                    /*!< GPIO17_EDGE_LOW (Bit 6) */
#define IO_BANK0_INTR2_GPIO17_EDGE_LOW_Msk (0x40UL)                 /*!< GPIO17_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO17_LEVEL_HIGH_Pos (5UL)                  /*!< GPIO17_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_INTR2_GPIO17_LEVEL_HIGH_Msk (0x20UL)               /*!< GPIO17_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO17_LEVEL_LOW_Pos (4UL)                   /*!< GPIO17_LEVEL_LOW (Bit 4) */
#define IO_BANK0_INTR2_GPIO17_LEVEL_LOW_Msk (0x10UL)                /*!< GPIO17_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO16_EDGE_HIGH_Pos (3UL)                   /*!< GPIO16_EDGE_HIGH (Bit 3) */
#define IO_BANK0_INTR2_GPIO16_EDGE_HIGH_Msk (0x8UL)                 /*!< GPIO16_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO16_EDGE_LOW_Pos (2UL)                    /*!< GPIO16_EDGE_LOW (Bit 2) */
#define IO_BANK0_INTR2_GPIO16_EDGE_LOW_Msk (0x4UL)                  /*!< GPIO16_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO16_LEVEL_HIGH_Pos (1UL)                  /*!< GPIO16_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_INTR2_GPIO16_LEVEL_HIGH_Msk (0x2UL)                /*!< GPIO16_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR2_GPIO16_LEVEL_LOW_Pos (0UL)                   /*!< GPIO16_LEVEL_LOW (Bit 0) */
#define IO_BANK0_INTR2_GPIO16_LEVEL_LOW_Msk (0x1UL)                 /*!< GPIO16_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO29_EDGE_HIGH_Pos (23UL)                  /*!< GPIO29_EDGE_HIGH (Bit 23) */
#define IO_BANK0_INTR3_GPIO29_EDGE_HIGH_Msk (0x800000UL)            /*!< GPIO29_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO29_EDGE_LOW_Pos (22UL)                   /*!< GPIO29_EDGE_LOW (Bit 22) */
#define IO_BANK0_INTR3_GPIO29_EDGE_LOW_Msk (0x400000UL)             /*!< GPIO29_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO29_LEVEL_HIGH_Pos (21UL)                 /*!< GPIO29_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_INTR3_GPIO29_LEVEL_HIGH_Msk (0x200000UL)           /*!< GPIO29_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO29_LEVEL_LOW_Pos (20UL)                  /*!< GPIO29_LEVEL_LOW (Bit 20) */
#define IO_BANK0_INTR3_GPIO29_LEVEL_LOW_Msk (0x100000UL)            /*!< GPIO29_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO28_EDGE_HIGH_Pos (19UL)                  /*!< GPIO28_EDGE_HIGH (Bit 19) */
#define IO_BANK0_INTR3_GPIO28_EDGE_HIGH_Msk (0x80000UL)             /*!< GPIO28_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO28_EDGE_LOW_Pos (18UL)                   /*!< GPIO28_EDGE_LOW (Bit 18) */
#define IO_BANK0_INTR3_GPIO28_EDGE_LOW_Msk (0x40000UL)              /*!< GPIO28_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO28_LEVEL_HIGH_Pos (17UL)                 /*!< GPIO28_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_INTR3_GPIO28_LEVEL_HIGH_Msk (0x20000UL)            /*!< GPIO28_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO28_LEVEL_LOW_Pos (16UL)                  /*!< GPIO28_LEVEL_LOW (Bit 16) */
#define IO_BANK0_INTR3_GPIO28_LEVEL_LOW_Msk (0x10000UL)             /*!< GPIO28_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO27_EDGE_HIGH_Pos (15UL)                  /*!< GPIO27_EDGE_HIGH (Bit 15) */
#define IO_BANK0_INTR3_GPIO27_EDGE_HIGH_Msk (0x8000UL)              /*!< GPIO27_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO27_EDGE_LOW_Pos (14UL)                   /*!< GPIO27_EDGE_LOW (Bit 14) */
#define IO_BANK0_INTR3_GPIO27_EDGE_LOW_Msk (0x4000UL)               /*!< GPIO27_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO27_LEVEL_HIGH_Pos (13UL)                 /*!< GPIO27_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_INTR3_GPIO27_LEVEL_HIGH_Msk (0x2000UL)             /*!< GPIO27_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO27_LEVEL_LOW_Pos (12UL)                  /*!< GPIO27_LEVEL_LOW (Bit 12) */
#define IO_BANK0_INTR3_GPIO27_LEVEL_LOW_Msk (0x1000UL)              /*!< GPIO27_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO26_EDGE_HIGH_Pos (11UL)                  /*!< GPIO26_EDGE_HIGH (Bit 11) */
#define IO_BANK0_INTR3_GPIO26_EDGE_HIGH_Msk (0x800UL)               /*!< GPIO26_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO26_EDGE_LOW_Pos (10UL)                   /*!< GPIO26_EDGE_LOW (Bit 10) */
#define IO_BANK0_INTR3_GPIO26_EDGE_LOW_Msk (0x400UL)                /*!< GPIO26_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO26_LEVEL_HIGH_Pos (9UL)                  /*!< GPIO26_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_INTR3_GPIO26_LEVEL_HIGH_Msk (0x200UL)              /*!< GPIO26_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO26_LEVEL_LOW_Pos (8UL)                   /*!< GPIO26_LEVEL_LOW (Bit 8) */
#define IO_BANK0_INTR3_GPIO26_LEVEL_LOW_Msk (0x100UL)               /*!< GPIO26_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO25_EDGE_HIGH_Pos (7UL)                   /*!< GPIO25_EDGE_HIGH (Bit 7) */
#define IO_BANK0_INTR3_GPIO25_EDGE_HIGH_Msk (0x80UL)                /*!< GPIO25_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO25_EDGE_LOW_Pos (6UL)                    /*!< GPIO25_EDGE_LOW (Bit 6) */
#define IO_BANK0_INTR3_GPIO25_EDGE_LOW_Msk (0x40UL)                 /*!< GPIO25_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO25_LEVEL_HIGH_Pos (5UL)                  /*!< GPIO25_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_INTR3_GPIO25_LEVEL_HIGH_Msk (0x20UL)               /*!< GPIO25_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO25_LEVEL_LOW_Pos (4UL)                   /*!< GPIO25_LEVEL_LOW (Bit 4) */
#define IO_BANK0_INTR3_GPIO25_LEVEL_LOW_Msk (0x10UL)                /*!< GPIO25_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO24_EDGE_HIGH_Pos (3UL)                   /*!< GPIO24_EDGE_HIGH (Bit 3) */
#define IO_BANK0_INTR3_GPIO24_EDGE_HIGH_Msk (0x8UL)                 /*!< GPIO24_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO24_EDGE_LOW_Pos (2UL)                    /*!< GPIO24_EDGE_LOW (Bit 2) */
#define IO_BANK0_INTR3_GPIO24_EDGE_LOW_Msk (0x4UL)                  /*!< GPIO24_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO24_LEVEL_HIGH_Pos (1UL)                  /*!< GPIO24_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_INTR3_GPIO24_LEVEL_HIGH_Msk (0x2UL)                /*!< GPIO24_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_INTR3_GPIO24_LEVEL_LOW_Pos (0UL)                   /*!< GPIO24_LEVEL_LOW (Bit 0) */
#define IO_BANK0_INTR3_GPIO24_LEVEL_LOW_Msk (0x1UL)                 /*!< GPIO24_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO7_EDGE_HIGH_Pos (31UL)             /*!< GPIO7_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC0_INTE0_GPIO7_EDGE_HIGH_Msk (0x80000000UL)     /*!< GPIO7_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO7_EDGE_LOW_Pos (30UL)              /*!< GPIO7_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC0_INTE0_GPIO7_EDGE_LOW_Msk (0x40000000UL)      /*!< GPIO7_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO7_LEVEL_HIGH_Pos (29UL)            /*!< GPIO7_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC0_INTE0_GPIO7_LEVEL_HIGH_Msk (0x20000000UL)    /*!< GPIO7_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO7_LEVEL_LOW_Pos (28UL)             /*!< GPIO7_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC0_INTE0_GPIO7_LEVEL_LOW_Msk (0x10000000UL)     /*!< GPIO7_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO6_EDGE_HIGH_Pos (27UL)             /*!< GPIO6_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC0_INTE0_GPIO6_EDGE_HIGH_Msk (0x8000000UL)      /*!< GPIO6_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO6_EDGE_LOW_Pos (26UL)              /*!< GPIO6_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC0_INTE0_GPIO6_EDGE_LOW_Msk (0x4000000UL)       /*!< GPIO6_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO6_LEVEL_HIGH_Pos (25UL)            /*!< GPIO6_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC0_INTE0_GPIO6_LEVEL_HIGH_Msk (0x2000000UL)     /*!< GPIO6_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO6_LEVEL_LOW_Pos (24UL)             /*!< GPIO6_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC0_INTE0_GPIO6_LEVEL_LOW_Msk (0x1000000UL)      /*!< GPIO6_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO5_EDGE_HIGH_Pos (23UL)             /*!< GPIO5_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC0_INTE0_GPIO5_EDGE_HIGH_Msk (0x800000UL)       /*!< GPIO5_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO5_EDGE_LOW_Pos (22UL)              /*!< GPIO5_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC0_INTE0_GPIO5_EDGE_LOW_Msk (0x400000UL)        /*!< GPIO5_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO5_LEVEL_HIGH_Pos (21UL)            /*!< GPIO5_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC0_INTE0_GPIO5_LEVEL_HIGH_Msk (0x200000UL)      /*!< GPIO5_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO5_LEVEL_LOW_Pos (20UL)             /*!< GPIO5_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC0_INTE0_GPIO5_LEVEL_LOW_Msk (0x100000UL)       /*!< GPIO5_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO4_EDGE_HIGH_Pos (19UL)             /*!< GPIO4_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC0_INTE0_GPIO4_EDGE_HIGH_Msk (0x80000UL)        /*!< GPIO4_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO4_EDGE_LOW_Pos (18UL)              /*!< GPIO4_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC0_INTE0_GPIO4_EDGE_LOW_Msk (0x40000UL)         /*!< GPIO4_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO4_LEVEL_HIGH_Pos (17UL)            /*!< GPIO4_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC0_INTE0_GPIO4_LEVEL_HIGH_Msk (0x20000UL)       /*!< GPIO4_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO4_LEVEL_LOW_Pos (16UL)             /*!< GPIO4_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC0_INTE0_GPIO4_LEVEL_LOW_Msk (0x10000UL)        /*!< GPIO4_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO3_EDGE_HIGH_Pos (15UL)             /*!< GPIO3_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC0_INTE0_GPIO3_EDGE_HIGH_Msk (0x8000UL)         /*!< GPIO3_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO3_EDGE_LOW_Pos (14UL)              /*!< GPIO3_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC0_INTE0_GPIO3_EDGE_LOW_Msk (0x4000UL)          /*!< GPIO3_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO3_LEVEL_HIGH_Pos (13UL)            /*!< GPIO3_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC0_INTE0_GPIO3_LEVEL_HIGH_Msk (0x2000UL)        /*!< GPIO3_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO3_LEVEL_LOW_Pos (12UL)             /*!< GPIO3_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC0_INTE0_GPIO3_LEVEL_LOW_Msk (0x1000UL)         /*!< GPIO3_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO2_EDGE_HIGH_Pos (11UL)             /*!< GPIO2_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC0_INTE0_GPIO2_EDGE_HIGH_Msk (0x800UL)          /*!< GPIO2_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO2_EDGE_LOW_Pos (10UL)              /*!< GPIO2_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC0_INTE0_GPIO2_EDGE_LOW_Msk (0x400UL)           /*!< GPIO2_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO2_LEVEL_HIGH_Pos (9UL)             /*!< GPIO2_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC0_INTE0_GPIO2_LEVEL_HIGH_Msk (0x200UL)         /*!< GPIO2_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO2_LEVEL_LOW_Pos (8UL)              /*!< GPIO2_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC0_INTE0_GPIO2_LEVEL_LOW_Msk (0x100UL)          /*!< GPIO2_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO1_EDGE_HIGH_Pos (7UL)              /*!< GPIO1_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC0_INTE0_GPIO1_EDGE_HIGH_Msk (0x80UL)           /*!< GPIO1_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO1_EDGE_LOW_Pos (6UL)               /*!< GPIO1_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC0_INTE0_GPIO1_EDGE_LOW_Msk (0x40UL)            /*!< GPIO1_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO1_LEVEL_HIGH_Pos (5UL)             /*!< GPIO1_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC0_INTE0_GPIO1_LEVEL_HIGH_Msk (0x20UL)          /*!< GPIO1_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO1_LEVEL_LOW_Pos (4UL)              /*!< GPIO1_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC0_INTE0_GPIO1_LEVEL_LOW_Msk (0x10UL)           /*!< GPIO1_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO0_EDGE_HIGH_Pos (3UL)              /*!< GPIO0_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC0_INTE0_GPIO0_EDGE_HIGH_Msk (0x8UL)            /*!< GPIO0_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO0_EDGE_LOW_Pos (2UL)               /*!< GPIO0_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC0_INTE0_GPIO0_EDGE_LOW_Msk (0x4UL)             /*!< GPIO0_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO0_LEVEL_HIGH_Pos (1UL)             /*!< GPIO0_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC0_INTE0_GPIO0_LEVEL_HIGH_Msk (0x2UL)           /*!< GPIO0_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE0_GPIO0_LEVEL_LOW_Pos (0UL)              /*!< GPIO0_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC0_INTE0_GPIO0_LEVEL_LOW_Msk (0x1UL)            /*!< GPIO0_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO15_EDGE_HIGH_Pos (31UL)            /*!< GPIO15_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC0_INTE1_GPIO15_EDGE_HIGH_Msk (0x80000000UL)    /*!< GPIO15_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO15_EDGE_LOW_Pos (30UL)             /*!< GPIO15_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC0_INTE1_GPIO15_EDGE_LOW_Msk (0x40000000UL)     /*!< GPIO15_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO15_LEVEL_HIGH_Pos (29UL)           /*!< GPIO15_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC0_INTE1_GPIO15_LEVEL_HIGH_Msk (0x20000000UL)   /*!< GPIO15_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO15_LEVEL_LOW_Pos (28UL)            /*!< GPIO15_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC0_INTE1_GPIO15_LEVEL_LOW_Msk (0x10000000UL)    /*!< GPIO15_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO14_EDGE_HIGH_Pos (27UL)            /*!< GPIO14_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC0_INTE1_GPIO14_EDGE_HIGH_Msk (0x8000000UL)     /*!< GPIO14_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO14_EDGE_LOW_Pos (26UL)             /*!< GPIO14_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC0_INTE1_GPIO14_EDGE_LOW_Msk (0x4000000UL)      /*!< GPIO14_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO14_LEVEL_HIGH_Pos (25UL)           /*!< GPIO14_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC0_INTE1_GPIO14_LEVEL_HIGH_Msk (0x2000000UL)    /*!< GPIO14_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO14_LEVEL_LOW_Pos (24UL)            /*!< GPIO14_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC0_INTE1_GPIO14_LEVEL_LOW_Msk (0x1000000UL)     /*!< GPIO14_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO13_EDGE_HIGH_Pos (23UL)            /*!< GPIO13_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC0_INTE1_GPIO13_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO13_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO13_EDGE_LOW_Pos (22UL)             /*!< GPIO13_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC0_INTE1_GPIO13_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO13_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO13_LEVEL_HIGH_Pos (21UL)           /*!< GPIO13_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC0_INTE1_GPIO13_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO13_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO13_LEVEL_LOW_Pos (20UL)            /*!< GPIO13_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC0_INTE1_GPIO13_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO13_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO12_EDGE_HIGH_Pos (19UL)            /*!< GPIO12_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC0_INTE1_GPIO12_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO12_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO12_EDGE_LOW_Pos (18UL)             /*!< GPIO12_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC0_INTE1_GPIO12_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO12_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO12_LEVEL_HIGH_Pos (17UL)           /*!< GPIO12_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC0_INTE1_GPIO12_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO12_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO12_LEVEL_LOW_Pos (16UL)            /*!< GPIO12_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC0_INTE1_GPIO12_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO12_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO11_EDGE_HIGH_Pos (15UL)            /*!< GPIO11_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC0_INTE1_GPIO11_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO11_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO11_EDGE_LOW_Pos (14UL)             /*!< GPIO11_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC0_INTE1_GPIO11_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO11_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO11_LEVEL_HIGH_Pos (13UL)           /*!< GPIO11_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC0_INTE1_GPIO11_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO11_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO11_LEVEL_LOW_Pos (12UL)            /*!< GPIO11_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC0_INTE1_GPIO11_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO11_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO10_EDGE_HIGH_Pos (11UL)            /*!< GPIO10_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC0_INTE1_GPIO10_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO10_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO10_EDGE_LOW_Pos (10UL)             /*!< GPIO10_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC0_INTE1_GPIO10_EDGE_LOW_Msk (0x400UL)          /*!< GPIO10_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO10_LEVEL_HIGH_Pos (9UL)            /*!< GPIO10_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC0_INTE1_GPIO10_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO10_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO10_LEVEL_LOW_Pos (8UL)             /*!< GPIO10_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC0_INTE1_GPIO10_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO10_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO9_EDGE_HIGH_Pos (7UL)              /*!< GPIO9_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC0_INTE1_GPIO9_EDGE_HIGH_Msk (0x80UL)           /*!< GPIO9_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO9_EDGE_LOW_Pos (6UL)               /*!< GPIO9_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC0_INTE1_GPIO9_EDGE_LOW_Msk (0x40UL)            /*!< GPIO9_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO9_LEVEL_HIGH_Pos (5UL)             /*!< GPIO9_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC0_INTE1_GPIO9_LEVEL_HIGH_Msk (0x20UL)          /*!< GPIO9_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO9_LEVEL_LOW_Pos (4UL)              /*!< GPIO9_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC0_INTE1_GPIO9_LEVEL_LOW_Msk (0x10UL)           /*!< GPIO9_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO8_EDGE_HIGH_Pos (3UL)              /*!< GPIO8_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC0_INTE1_GPIO8_EDGE_HIGH_Msk (0x8UL)            /*!< GPIO8_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO8_EDGE_LOW_Pos (2UL)               /*!< GPIO8_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC0_INTE1_GPIO8_EDGE_LOW_Msk (0x4UL)             /*!< GPIO8_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO8_LEVEL_HIGH_Pos (1UL)             /*!< GPIO8_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC0_INTE1_GPIO8_LEVEL_HIGH_Msk (0x2UL)           /*!< GPIO8_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE1_GPIO8_LEVEL_LOW_Pos (0UL)              /*!< GPIO8_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC0_INTE1_GPIO8_LEVEL_LOW_Msk (0x1UL)            /*!< GPIO8_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO23_EDGE_HIGH_Pos (31UL)            /*!< GPIO23_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC0_INTE2_GPIO23_EDGE_HIGH_Msk (0x80000000UL)    /*!< GPIO23_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO23_EDGE_LOW_Pos (30UL)             /*!< GPIO23_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC0_INTE2_GPIO23_EDGE_LOW_Msk (0x40000000UL)     /*!< GPIO23_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO23_LEVEL_HIGH_Pos (29UL)           /*!< GPIO23_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC0_INTE2_GPIO23_LEVEL_HIGH_Msk (0x20000000UL)   /*!< GPIO23_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO23_LEVEL_LOW_Pos (28UL)            /*!< GPIO23_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC0_INTE2_GPIO23_LEVEL_LOW_Msk (0x10000000UL)    /*!< GPIO23_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO22_EDGE_HIGH_Pos (27UL)            /*!< GPIO22_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC0_INTE2_GPIO22_EDGE_HIGH_Msk (0x8000000UL)     /*!< GPIO22_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO22_EDGE_LOW_Pos (26UL)             /*!< GPIO22_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC0_INTE2_GPIO22_EDGE_LOW_Msk (0x4000000UL)      /*!< GPIO22_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO22_LEVEL_HIGH_Pos (25UL)           /*!< GPIO22_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC0_INTE2_GPIO22_LEVEL_HIGH_Msk (0x2000000UL)    /*!< GPIO22_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO22_LEVEL_LOW_Pos (24UL)            /*!< GPIO22_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC0_INTE2_GPIO22_LEVEL_LOW_Msk (0x1000000UL)     /*!< GPIO22_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO21_EDGE_HIGH_Pos (23UL)            /*!< GPIO21_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC0_INTE2_GPIO21_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO21_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO21_EDGE_LOW_Pos (22UL)             /*!< GPIO21_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC0_INTE2_GPIO21_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO21_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO21_LEVEL_HIGH_Pos (21UL)           /*!< GPIO21_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC0_INTE2_GPIO21_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO21_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO21_LEVEL_LOW_Pos (20UL)            /*!< GPIO21_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC0_INTE2_GPIO21_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO21_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO20_EDGE_HIGH_Pos (19UL)            /*!< GPIO20_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC0_INTE2_GPIO20_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO20_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO20_EDGE_LOW_Pos (18UL)             /*!< GPIO20_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC0_INTE2_GPIO20_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO20_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO20_LEVEL_HIGH_Pos (17UL)           /*!< GPIO20_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC0_INTE2_GPIO20_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO20_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO20_LEVEL_LOW_Pos (16UL)            /*!< GPIO20_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC0_INTE2_GPIO20_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO20_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO19_EDGE_HIGH_Pos (15UL)            /*!< GPIO19_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC0_INTE2_GPIO19_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO19_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO19_EDGE_LOW_Pos (14UL)             /*!< GPIO19_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC0_INTE2_GPIO19_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO19_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO19_LEVEL_HIGH_Pos (13UL)           /*!< GPIO19_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC0_INTE2_GPIO19_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO19_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO19_LEVEL_LOW_Pos (12UL)            /*!< GPIO19_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC0_INTE2_GPIO19_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO19_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO18_EDGE_HIGH_Pos (11UL)            /*!< GPIO18_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC0_INTE2_GPIO18_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO18_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO18_EDGE_LOW_Pos (10UL)             /*!< GPIO18_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC0_INTE2_GPIO18_EDGE_LOW_Msk (0x400UL)          /*!< GPIO18_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO18_LEVEL_HIGH_Pos (9UL)            /*!< GPIO18_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC0_INTE2_GPIO18_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO18_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO18_LEVEL_LOW_Pos (8UL)             /*!< GPIO18_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC0_INTE2_GPIO18_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO18_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO17_EDGE_HIGH_Pos (7UL)             /*!< GPIO17_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC0_INTE2_GPIO17_EDGE_HIGH_Msk (0x80UL)          /*!< GPIO17_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO17_EDGE_LOW_Pos (6UL)              /*!< GPIO17_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC0_INTE2_GPIO17_EDGE_LOW_Msk (0x40UL)           /*!< GPIO17_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO17_LEVEL_HIGH_Pos (5UL)            /*!< GPIO17_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC0_INTE2_GPIO17_LEVEL_HIGH_Msk (0x20UL)         /*!< GPIO17_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO17_LEVEL_LOW_Pos (4UL)             /*!< GPIO17_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC0_INTE2_GPIO17_LEVEL_LOW_Msk (0x10UL)          /*!< GPIO17_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO16_EDGE_HIGH_Pos (3UL)             /*!< GPIO16_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC0_INTE2_GPIO16_EDGE_HIGH_Msk (0x8UL)           /*!< GPIO16_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO16_EDGE_LOW_Pos (2UL)              /*!< GPIO16_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC0_INTE2_GPIO16_EDGE_LOW_Msk (0x4UL)            /*!< GPIO16_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO16_LEVEL_HIGH_Pos (1UL)            /*!< GPIO16_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC0_INTE2_GPIO16_LEVEL_HIGH_Msk (0x2UL)          /*!< GPIO16_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE2_GPIO16_LEVEL_LOW_Pos (0UL)             /*!< GPIO16_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC0_INTE2_GPIO16_LEVEL_LOW_Msk (0x1UL)           /*!< GPIO16_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO29_EDGE_HIGH_Pos (23UL)            /*!< GPIO29_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC0_INTE3_GPIO29_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO29_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO29_EDGE_LOW_Pos (22UL)             /*!< GPIO29_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC0_INTE3_GPIO29_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO29_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO29_LEVEL_HIGH_Pos (21UL)           /*!< GPIO29_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC0_INTE3_GPIO29_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO29_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO29_LEVEL_LOW_Pos (20UL)            /*!< GPIO29_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC0_INTE3_GPIO29_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO29_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO28_EDGE_HIGH_Pos (19UL)            /*!< GPIO28_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC0_INTE3_GPIO28_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO28_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO28_EDGE_LOW_Pos (18UL)             /*!< GPIO28_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC0_INTE3_GPIO28_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO28_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO28_LEVEL_HIGH_Pos (17UL)           /*!< GPIO28_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC0_INTE3_GPIO28_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO28_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO28_LEVEL_LOW_Pos (16UL)            /*!< GPIO28_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC0_INTE3_GPIO28_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO28_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO27_EDGE_HIGH_Pos (15UL)            /*!< GPIO27_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC0_INTE3_GPIO27_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO27_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO27_EDGE_LOW_Pos (14UL)             /*!< GPIO27_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC0_INTE3_GPIO27_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO27_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO27_LEVEL_HIGH_Pos (13UL)           /*!< GPIO27_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC0_INTE3_GPIO27_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO27_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO27_LEVEL_LOW_Pos (12UL)            /*!< GPIO27_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC0_INTE3_GPIO27_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO27_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO26_EDGE_HIGH_Pos (11UL)            /*!< GPIO26_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC0_INTE3_GPIO26_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO26_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO26_EDGE_LOW_Pos (10UL)             /*!< GPIO26_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC0_INTE3_GPIO26_EDGE_LOW_Msk (0x400UL)          /*!< GPIO26_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO26_LEVEL_HIGH_Pos (9UL)            /*!< GPIO26_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC0_INTE3_GPIO26_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO26_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO26_LEVEL_LOW_Pos (8UL)             /*!< GPIO26_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC0_INTE3_GPIO26_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO26_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO25_EDGE_HIGH_Pos (7UL)             /*!< GPIO25_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC0_INTE3_GPIO25_EDGE_HIGH_Msk (0x80UL)          /*!< GPIO25_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO25_EDGE_LOW_Pos (6UL)              /*!< GPIO25_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC0_INTE3_GPIO25_EDGE_LOW_Msk (0x40UL)           /*!< GPIO25_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO25_LEVEL_HIGH_Pos (5UL)            /*!< GPIO25_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC0_INTE3_GPIO25_LEVEL_HIGH_Msk (0x20UL)         /*!< GPIO25_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO25_LEVEL_LOW_Pos (4UL)             /*!< GPIO25_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC0_INTE3_GPIO25_LEVEL_LOW_Msk (0x10UL)          /*!< GPIO25_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO24_EDGE_HIGH_Pos (3UL)             /*!< GPIO24_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC0_INTE3_GPIO24_EDGE_HIGH_Msk (0x8UL)           /*!< GPIO24_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO24_EDGE_LOW_Pos (2UL)              /*!< GPIO24_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC0_INTE3_GPIO24_EDGE_LOW_Msk (0x4UL)            /*!< GPIO24_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO24_LEVEL_HIGH_Pos (1UL)            /*!< GPIO24_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC0_INTE3_GPIO24_LEVEL_HIGH_Msk (0x2UL)          /*!< GPIO24_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTE3_GPIO24_LEVEL_LOW_Pos (0UL)             /*!< GPIO24_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC0_INTE3_GPIO24_LEVEL_LOW_Msk (0x1UL)           /*!< GPIO24_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO7_EDGE_HIGH_Pos (31UL)             /*!< GPIO7_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC0_INTF0_GPIO7_EDGE_HIGH_Msk (0x80000000UL)     /*!< GPIO7_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO7_EDGE_LOW_Pos (30UL)              /*!< GPIO7_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC0_INTF0_GPIO7_EDGE_LOW_Msk (0x40000000UL)      /*!< GPIO7_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO7_LEVEL_HIGH_Pos (29UL)            /*!< GPIO7_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC0_INTF0_GPIO7_LEVEL_HIGH_Msk (0x20000000UL)    /*!< GPIO7_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO7_LEVEL_LOW_Pos (28UL)             /*!< GPIO7_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC0_INTF0_GPIO7_LEVEL_LOW_Msk (0x10000000UL)     /*!< GPIO7_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO6_EDGE_HIGH_Pos (27UL)             /*!< GPIO6_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC0_INTF0_GPIO6_EDGE_HIGH_Msk (0x8000000UL)      /*!< GPIO6_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO6_EDGE_LOW_Pos (26UL)              /*!< GPIO6_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC0_INTF0_GPIO6_EDGE_LOW_Msk (0x4000000UL)       /*!< GPIO6_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO6_LEVEL_HIGH_Pos (25UL)            /*!< GPIO6_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC0_INTF0_GPIO6_LEVEL_HIGH_Msk (0x2000000UL)     /*!< GPIO6_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO6_LEVEL_LOW_Pos (24UL)             /*!< GPIO6_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC0_INTF0_GPIO6_LEVEL_LOW_Msk (0x1000000UL)      /*!< GPIO6_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO5_EDGE_HIGH_Pos (23UL)             /*!< GPIO5_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC0_INTF0_GPIO5_EDGE_HIGH_Msk (0x800000UL)       /*!< GPIO5_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO5_EDGE_LOW_Pos (22UL)              /*!< GPIO5_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC0_INTF0_GPIO5_EDGE_LOW_Msk (0x400000UL)        /*!< GPIO5_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO5_LEVEL_HIGH_Pos (21UL)            /*!< GPIO5_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC0_INTF0_GPIO5_LEVEL_HIGH_Msk (0x200000UL)      /*!< GPIO5_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO5_LEVEL_LOW_Pos (20UL)             /*!< GPIO5_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC0_INTF0_GPIO5_LEVEL_LOW_Msk (0x100000UL)       /*!< GPIO5_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO4_EDGE_HIGH_Pos (19UL)             /*!< GPIO4_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC0_INTF0_GPIO4_EDGE_HIGH_Msk (0x80000UL)        /*!< GPIO4_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO4_EDGE_LOW_Pos (18UL)              /*!< GPIO4_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC0_INTF0_GPIO4_EDGE_LOW_Msk (0x40000UL)         /*!< GPIO4_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO4_LEVEL_HIGH_Pos (17UL)            /*!< GPIO4_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC0_INTF0_GPIO4_LEVEL_HIGH_Msk (0x20000UL)       /*!< GPIO4_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO4_LEVEL_LOW_Pos (16UL)             /*!< GPIO4_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC0_INTF0_GPIO4_LEVEL_LOW_Msk (0x10000UL)        /*!< GPIO4_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO3_EDGE_HIGH_Pos (15UL)             /*!< GPIO3_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC0_INTF0_GPIO3_EDGE_HIGH_Msk (0x8000UL)         /*!< GPIO3_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO3_EDGE_LOW_Pos (14UL)              /*!< GPIO3_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC0_INTF0_GPIO3_EDGE_LOW_Msk (0x4000UL)          /*!< GPIO3_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO3_LEVEL_HIGH_Pos (13UL)            /*!< GPIO3_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC0_INTF0_GPIO3_LEVEL_HIGH_Msk (0x2000UL)        /*!< GPIO3_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO3_LEVEL_LOW_Pos (12UL)             /*!< GPIO3_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC0_INTF0_GPIO3_LEVEL_LOW_Msk (0x1000UL)         /*!< GPIO3_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO2_EDGE_HIGH_Pos (11UL)             /*!< GPIO2_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC0_INTF0_GPIO2_EDGE_HIGH_Msk (0x800UL)          /*!< GPIO2_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO2_EDGE_LOW_Pos (10UL)              /*!< GPIO2_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC0_INTF0_GPIO2_EDGE_LOW_Msk (0x400UL)           /*!< GPIO2_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO2_LEVEL_HIGH_Pos (9UL)             /*!< GPIO2_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC0_INTF0_GPIO2_LEVEL_HIGH_Msk (0x200UL)         /*!< GPIO2_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO2_LEVEL_LOW_Pos (8UL)              /*!< GPIO2_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC0_INTF0_GPIO2_LEVEL_LOW_Msk (0x100UL)          /*!< GPIO2_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO1_EDGE_HIGH_Pos (7UL)              /*!< GPIO1_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC0_INTF0_GPIO1_EDGE_HIGH_Msk (0x80UL)           /*!< GPIO1_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO1_EDGE_LOW_Pos (6UL)               /*!< GPIO1_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC0_INTF0_GPIO1_EDGE_LOW_Msk (0x40UL)            /*!< GPIO1_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO1_LEVEL_HIGH_Pos (5UL)             /*!< GPIO1_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC0_INTF0_GPIO1_LEVEL_HIGH_Msk (0x20UL)          /*!< GPIO1_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO1_LEVEL_LOW_Pos (4UL)              /*!< GPIO1_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC0_INTF0_GPIO1_LEVEL_LOW_Msk (0x10UL)           /*!< GPIO1_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO0_EDGE_HIGH_Pos (3UL)              /*!< GPIO0_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC0_INTF0_GPIO0_EDGE_HIGH_Msk (0x8UL)            /*!< GPIO0_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO0_EDGE_LOW_Pos (2UL)               /*!< GPIO0_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC0_INTF0_GPIO0_EDGE_LOW_Msk (0x4UL)             /*!< GPIO0_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO0_LEVEL_HIGH_Pos (1UL)             /*!< GPIO0_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC0_INTF0_GPIO0_LEVEL_HIGH_Msk (0x2UL)           /*!< GPIO0_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF0_GPIO0_LEVEL_LOW_Pos (0UL)              /*!< GPIO0_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC0_INTF0_GPIO0_LEVEL_LOW_Msk (0x1UL)            /*!< GPIO0_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO15_EDGE_HIGH_Pos (31UL)            /*!< GPIO15_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC0_INTF1_GPIO15_EDGE_HIGH_Msk (0x80000000UL)    /*!< GPIO15_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO15_EDGE_LOW_Pos (30UL)             /*!< GPIO15_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC0_INTF1_GPIO15_EDGE_LOW_Msk (0x40000000UL)     /*!< GPIO15_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO15_LEVEL_HIGH_Pos (29UL)           /*!< GPIO15_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC0_INTF1_GPIO15_LEVEL_HIGH_Msk (0x20000000UL)   /*!< GPIO15_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO15_LEVEL_LOW_Pos (28UL)            /*!< GPIO15_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC0_INTF1_GPIO15_LEVEL_LOW_Msk (0x10000000UL)    /*!< GPIO15_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO14_EDGE_HIGH_Pos (27UL)            /*!< GPIO14_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC0_INTF1_GPIO14_EDGE_HIGH_Msk (0x8000000UL)     /*!< GPIO14_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO14_EDGE_LOW_Pos (26UL)             /*!< GPIO14_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC0_INTF1_GPIO14_EDGE_LOW_Msk (0x4000000UL)      /*!< GPIO14_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO14_LEVEL_HIGH_Pos (25UL)           /*!< GPIO14_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC0_INTF1_GPIO14_LEVEL_HIGH_Msk (0x2000000UL)    /*!< GPIO14_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO14_LEVEL_LOW_Pos (24UL)            /*!< GPIO14_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC0_INTF1_GPIO14_LEVEL_LOW_Msk (0x1000000UL)     /*!< GPIO14_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO13_EDGE_HIGH_Pos (23UL)            /*!< GPIO13_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC0_INTF1_GPIO13_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO13_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO13_EDGE_LOW_Pos (22UL)             /*!< GPIO13_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC0_INTF1_GPIO13_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO13_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO13_LEVEL_HIGH_Pos (21UL)           /*!< GPIO13_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC0_INTF1_GPIO13_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO13_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO13_LEVEL_LOW_Pos (20UL)            /*!< GPIO13_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC0_INTF1_GPIO13_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO13_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO12_EDGE_HIGH_Pos (19UL)            /*!< GPIO12_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC0_INTF1_GPIO12_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO12_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO12_EDGE_LOW_Pos (18UL)             /*!< GPIO12_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC0_INTF1_GPIO12_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO12_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO12_LEVEL_HIGH_Pos (17UL)           /*!< GPIO12_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC0_INTF1_GPIO12_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO12_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO12_LEVEL_LOW_Pos (16UL)            /*!< GPIO12_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC0_INTF1_GPIO12_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO12_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO11_EDGE_HIGH_Pos (15UL)            /*!< GPIO11_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC0_INTF1_GPIO11_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO11_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO11_EDGE_LOW_Pos (14UL)             /*!< GPIO11_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC0_INTF1_GPIO11_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO11_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO11_LEVEL_HIGH_Pos (13UL)           /*!< GPIO11_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC0_INTF1_GPIO11_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO11_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO11_LEVEL_LOW_Pos (12UL)            /*!< GPIO11_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC0_INTF1_GPIO11_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO11_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO10_EDGE_HIGH_Pos (11UL)            /*!< GPIO10_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC0_INTF1_GPIO10_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO10_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO10_EDGE_LOW_Pos (10UL)             /*!< GPIO10_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC0_INTF1_GPIO10_EDGE_LOW_Msk (0x400UL)          /*!< GPIO10_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO10_LEVEL_HIGH_Pos (9UL)            /*!< GPIO10_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC0_INTF1_GPIO10_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO10_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO10_LEVEL_LOW_Pos (8UL)             /*!< GPIO10_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC0_INTF1_GPIO10_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO10_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO9_EDGE_HIGH_Pos (7UL)              /*!< GPIO9_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC0_INTF1_GPIO9_EDGE_HIGH_Msk (0x80UL)           /*!< GPIO9_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO9_EDGE_LOW_Pos (6UL)               /*!< GPIO9_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC0_INTF1_GPIO9_EDGE_LOW_Msk (0x40UL)            /*!< GPIO9_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO9_LEVEL_HIGH_Pos (5UL)             /*!< GPIO9_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC0_INTF1_GPIO9_LEVEL_HIGH_Msk (0x20UL)          /*!< GPIO9_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO9_LEVEL_LOW_Pos (4UL)              /*!< GPIO9_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC0_INTF1_GPIO9_LEVEL_LOW_Msk (0x10UL)           /*!< GPIO9_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO8_EDGE_HIGH_Pos (3UL)              /*!< GPIO8_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC0_INTF1_GPIO8_EDGE_HIGH_Msk (0x8UL)            /*!< GPIO8_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO8_EDGE_LOW_Pos (2UL)               /*!< GPIO8_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC0_INTF1_GPIO8_EDGE_LOW_Msk (0x4UL)             /*!< GPIO8_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO8_LEVEL_HIGH_Pos (1UL)             /*!< GPIO8_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC0_INTF1_GPIO8_LEVEL_HIGH_Msk (0x2UL)           /*!< GPIO8_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF1_GPIO8_LEVEL_LOW_Pos (0UL)              /*!< GPIO8_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC0_INTF1_GPIO8_LEVEL_LOW_Msk (0x1UL)            /*!< GPIO8_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO23_EDGE_HIGH_Pos (31UL)            /*!< GPIO23_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC0_INTF2_GPIO23_EDGE_HIGH_Msk (0x80000000UL)    /*!< GPIO23_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO23_EDGE_LOW_Pos (30UL)             /*!< GPIO23_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC0_INTF2_GPIO23_EDGE_LOW_Msk (0x40000000UL)     /*!< GPIO23_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO23_LEVEL_HIGH_Pos (29UL)           /*!< GPIO23_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC0_INTF2_GPIO23_LEVEL_HIGH_Msk (0x20000000UL)   /*!< GPIO23_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO23_LEVEL_LOW_Pos (28UL)            /*!< GPIO23_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC0_INTF2_GPIO23_LEVEL_LOW_Msk (0x10000000UL)    /*!< GPIO23_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO22_EDGE_HIGH_Pos (27UL)            /*!< GPIO22_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC0_INTF2_GPIO22_EDGE_HIGH_Msk (0x8000000UL)     /*!< GPIO22_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO22_EDGE_LOW_Pos (26UL)             /*!< GPIO22_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC0_INTF2_GPIO22_EDGE_LOW_Msk (0x4000000UL)      /*!< GPIO22_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO22_LEVEL_HIGH_Pos (25UL)           /*!< GPIO22_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC0_INTF2_GPIO22_LEVEL_HIGH_Msk (0x2000000UL)    /*!< GPIO22_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO22_LEVEL_LOW_Pos (24UL)            /*!< GPIO22_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC0_INTF2_GPIO22_LEVEL_LOW_Msk (0x1000000UL)     /*!< GPIO22_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO21_EDGE_HIGH_Pos (23UL)            /*!< GPIO21_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC0_INTF2_GPIO21_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO21_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO21_EDGE_LOW_Pos (22UL)             /*!< GPIO21_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC0_INTF2_GPIO21_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO21_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO21_LEVEL_HIGH_Pos (21UL)           /*!< GPIO21_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC0_INTF2_GPIO21_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO21_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO21_LEVEL_LOW_Pos (20UL)            /*!< GPIO21_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC0_INTF2_GPIO21_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO21_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO20_EDGE_HIGH_Pos (19UL)            /*!< GPIO20_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC0_INTF2_GPIO20_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO20_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO20_EDGE_LOW_Pos (18UL)             /*!< GPIO20_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC0_INTF2_GPIO20_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO20_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO20_LEVEL_HIGH_Pos (17UL)           /*!< GPIO20_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC0_INTF2_GPIO20_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO20_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO20_LEVEL_LOW_Pos (16UL)            /*!< GPIO20_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC0_INTF2_GPIO20_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO20_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO19_EDGE_HIGH_Pos (15UL)            /*!< GPIO19_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC0_INTF2_GPIO19_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO19_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO19_EDGE_LOW_Pos (14UL)             /*!< GPIO19_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC0_INTF2_GPIO19_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO19_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO19_LEVEL_HIGH_Pos (13UL)           /*!< GPIO19_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC0_INTF2_GPIO19_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO19_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO19_LEVEL_LOW_Pos (12UL)            /*!< GPIO19_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC0_INTF2_GPIO19_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO19_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO18_EDGE_HIGH_Pos (11UL)            /*!< GPIO18_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC0_INTF2_GPIO18_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO18_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO18_EDGE_LOW_Pos (10UL)             /*!< GPIO18_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC0_INTF2_GPIO18_EDGE_LOW_Msk (0x400UL)          /*!< GPIO18_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO18_LEVEL_HIGH_Pos (9UL)            /*!< GPIO18_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC0_INTF2_GPIO18_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO18_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO18_LEVEL_LOW_Pos (8UL)             /*!< GPIO18_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC0_INTF2_GPIO18_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO18_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO17_EDGE_HIGH_Pos (7UL)             /*!< GPIO17_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC0_INTF2_GPIO17_EDGE_HIGH_Msk (0x80UL)          /*!< GPIO17_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO17_EDGE_LOW_Pos (6UL)              /*!< GPIO17_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC0_INTF2_GPIO17_EDGE_LOW_Msk (0x40UL)           /*!< GPIO17_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO17_LEVEL_HIGH_Pos (5UL)            /*!< GPIO17_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC0_INTF2_GPIO17_LEVEL_HIGH_Msk (0x20UL)         /*!< GPIO17_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO17_LEVEL_LOW_Pos (4UL)             /*!< GPIO17_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC0_INTF2_GPIO17_LEVEL_LOW_Msk (0x10UL)          /*!< GPIO17_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO16_EDGE_HIGH_Pos (3UL)             /*!< GPIO16_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC0_INTF2_GPIO16_EDGE_HIGH_Msk (0x8UL)           /*!< GPIO16_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO16_EDGE_LOW_Pos (2UL)              /*!< GPIO16_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC0_INTF2_GPIO16_EDGE_LOW_Msk (0x4UL)            /*!< GPIO16_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO16_LEVEL_HIGH_Pos (1UL)            /*!< GPIO16_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC0_INTF2_GPIO16_LEVEL_HIGH_Msk (0x2UL)          /*!< GPIO16_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF2_GPIO16_LEVEL_LOW_Pos (0UL)             /*!< GPIO16_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC0_INTF2_GPIO16_LEVEL_LOW_Msk (0x1UL)           /*!< GPIO16_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO29_EDGE_HIGH_Pos (23UL)            /*!< GPIO29_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC0_INTF3_GPIO29_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO29_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO29_EDGE_LOW_Pos (22UL)             /*!< GPIO29_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC0_INTF3_GPIO29_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO29_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO29_LEVEL_HIGH_Pos (21UL)           /*!< GPIO29_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC0_INTF3_GPIO29_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO29_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO29_LEVEL_LOW_Pos (20UL)            /*!< GPIO29_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC0_INTF3_GPIO29_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO29_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO28_EDGE_HIGH_Pos (19UL)            /*!< GPIO28_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC0_INTF3_GPIO28_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO28_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO28_EDGE_LOW_Pos (18UL)             /*!< GPIO28_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC0_INTF3_GPIO28_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO28_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO28_LEVEL_HIGH_Pos (17UL)           /*!< GPIO28_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC0_INTF3_GPIO28_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO28_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO28_LEVEL_LOW_Pos (16UL)            /*!< GPIO28_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC0_INTF3_GPIO28_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO28_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO27_EDGE_HIGH_Pos (15UL)            /*!< GPIO27_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC0_INTF3_GPIO27_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO27_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO27_EDGE_LOW_Pos (14UL)             /*!< GPIO27_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC0_INTF3_GPIO27_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO27_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO27_LEVEL_HIGH_Pos (13UL)           /*!< GPIO27_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC0_INTF3_GPIO27_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO27_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO27_LEVEL_LOW_Pos (12UL)            /*!< GPIO27_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC0_INTF3_GPIO27_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO27_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO26_EDGE_HIGH_Pos (11UL)            /*!< GPIO26_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC0_INTF3_GPIO26_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO26_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO26_EDGE_LOW_Pos (10UL)             /*!< GPIO26_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC0_INTF3_GPIO26_EDGE_LOW_Msk (0x400UL)          /*!< GPIO26_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO26_LEVEL_HIGH_Pos (9UL)            /*!< GPIO26_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC0_INTF3_GPIO26_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO26_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO26_LEVEL_LOW_Pos (8UL)             /*!< GPIO26_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC0_INTF3_GPIO26_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO26_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO25_EDGE_HIGH_Pos (7UL)             /*!< GPIO25_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC0_INTF3_GPIO25_EDGE_HIGH_Msk (0x80UL)          /*!< GPIO25_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO25_EDGE_LOW_Pos (6UL)              /*!< GPIO25_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC0_INTF3_GPIO25_EDGE_LOW_Msk (0x40UL)           /*!< GPIO25_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO25_LEVEL_HIGH_Pos (5UL)            /*!< GPIO25_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC0_INTF3_GPIO25_LEVEL_HIGH_Msk (0x20UL)         /*!< GPIO25_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO25_LEVEL_LOW_Pos (4UL)             /*!< GPIO25_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC0_INTF3_GPIO25_LEVEL_LOW_Msk (0x10UL)          /*!< GPIO25_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO24_EDGE_HIGH_Pos (3UL)             /*!< GPIO24_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC0_INTF3_GPIO24_EDGE_HIGH_Msk (0x8UL)           /*!< GPIO24_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO24_EDGE_LOW_Pos (2UL)              /*!< GPIO24_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC0_INTF3_GPIO24_EDGE_LOW_Msk (0x4UL)            /*!< GPIO24_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO24_LEVEL_HIGH_Pos (1UL)            /*!< GPIO24_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC0_INTF3_GPIO24_LEVEL_HIGH_Msk (0x2UL)          /*!< GPIO24_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTF3_GPIO24_LEVEL_LOW_Pos (0UL)             /*!< GPIO24_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC0_INTF3_GPIO24_LEVEL_LOW_Msk (0x1UL)           /*!< GPIO24_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO7_EDGE_HIGH_Pos (31UL)             /*!< GPIO7_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC0_INTS0_GPIO7_EDGE_HIGH_Msk (0x80000000UL)     /*!< GPIO7_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO7_EDGE_LOW_Pos (30UL)              /*!< GPIO7_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC0_INTS0_GPIO7_EDGE_LOW_Msk (0x40000000UL)      /*!< GPIO7_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO7_LEVEL_HIGH_Pos (29UL)            /*!< GPIO7_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC0_INTS0_GPIO7_LEVEL_HIGH_Msk (0x20000000UL)    /*!< GPIO7_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO7_LEVEL_LOW_Pos (28UL)             /*!< GPIO7_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC0_INTS0_GPIO7_LEVEL_LOW_Msk (0x10000000UL)     /*!< GPIO7_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO6_EDGE_HIGH_Pos (27UL)             /*!< GPIO6_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC0_INTS0_GPIO6_EDGE_HIGH_Msk (0x8000000UL)      /*!< GPIO6_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO6_EDGE_LOW_Pos (26UL)              /*!< GPIO6_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC0_INTS0_GPIO6_EDGE_LOW_Msk (0x4000000UL)       /*!< GPIO6_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO6_LEVEL_HIGH_Pos (25UL)            /*!< GPIO6_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC0_INTS0_GPIO6_LEVEL_HIGH_Msk (0x2000000UL)     /*!< GPIO6_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO6_LEVEL_LOW_Pos (24UL)             /*!< GPIO6_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC0_INTS0_GPIO6_LEVEL_LOW_Msk (0x1000000UL)      /*!< GPIO6_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO5_EDGE_HIGH_Pos (23UL)             /*!< GPIO5_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC0_INTS0_GPIO5_EDGE_HIGH_Msk (0x800000UL)       /*!< GPIO5_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO5_EDGE_LOW_Pos (22UL)              /*!< GPIO5_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC0_INTS0_GPIO5_EDGE_LOW_Msk (0x400000UL)        /*!< GPIO5_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO5_LEVEL_HIGH_Pos (21UL)            /*!< GPIO5_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC0_INTS0_GPIO5_LEVEL_HIGH_Msk (0x200000UL)      /*!< GPIO5_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO5_LEVEL_LOW_Pos (20UL)             /*!< GPIO5_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC0_INTS0_GPIO5_LEVEL_LOW_Msk (0x100000UL)       /*!< GPIO5_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO4_EDGE_HIGH_Pos (19UL)             /*!< GPIO4_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC0_INTS0_GPIO4_EDGE_HIGH_Msk (0x80000UL)        /*!< GPIO4_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO4_EDGE_LOW_Pos (18UL)              /*!< GPIO4_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC0_INTS0_GPIO4_EDGE_LOW_Msk (0x40000UL)         /*!< GPIO4_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO4_LEVEL_HIGH_Pos (17UL)            /*!< GPIO4_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC0_INTS0_GPIO4_LEVEL_HIGH_Msk (0x20000UL)       /*!< GPIO4_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO4_LEVEL_LOW_Pos (16UL)             /*!< GPIO4_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC0_INTS0_GPIO4_LEVEL_LOW_Msk (0x10000UL)        /*!< GPIO4_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO3_EDGE_HIGH_Pos (15UL)             /*!< GPIO3_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC0_INTS0_GPIO3_EDGE_HIGH_Msk (0x8000UL)         /*!< GPIO3_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO3_EDGE_LOW_Pos (14UL)              /*!< GPIO3_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC0_INTS0_GPIO3_EDGE_LOW_Msk (0x4000UL)          /*!< GPIO3_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO3_LEVEL_HIGH_Pos (13UL)            /*!< GPIO3_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC0_INTS0_GPIO3_LEVEL_HIGH_Msk (0x2000UL)        /*!< GPIO3_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO3_LEVEL_LOW_Pos (12UL)             /*!< GPIO3_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC0_INTS0_GPIO3_LEVEL_LOW_Msk (0x1000UL)         /*!< GPIO3_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO2_EDGE_HIGH_Pos (11UL)             /*!< GPIO2_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC0_INTS0_GPIO2_EDGE_HIGH_Msk (0x800UL)          /*!< GPIO2_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO2_EDGE_LOW_Pos (10UL)              /*!< GPIO2_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC0_INTS0_GPIO2_EDGE_LOW_Msk (0x400UL)           /*!< GPIO2_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO2_LEVEL_HIGH_Pos (9UL)             /*!< GPIO2_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC0_INTS0_GPIO2_LEVEL_HIGH_Msk (0x200UL)         /*!< GPIO2_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO2_LEVEL_LOW_Pos (8UL)              /*!< GPIO2_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC0_INTS0_GPIO2_LEVEL_LOW_Msk (0x100UL)          /*!< GPIO2_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO1_EDGE_HIGH_Pos (7UL)              /*!< GPIO1_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC0_INTS0_GPIO1_EDGE_HIGH_Msk (0x80UL)           /*!< GPIO1_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO1_EDGE_LOW_Pos (6UL)               /*!< GPIO1_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC0_INTS0_GPIO1_EDGE_LOW_Msk (0x40UL)            /*!< GPIO1_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO1_LEVEL_HIGH_Pos (5UL)             /*!< GPIO1_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC0_INTS0_GPIO1_LEVEL_HIGH_Msk (0x20UL)          /*!< GPIO1_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO1_LEVEL_LOW_Pos (4UL)              /*!< GPIO1_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC0_INTS0_GPIO1_LEVEL_LOW_Msk (0x10UL)           /*!< GPIO1_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO0_EDGE_HIGH_Pos (3UL)              /*!< GPIO0_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC0_INTS0_GPIO0_EDGE_HIGH_Msk (0x8UL)            /*!< GPIO0_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO0_EDGE_LOW_Pos (2UL)               /*!< GPIO0_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC0_INTS0_GPIO0_EDGE_LOW_Msk (0x4UL)             /*!< GPIO0_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO0_LEVEL_HIGH_Pos (1UL)             /*!< GPIO0_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC0_INTS0_GPIO0_LEVEL_HIGH_Msk (0x2UL)           /*!< GPIO0_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS0_GPIO0_LEVEL_LOW_Pos (0UL)              /*!< GPIO0_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC0_INTS0_GPIO0_LEVEL_LOW_Msk (0x1UL)            /*!< GPIO0_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO15_EDGE_HIGH_Pos (31UL)            /*!< GPIO15_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC0_INTS1_GPIO15_EDGE_HIGH_Msk (0x80000000UL)    /*!< GPIO15_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO15_EDGE_LOW_Pos (30UL)             /*!< GPIO15_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC0_INTS1_GPIO15_EDGE_LOW_Msk (0x40000000UL)     /*!< GPIO15_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO15_LEVEL_HIGH_Pos (29UL)           /*!< GPIO15_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC0_INTS1_GPIO15_LEVEL_HIGH_Msk (0x20000000UL)   /*!< GPIO15_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO15_LEVEL_LOW_Pos (28UL)            /*!< GPIO15_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC0_INTS1_GPIO15_LEVEL_LOW_Msk (0x10000000UL)    /*!< GPIO15_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO14_EDGE_HIGH_Pos (27UL)            /*!< GPIO14_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC0_INTS1_GPIO14_EDGE_HIGH_Msk (0x8000000UL)     /*!< GPIO14_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO14_EDGE_LOW_Pos (26UL)             /*!< GPIO14_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC0_INTS1_GPIO14_EDGE_LOW_Msk (0x4000000UL)      /*!< GPIO14_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO14_LEVEL_HIGH_Pos (25UL)           /*!< GPIO14_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC0_INTS1_GPIO14_LEVEL_HIGH_Msk (0x2000000UL)    /*!< GPIO14_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO14_LEVEL_LOW_Pos (24UL)            /*!< GPIO14_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC0_INTS1_GPIO14_LEVEL_LOW_Msk (0x1000000UL)     /*!< GPIO14_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO13_EDGE_HIGH_Pos (23UL)            /*!< GPIO13_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC0_INTS1_GPIO13_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO13_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO13_EDGE_LOW_Pos (22UL)             /*!< GPIO13_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC0_INTS1_GPIO13_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO13_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO13_LEVEL_HIGH_Pos (21UL)           /*!< GPIO13_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC0_INTS1_GPIO13_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO13_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO13_LEVEL_LOW_Pos (20UL)            /*!< GPIO13_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC0_INTS1_GPIO13_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO13_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO12_EDGE_HIGH_Pos (19UL)            /*!< GPIO12_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC0_INTS1_GPIO12_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO12_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO12_EDGE_LOW_Pos (18UL)             /*!< GPIO12_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC0_INTS1_GPIO12_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO12_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO12_LEVEL_HIGH_Pos (17UL)           /*!< GPIO12_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC0_INTS1_GPIO12_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO12_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO12_LEVEL_LOW_Pos (16UL)            /*!< GPIO12_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC0_INTS1_GPIO12_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO12_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO11_EDGE_HIGH_Pos (15UL)            /*!< GPIO11_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC0_INTS1_GPIO11_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO11_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO11_EDGE_LOW_Pos (14UL)             /*!< GPIO11_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC0_INTS1_GPIO11_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO11_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO11_LEVEL_HIGH_Pos (13UL)           /*!< GPIO11_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC0_INTS1_GPIO11_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO11_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO11_LEVEL_LOW_Pos (12UL)            /*!< GPIO11_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC0_INTS1_GPIO11_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO11_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO10_EDGE_HIGH_Pos (11UL)            /*!< GPIO10_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC0_INTS1_GPIO10_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO10_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO10_EDGE_LOW_Pos (10UL)             /*!< GPIO10_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC0_INTS1_GPIO10_EDGE_LOW_Msk (0x400UL)          /*!< GPIO10_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO10_LEVEL_HIGH_Pos (9UL)            /*!< GPIO10_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC0_INTS1_GPIO10_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO10_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO10_LEVEL_LOW_Pos (8UL)             /*!< GPIO10_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC0_INTS1_GPIO10_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO10_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO9_EDGE_HIGH_Pos (7UL)              /*!< GPIO9_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC0_INTS1_GPIO9_EDGE_HIGH_Msk (0x80UL)           /*!< GPIO9_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO9_EDGE_LOW_Pos (6UL)               /*!< GPIO9_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC0_INTS1_GPIO9_EDGE_LOW_Msk (0x40UL)            /*!< GPIO9_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO9_LEVEL_HIGH_Pos (5UL)             /*!< GPIO9_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC0_INTS1_GPIO9_LEVEL_HIGH_Msk (0x20UL)          /*!< GPIO9_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO9_LEVEL_LOW_Pos (4UL)              /*!< GPIO9_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC0_INTS1_GPIO9_LEVEL_LOW_Msk (0x10UL)           /*!< GPIO9_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO8_EDGE_HIGH_Pos (3UL)              /*!< GPIO8_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC0_INTS1_GPIO8_EDGE_HIGH_Msk (0x8UL)            /*!< GPIO8_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO8_EDGE_LOW_Pos (2UL)               /*!< GPIO8_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC0_INTS1_GPIO8_EDGE_LOW_Msk (0x4UL)             /*!< GPIO8_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO8_LEVEL_HIGH_Pos (1UL)             /*!< GPIO8_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC0_INTS1_GPIO8_LEVEL_HIGH_Msk (0x2UL)           /*!< GPIO8_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS1_GPIO8_LEVEL_LOW_Pos (0UL)              /*!< GPIO8_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC0_INTS1_GPIO8_LEVEL_LOW_Msk (0x1UL)            /*!< GPIO8_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO23_EDGE_HIGH_Pos (31UL)            /*!< GPIO23_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC0_INTS2_GPIO23_EDGE_HIGH_Msk (0x80000000UL)    /*!< GPIO23_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO23_EDGE_LOW_Pos (30UL)             /*!< GPIO23_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC0_INTS2_GPIO23_EDGE_LOW_Msk (0x40000000UL)     /*!< GPIO23_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO23_LEVEL_HIGH_Pos (29UL)           /*!< GPIO23_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC0_INTS2_GPIO23_LEVEL_HIGH_Msk (0x20000000UL)   /*!< GPIO23_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO23_LEVEL_LOW_Pos (28UL)            /*!< GPIO23_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC0_INTS2_GPIO23_LEVEL_LOW_Msk (0x10000000UL)    /*!< GPIO23_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO22_EDGE_HIGH_Pos (27UL)            /*!< GPIO22_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC0_INTS2_GPIO22_EDGE_HIGH_Msk (0x8000000UL)     /*!< GPIO22_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO22_EDGE_LOW_Pos (26UL)             /*!< GPIO22_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC0_INTS2_GPIO22_EDGE_LOW_Msk (0x4000000UL)      /*!< GPIO22_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO22_LEVEL_HIGH_Pos (25UL)           /*!< GPIO22_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC0_INTS2_GPIO22_LEVEL_HIGH_Msk (0x2000000UL)    /*!< GPIO22_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO22_LEVEL_LOW_Pos (24UL)            /*!< GPIO22_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC0_INTS2_GPIO22_LEVEL_LOW_Msk (0x1000000UL)     /*!< GPIO22_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO21_EDGE_HIGH_Pos (23UL)            /*!< GPIO21_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC0_INTS2_GPIO21_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO21_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO21_EDGE_LOW_Pos (22UL)             /*!< GPIO21_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC0_INTS2_GPIO21_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO21_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO21_LEVEL_HIGH_Pos (21UL)           /*!< GPIO21_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC0_INTS2_GPIO21_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO21_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO21_LEVEL_LOW_Pos (20UL)            /*!< GPIO21_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC0_INTS2_GPIO21_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO21_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO20_EDGE_HIGH_Pos (19UL)            /*!< GPIO20_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC0_INTS2_GPIO20_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO20_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO20_EDGE_LOW_Pos (18UL)             /*!< GPIO20_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC0_INTS2_GPIO20_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO20_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO20_LEVEL_HIGH_Pos (17UL)           /*!< GPIO20_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC0_INTS2_GPIO20_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO20_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO20_LEVEL_LOW_Pos (16UL)            /*!< GPIO20_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC0_INTS2_GPIO20_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO20_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO19_EDGE_HIGH_Pos (15UL)            /*!< GPIO19_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC0_INTS2_GPIO19_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO19_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO19_EDGE_LOW_Pos (14UL)             /*!< GPIO19_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC0_INTS2_GPIO19_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO19_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO19_LEVEL_HIGH_Pos (13UL)           /*!< GPIO19_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC0_INTS2_GPIO19_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO19_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO19_LEVEL_LOW_Pos (12UL)            /*!< GPIO19_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC0_INTS2_GPIO19_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO19_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO18_EDGE_HIGH_Pos (11UL)            /*!< GPIO18_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC0_INTS2_GPIO18_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO18_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO18_EDGE_LOW_Pos (10UL)             /*!< GPIO18_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC0_INTS2_GPIO18_EDGE_LOW_Msk (0x400UL)          /*!< GPIO18_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO18_LEVEL_HIGH_Pos (9UL)            /*!< GPIO18_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC0_INTS2_GPIO18_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO18_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO18_LEVEL_LOW_Pos (8UL)             /*!< GPIO18_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC0_INTS2_GPIO18_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO18_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO17_EDGE_HIGH_Pos (7UL)             /*!< GPIO17_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC0_INTS2_GPIO17_EDGE_HIGH_Msk (0x80UL)          /*!< GPIO17_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO17_EDGE_LOW_Pos (6UL)              /*!< GPIO17_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC0_INTS2_GPIO17_EDGE_LOW_Msk (0x40UL)           /*!< GPIO17_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO17_LEVEL_HIGH_Pos (5UL)            /*!< GPIO17_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC0_INTS2_GPIO17_LEVEL_HIGH_Msk (0x20UL)         /*!< GPIO17_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO17_LEVEL_LOW_Pos (4UL)             /*!< GPIO17_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC0_INTS2_GPIO17_LEVEL_LOW_Msk (0x10UL)          /*!< GPIO17_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO16_EDGE_HIGH_Pos (3UL)             /*!< GPIO16_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC0_INTS2_GPIO16_EDGE_HIGH_Msk (0x8UL)           /*!< GPIO16_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO16_EDGE_LOW_Pos (2UL)              /*!< GPIO16_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC0_INTS2_GPIO16_EDGE_LOW_Msk (0x4UL)            /*!< GPIO16_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO16_LEVEL_HIGH_Pos (1UL)            /*!< GPIO16_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC0_INTS2_GPIO16_LEVEL_HIGH_Msk (0x2UL)          /*!< GPIO16_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS2_GPIO16_LEVEL_LOW_Pos (0UL)             /*!< GPIO16_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC0_INTS2_GPIO16_LEVEL_LOW_Msk (0x1UL)           /*!< GPIO16_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO29_EDGE_HIGH_Pos (23UL)            /*!< GPIO29_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC0_INTS3_GPIO29_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO29_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO29_EDGE_LOW_Pos (22UL)             /*!< GPIO29_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC0_INTS3_GPIO29_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO29_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO29_LEVEL_HIGH_Pos (21UL)           /*!< GPIO29_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC0_INTS3_GPIO29_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO29_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO29_LEVEL_LOW_Pos (20UL)            /*!< GPIO29_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC0_INTS3_GPIO29_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO29_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO28_EDGE_HIGH_Pos (19UL)            /*!< GPIO28_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC0_INTS3_GPIO28_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO28_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO28_EDGE_LOW_Pos (18UL)             /*!< GPIO28_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC0_INTS3_GPIO28_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO28_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO28_LEVEL_HIGH_Pos (17UL)           /*!< GPIO28_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC0_INTS3_GPIO28_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO28_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO28_LEVEL_LOW_Pos (16UL)            /*!< GPIO28_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC0_INTS3_GPIO28_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO28_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO27_EDGE_HIGH_Pos (15UL)            /*!< GPIO27_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC0_INTS3_GPIO27_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO27_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO27_EDGE_LOW_Pos (14UL)             /*!< GPIO27_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC0_INTS3_GPIO27_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO27_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO27_LEVEL_HIGH_Pos (13UL)           /*!< GPIO27_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC0_INTS3_GPIO27_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO27_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO27_LEVEL_LOW_Pos (12UL)            /*!< GPIO27_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC0_INTS3_GPIO27_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO27_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO26_EDGE_HIGH_Pos (11UL)            /*!< GPIO26_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC0_INTS3_GPIO26_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO26_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO26_EDGE_LOW_Pos (10UL)             /*!< GPIO26_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC0_INTS3_GPIO26_EDGE_LOW_Msk (0x400UL)          /*!< GPIO26_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO26_LEVEL_HIGH_Pos (9UL)            /*!< GPIO26_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC0_INTS3_GPIO26_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO26_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO26_LEVEL_LOW_Pos (8UL)             /*!< GPIO26_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC0_INTS3_GPIO26_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO26_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO25_EDGE_HIGH_Pos (7UL)             /*!< GPIO25_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC0_INTS3_GPIO25_EDGE_HIGH_Msk (0x80UL)          /*!< GPIO25_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO25_EDGE_LOW_Pos (6UL)              /*!< GPIO25_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC0_INTS3_GPIO25_EDGE_LOW_Msk (0x40UL)           /*!< GPIO25_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO25_LEVEL_HIGH_Pos (5UL)            /*!< GPIO25_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC0_INTS3_GPIO25_LEVEL_HIGH_Msk (0x20UL)         /*!< GPIO25_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO25_LEVEL_LOW_Pos (4UL)             /*!< GPIO25_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC0_INTS3_GPIO25_LEVEL_LOW_Msk (0x10UL)          /*!< GPIO25_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO24_EDGE_HIGH_Pos (3UL)             /*!< GPIO24_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC0_INTS3_GPIO24_EDGE_HIGH_Msk (0x8UL)           /*!< GPIO24_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO24_EDGE_LOW_Pos (2UL)              /*!< GPIO24_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC0_INTS3_GPIO24_EDGE_LOW_Msk (0x4UL)            /*!< GPIO24_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO24_LEVEL_HIGH_Pos (1UL)            /*!< GPIO24_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC0_INTS3_GPIO24_LEVEL_HIGH_Msk (0x2UL)          /*!< GPIO24_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC0_INTS3_GPIO24_LEVEL_LOW_Pos (0UL)             /*!< GPIO24_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC0_INTS3_GPIO24_LEVEL_LOW_Msk (0x1UL)           /*!< GPIO24_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO7_EDGE_HIGH_Pos (31UL)             /*!< GPIO7_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC1_INTE0_GPIO7_EDGE_HIGH_Msk (0x80000000UL)     /*!< GPIO7_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO7_EDGE_LOW_Pos (30UL)              /*!< GPIO7_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC1_INTE0_GPIO7_EDGE_LOW_Msk (0x40000000UL)      /*!< GPIO7_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO7_LEVEL_HIGH_Pos (29UL)            /*!< GPIO7_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC1_INTE0_GPIO7_LEVEL_HIGH_Msk (0x20000000UL)    /*!< GPIO7_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO7_LEVEL_LOW_Pos (28UL)             /*!< GPIO7_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC1_INTE0_GPIO7_LEVEL_LOW_Msk (0x10000000UL)     /*!< GPIO7_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO6_EDGE_HIGH_Pos (27UL)             /*!< GPIO6_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC1_INTE0_GPIO6_EDGE_HIGH_Msk (0x8000000UL)      /*!< GPIO6_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO6_EDGE_LOW_Pos (26UL)              /*!< GPIO6_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC1_INTE0_GPIO6_EDGE_LOW_Msk (0x4000000UL)       /*!< GPIO6_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO6_LEVEL_HIGH_Pos (25UL)            /*!< GPIO6_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC1_INTE0_GPIO6_LEVEL_HIGH_Msk (0x2000000UL)     /*!< GPIO6_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO6_LEVEL_LOW_Pos (24UL)             /*!< GPIO6_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC1_INTE0_GPIO6_LEVEL_LOW_Msk (0x1000000UL)      /*!< GPIO6_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO5_EDGE_HIGH_Pos (23UL)             /*!< GPIO5_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC1_INTE0_GPIO5_EDGE_HIGH_Msk (0x800000UL)       /*!< GPIO5_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO5_EDGE_LOW_Pos (22UL)              /*!< GPIO5_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC1_INTE0_GPIO5_EDGE_LOW_Msk (0x400000UL)        /*!< GPIO5_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO5_LEVEL_HIGH_Pos (21UL)            /*!< GPIO5_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC1_INTE0_GPIO5_LEVEL_HIGH_Msk (0x200000UL)      /*!< GPIO5_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO5_LEVEL_LOW_Pos (20UL)             /*!< GPIO5_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC1_INTE0_GPIO5_LEVEL_LOW_Msk (0x100000UL)       /*!< GPIO5_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO4_EDGE_HIGH_Pos (19UL)             /*!< GPIO4_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC1_INTE0_GPIO4_EDGE_HIGH_Msk (0x80000UL)        /*!< GPIO4_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO4_EDGE_LOW_Pos (18UL)              /*!< GPIO4_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC1_INTE0_GPIO4_EDGE_LOW_Msk (0x40000UL)         /*!< GPIO4_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO4_LEVEL_HIGH_Pos (17UL)            /*!< GPIO4_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC1_INTE0_GPIO4_LEVEL_HIGH_Msk (0x20000UL)       /*!< GPIO4_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO4_LEVEL_LOW_Pos (16UL)             /*!< GPIO4_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC1_INTE0_GPIO4_LEVEL_LOW_Msk (0x10000UL)        /*!< GPIO4_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO3_EDGE_HIGH_Pos (15UL)             /*!< GPIO3_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC1_INTE0_GPIO3_EDGE_HIGH_Msk (0x8000UL)         /*!< GPIO3_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO3_EDGE_LOW_Pos (14UL)              /*!< GPIO3_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC1_INTE0_GPIO3_EDGE_LOW_Msk (0x4000UL)          /*!< GPIO3_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO3_LEVEL_HIGH_Pos (13UL)            /*!< GPIO3_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC1_INTE0_GPIO3_LEVEL_HIGH_Msk (0x2000UL)        /*!< GPIO3_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO3_LEVEL_LOW_Pos (12UL)             /*!< GPIO3_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC1_INTE0_GPIO3_LEVEL_LOW_Msk (0x1000UL)         /*!< GPIO3_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO2_EDGE_HIGH_Pos (11UL)             /*!< GPIO2_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC1_INTE0_GPIO2_EDGE_HIGH_Msk (0x800UL)          /*!< GPIO2_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO2_EDGE_LOW_Pos (10UL)              /*!< GPIO2_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC1_INTE0_GPIO2_EDGE_LOW_Msk (0x400UL)           /*!< GPIO2_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO2_LEVEL_HIGH_Pos (9UL)             /*!< GPIO2_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC1_INTE0_GPIO2_LEVEL_HIGH_Msk (0x200UL)         /*!< GPIO2_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO2_LEVEL_LOW_Pos (8UL)              /*!< GPIO2_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC1_INTE0_GPIO2_LEVEL_LOW_Msk (0x100UL)          /*!< GPIO2_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO1_EDGE_HIGH_Pos (7UL)              /*!< GPIO1_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC1_INTE0_GPIO1_EDGE_HIGH_Msk (0x80UL)           /*!< GPIO1_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO1_EDGE_LOW_Pos (6UL)               /*!< GPIO1_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC1_INTE0_GPIO1_EDGE_LOW_Msk (0x40UL)            /*!< GPIO1_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO1_LEVEL_HIGH_Pos (5UL)             /*!< GPIO1_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC1_INTE0_GPIO1_LEVEL_HIGH_Msk (0x20UL)          /*!< GPIO1_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO1_LEVEL_LOW_Pos (4UL)              /*!< GPIO1_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC1_INTE0_GPIO1_LEVEL_LOW_Msk (0x10UL)           /*!< GPIO1_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO0_EDGE_HIGH_Pos (3UL)              /*!< GPIO0_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC1_INTE0_GPIO0_EDGE_HIGH_Msk (0x8UL)            /*!< GPIO0_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO0_EDGE_LOW_Pos (2UL)               /*!< GPIO0_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC1_INTE0_GPIO0_EDGE_LOW_Msk (0x4UL)             /*!< GPIO0_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO0_LEVEL_HIGH_Pos (1UL)             /*!< GPIO0_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC1_INTE0_GPIO0_LEVEL_HIGH_Msk (0x2UL)           /*!< GPIO0_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE0_GPIO0_LEVEL_LOW_Pos (0UL)              /*!< GPIO0_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC1_INTE0_GPIO0_LEVEL_LOW_Msk (0x1UL)            /*!< GPIO0_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO15_EDGE_HIGH_Pos (31UL)            /*!< GPIO15_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC1_INTE1_GPIO15_EDGE_HIGH_Msk (0x80000000UL)    /*!< GPIO15_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO15_EDGE_LOW_Pos (30UL)             /*!< GPIO15_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC1_INTE1_GPIO15_EDGE_LOW_Msk (0x40000000UL)     /*!< GPIO15_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO15_LEVEL_HIGH_Pos (29UL)           /*!< GPIO15_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC1_INTE1_GPIO15_LEVEL_HIGH_Msk (0x20000000UL)   /*!< GPIO15_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO15_LEVEL_LOW_Pos (28UL)            /*!< GPIO15_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC1_INTE1_GPIO15_LEVEL_LOW_Msk (0x10000000UL)    /*!< GPIO15_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO14_EDGE_HIGH_Pos (27UL)            /*!< GPIO14_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC1_INTE1_GPIO14_EDGE_HIGH_Msk (0x8000000UL)     /*!< GPIO14_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO14_EDGE_LOW_Pos (26UL)             /*!< GPIO14_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC1_INTE1_GPIO14_EDGE_LOW_Msk (0x4000000UL)      /*!< GPIO14_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO14_LEVEL_HIGH_Pos (25UL)           /*!< GPIO14_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC1_INTE1_GPIO14_LEVEL_HIGH_Msk (0x2000000UL)    /*!< GPIO14_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO14_LEVEL_LOW_Pos (24UL)            /*!< GPIO14_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC1_INTE1_GPIO14_LEVEL_LOW_Msk (0x1000000UL)     /*!< GPIO14_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO13_EDGE_HIGH_Pos (23UL)            /*!< GPIO13_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC1_INTE1_GPIO13_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO13_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO13_EDGE_LOW_Pos (22UL)             /*!< GPIO13_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC1_INTE1_GPIO13_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO13_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO13_LEVEL_HIGH_Pos (21UL)           /*!< GPIO13_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC1_INTE1_GPIO13_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO13_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO13_LEVEL_LOW_Pos (20UL)            /*!< GPIO13_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC1_INTE1_GPIO13_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO13_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO12_EDGE_HIGH_Pos (19UL)            /*!< GPIO12_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC1_INTE1_GPIO12_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO12_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO12_EDGE_LOW_Pos (18UL)             /*!< GPIO12_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC1_INTE1_GPIO12_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO12_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO12_LEVEL_HIGH_Pos (17UL)           /*!< GPIO12_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC1_INTE1_GPIO12_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO12_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO12_LEVEL_LOW_Pos (16UL)            /*!< GPIO12_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC1_INTE1_GPIO12_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO12_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO11_EDGE_HIGH_Pos (15UL)            /*!< GPIO11_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC1_INTE1_GPIO11_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO11_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO11_EDGE_LOW_Pos (14UL)             /*!< GPIO11_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC1_INTE1_GPIO11_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO11_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO11_LEVEL_HIGH_Pos (13UL)           /*!< GPIO11_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC1_INTE1_GPIO11_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO11_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO11_LEVEL_LOW_Pos (12UL)            /*!< GPIO11_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC1_INTE1_GPIO11_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO11_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO10_EDGE_HIGH_Pos (11UL)            /*!< GPIO10_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC1_INTE1_GPIO10_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO10_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO10_EDGE_LOW_Pos (10UL)             /*!< GPIO10_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC1_INTE1_GPIO10_EDGE_LOW_Msk (0x400UL)          /*!< GPIO10_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO10_LEVEL_HIGH_Pos (9UL)            /*!< GPIO10_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC1_INTE1_GPIO10_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO10_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO10_LEVEL_LOW_Pos (8UL)             /*!< GPIO10_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC1_INTE1_GPIO10_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO10_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO9_EDGE_HIGH_Pos (7UL)              /*!< GPIO9_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC1_INTE1_GPIO9_EDGE_HIGH_Msk (0x80UL)           /*!< GPIO9_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO9_EDGE_LOW_Pos (6UL)               /*!< GPIO9_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC1_INTE1_GPIO9_EDGE_LOW_Msk (0x40UL)            /*!< GPIO9_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO9_LEVEL_HIGH_Pos (5UL)             /*!< GPIO9_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC1_INTE1_GPIO9_LEVEL_HIGH_Msk (0x20UL)          /*!< GPIO9_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO9_LEVEL_LOW_Pos (4UL)              /*!< GPIO9_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC1_INTE1_GPIO9_LEVEL_LOW_Msk (0x10UL)           /*!< GPIO9_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO8_EDGE_HIGH_Pos (3UL)              /*!< GPIO8_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC1_INTE1_GPIO8_EDGE_HIGH_Msk (0x8UL)            /*!< GPIO8_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO8_EDGE_LOW_Pos (2UL)               /*!< GPIO8_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC1_INTE1_GPIO8_EDGE_LOW_Msk (0x4UL)             /*!< GPIO8_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO8_LEVEL_HIGH_Pos (1UL)             /*!< GPIO8_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC1_INTE1_GPIO8_LEVEL_HIGH_Msk (0x2UL)           /*!< GPIO8_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE1_GPIO8_LEVEL_LOW_Pos (0UL)              /*!< GPIO8_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC1_INTE1_GPIO8_LEVEL_LOW_Msk (0x1UL)            /*!< GPIO8_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO23_EDGE_HIGH_Pos (31UL)            /*!< GPIO23_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC1_INTE2_GPIO23_EDGE_HIGH_Msk (0x80000000UL)    /*!< GPIO23_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO23_EDGE_LOW_Pos (30UL)             /*!< GPIO23_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC1_INTE2_GPIO23_EDGE_LOW_Msk (0x40000000UL)     /*!< GPIO23_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO23_LEVEL_HIGH_Pos (29UL)           /*!< GPIO23_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC1_INTE2_GPIO23_LEVEL_HIGH_Msk (0x20000000UL)   /*!< GPIO23_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO23_LEVEL_LOW_Pos (28UL)            /*!< GPIO23_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC1_INTE2_GPIO23_LEVEL_LOW_Msk (0x10000000UL)    /*!< GPIO23_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO22_EDGE_HIGH_Pos (27UL)            /*!< GPIO22_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC1_INTE2_GPIO22_EDGE_HIGH_Msk (0x8000000UL)     /*!< GPIO22_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO22_EDGE_LOW_Pos (26UL)             /*!< GPIO22_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC1_INTE2_GPIO22_EDGE_LOW_Msk (0x4000000UL)      /*!< GPIO22_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO22_LEVEL_HIGH_Pos (25UL)           /*!< GPIO22_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC1_INTE2_GPIO22_LEVEL_HIGH_Msk (0x2000000UL)    /*!< GPIO22_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO22_LEVEL_LOW_Pos (24UL)            /*!< GPIO22_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC1_INTE2_GPIO22_LEVEL_LOW_Msk (0x1000000UL)     /*!< GPIO22_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO21_EDGE_HIGH_Pos (23UL)            /*!< GPIO21_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC1_INTE2_GPIO21_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO21_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO21_EDGE_LOW_Pos (22UL)             /*!< GPIO21_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC1_INTE2_GPIO21_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO21_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO21_LEVEL_HIGH_Pos (21UL)           /*!< GPIO21_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC1_INTE2_GPIO21_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO21_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO21_LEVEL_LOW_Pos (20UL)            /*!< GPIO21_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC1_INTE2_GPIO21_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO21_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO20_EDGE_HIGH_Pos (19UL)            /*!< GPIO20_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC1_INTE2_GPIO20_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO20_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO20_EDGE_LOW_Pos (18UL)             /*!< GPIO20_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC1_INTE2_GPIO20_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO20_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO20_LEVEL_HIGH_Pos (17UL)           /*!< GPIO20_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC1_INTE2_GPIO20_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO20_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO20_LEVEL_LOW_Pos (16UL)            /*!< GPIO20_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC1_INTE2_GPIO20_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO20_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO19_EDGE_HIGH_Pos (15UL)            /*!< GPIO19_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC1_INTE2_GPIO19_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO19_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO19_EDGE_LOW_Pos (14UL)             /*!< GPIO19_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC1_INTE2_GPIO19_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO19_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO19_LEVEL_HIGH_Pos (13UL)           /*!< GPIO19_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC1_INTE2_GPIO19_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO19_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO19_LEVEL_LOW_Pos (12UL)            /*!< GPIO19_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC1_INTE2_GPIO19_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO19_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO18_EDGE_HIGH_Pos (11UL)            /*!< GPIO18_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC1_INTE2_GPIO18_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO18_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO18_EDGE_LOW_Pos (10UL)             /*!< GPIO18_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC1_INTE2_GPIO18_EDGE_LOW_Msk (0x400UL)          /*!< GPIO18_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO18_LEVEL_HIGH_Pos (9UL)            /*!< GPIO18_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC1_INTE2_GPIO18_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO18_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO18_LEVEL_LOW_Pos (8UL)             /*!< GPIO18_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC1_INTE2_GPIO18_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO18_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO17_EDGE_HIGH_Pos (7UL)             /*!< GPIO17_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC1_INTE2_GPIO17_EDGE_HIGH_Msk (0x80UL)          /*!< GPIO17_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO17_EDGE_LOW_Pos (6UL)              /*!< GPIO17_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC1_INTE2_GPIO17_EDGE_LOW_Msk (0x40UL)           /*!< GPIO17_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO17_LEVEL_HIGH_Pos (5UL)            /*!< GPIO17_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC1_INTE2_GPIO17_LEVEL_HIGH_Msk (0x20UL)         /*!< GPIO17_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO17_LEVEL_LOW_Pos (4UL)             /*!< GPIO17_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC1_INTE2_GPIO17_LEVEL_LOW_Msk (0x10UL)          /*!< GPIO17_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO16_EDGE_HIGH_Pos (3UL)             /*!< GPIO16_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC1_INTE2_GPIO16_EDGE_HIGH_Msk (0x8UL)           /*!< GPIO16_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO16_EDGE_LOW_Pos (2UL)              /*!< GPIO16_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC1_INTE2_GPIO16_EDGE_LOW_Msk (0x4UL)            /*!< GPIO16_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO16_LEVEL_HIGH_Pos (1UL)            /*!< GPIO16_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC1_INTE2_GPIO16_LEVEL_HIGH_Msk (0x2UL)          /*!< GPIO16_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE2_GPIO16_LEVEL_LOW_Pos (0UL)             /*!< GPIO16_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC1_INTE2_GPIO16_LEVEL_LOW_Msk (0x1UL)           /*!< GPIO16_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO29_EDGE_HIGH_Pos (23UL)            /*!< GPIO29_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC1_INTE3_GPIO29_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO29_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO29_EDGE_LOW_Pos (22UL)             /*!< GPIO29_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC1_INTE3_GPIO29_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO29_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO29_LEVEL_HIGH_Pos (21UL)           /*!< GPIO29_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC1_INTE3_GPIO29_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO29_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO29_LEVEL_LOW_Pos (20UL)            /*!< GPIO29_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC1_INTE3_GPIO29_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO29_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO28_EDGE_HIGH_Pos (19UL)            /*!< GPIO28_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC1_INTE3_GPIO28_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO28_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO28_EDGE_LOW_Pos (18UL)             /*!< GPIO28_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC1_INTE3_GPIO28_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO28_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO28_LEVEL_HIGH_Pos (17UL)           /*!< GPIO28_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC1_INTE3_GPIO28_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO28_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO28_LEVEL_LOW_Pos (16UL)            /*!< GPIO28_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC1_INTE3_GPIO28_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO28_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO27_EDGE_HIGH_Pos (15UL)            /*!< GPIO27_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC1_INTE3_GPIO27_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO27_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO27_EDGE_LOW_Pos (14UL)             /*!< GPIO27_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC1_INTE3_GPIO27_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO27_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO27_LEVEL_HIGH_Pos (13UL)           /*!< GPIO27_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC1_INTE3_GPIO27_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO27_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO27_LEVEL_LOW_Pos (12UL)            /*!< GPIO27_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC1_INTE3_GPIO27_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO27_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO26_EDGE_HIGH_Pos (11UL)            /*!< GPIO26_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC1_INTE3_GPIO26_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO26_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO26_EDGE_LOW_Pos (10UL)             /*!< GPIO26_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC1_INTE3_GPIO26_EDGE_LOW_Msk (0x400UL)          /*!< GPIO26_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO26_LEVEL_HIGH_Pos (9UL)            /*!< GPIO26_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC1_INTE3_GPIO26_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO26_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO26_LEVEL_LOW_Pos (8UL)             /*!< GPIO26_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC1_INTE3_GPIO26_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO26_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO25_EDGE_HIGH_Pos (7UL)             /*!< GPIO25_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC1_INTE3_GPIO25_EDGE_HIGH_Msk (0x80UL)          /*!< GPIO25_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO25_EDGE_LOW_Pos (6UL)              /*!< GPIO25_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC1_INTE3_GPIO25_EDGE_LOW_Msk (0x40UL)           /*!< GPIO25_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO25_LEVEL_HIGH_Pos (5UL)            /*!< GPIO25_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC1_INTE3_GPIO25_LEVEL_HIGH_Msk (0x20UL)         /*!< GPIO25_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO25_LEVEL_LOW_Pos (4UL)             /*!< GPIO25_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC1_INTE3_GPIO25_LEVEL_LOW_Msk (0x10UL)          /*!< GPIO25_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO24_EDGE_HIGH_Pos (3UL)             /*!< GPIO24_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC1_INTE3_GPIO24_EDGE_HIGH_Msk (0x8UL)           /*!< GPIO24_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO24_EDGE_LOW_Pos (2UL)              /*!< GPIO24_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC1_INTE3_GPIO24_EDGE_LOW_Msk (0x4UL)            /*!< GPIO24_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO24_LEVEL_HIGH_Pos (1UL)            /*!< GPIO24_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC1_INTE3_GPIO24_LEVEL_HIGH_Msk (0x2UL)          /*!< GPIO24_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTE3_GPIO24_LEVEL_LOW_Pos (0UL)             /*!< GPIO24_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC1_INTE3_GPIO24_LEVEL_LOW_Msk (0x1UL)           /*!< GPIO24_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO7_EDGE_HIGH_Pos (31UL)             /*!< GPIO7_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC1_INTF0_GPIO7_EDGE_HIGH_Msk (0x80000000UL)     /*!< GPIO7_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO7_EDGE_LOW_Pos (30UL)              /*!< GPIO7_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC1_INTF0_GPIO7_EDGE_LOW_Msk (0x40000000UL)      /*!< GPIO7_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO7_LEVEL_HIGH_Pos (29UL)            /*!< GPIO7_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC1_INTF0_GPIO7_LEVEL_HIGH_Msk (0x20000000UL)    /*!< GPIO7_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO7_LEVEL_LOW_Pos (28UL)             /*!< GPIO7_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC1_INTF0_GPIO7_LEVEL_LOW_Msk (0x10000000UL)     /*!< GPIO7_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO6_EDGE_HIGH_Pos (27UL)             /*!< GPIO6_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC1_INTF0_GPIO6_EDGE_HIGH_Msk (0x8000000UL)      /*!< GPIO6_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO6_EDGE_LOW_Pos (26UL)              /*!< GPIO6_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC1_INTF0_GPIO6_EDGE_LOW_Msk (0x4000000UL)       /*!< GPIO6_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO6_LEVEL_HIGH_Pos (25UL)            /*!< GPIO6_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC1_INTF0_GPIO6_LEVEL_HIGH_Msk (0x2000000UL)     /*!< GPIO6_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO6_LEVEL_LOW_Pos (24UL)             /*!< GPIO6_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC1_INTF0_GPIO6_LEVEL_LOW_Msk (0x1000000UL)      /*!< GPIO6_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO5_EDGE_HIGH_Pos (23UL)             /*!< GPIO5_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC1_INTF0_GPIO5_EDGE_HIGH_Msk (0x800000UL)       /*!< GPIO5_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO5_EDGE_LOW_Pos (22UL)              /*!< GPIO5_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC1_INTF0_GPIO5_EDGE_LOW_Msk (0x400000UL)        /*!< GPIO5_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO5_LEVEL_HIGH_Pos (21UL)            /*!< GPIO5_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC1_INTF0_GPIO5_LEVEL_HIGH_Msk (0x200000UL)      /*!< GPIO5_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO5_LEVEL_LOW_Pos (20UL)             /*!< GPIO5_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC1_INTF0_GPIO5_LEVEL_LOW_Msk (0x100000UL)       /*!< GPIO5_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO4_EDGE_HIGH_Pos (19UL)             /*!< GPIO4_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC1_INTF0_GPIO4_EDGE_HIGH_Msk (0x80000UL)        /*!< GPIO4_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO4_EDGE_LOW_Pos (18UL)              /*!< GPIO4_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC1_INTF0_GPIO4_EDGE_LOW_Msk (0x40000UL)         /*!< GPIO4_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO4_LEVEL_HIGH_Pos (17UL)            /*!< GPIO4_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC1_INTF0_GPIO4_LEVEL_HIGH_Msk (0x20000UL)       /*!< GPIO4_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO4_LEVEL_LOW_Pos (16UL)             /*!< GPIO4_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC1_INTF0_GPIO4_LEVEL_LOW_Msk (0x10000UL)        /*!< GPIO4_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO3_EDGE_HIGH_Pos (15UL)             /*!< GPIO3_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC1_INTF0_GPIO3_EDGE_HIGH_Msk (0x8000UL)         /*!< GPIO3_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO3_EDGE_LOW_Pos (14UL)              /*!< GPIO3_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC1_INTF0_GPIO3_EDGE_LOW_Msk (0x4000UL)          /*!< GPIO3_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO3_LEVEL_HIGH_Pos (13UL)            /*!< GPIO3_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC1_INTF0_GPIO3_LEVEL_HIGH_Msk (0x2000UL)        /*!< GPIO3_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO3_LEVEL_LOW_Pos (12UL)             /*!< GPIO3_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC1_INTF0_GPIO3_LEVEL_LOW_Msk (0x1000UL)         /*!< GPIO3_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO2_EDGE_HIGH_Pos (11UL)             /*!< GPIO2_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC1_INTF0_GPIO2_EDGE_HIGH_Msk (0x800UL)          /*!< GPIO2_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO2_EDGE_LOW_Pos (10UL)              /*!< GPIO2_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC1_INTF0_GPIO2_EDGE_LOW_Msk (0x400UL)           /*!< GPIO2_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO2_LEVEL_HIGH_Pos (9UL)             /*!< GPIO2_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC1_INTF0_GPIO2_LEVEL_HIGH_Msk (0x200UL)         /*!< GPIO2_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO2_LEVEL_LOW_Pos (8UL)              /*!< GPIO2_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC1_INTF0_GPIO2_LEVEL_LOW_Msk (0x100UL)          /*!< GPIO2_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO1_EDGE_HIGH_Pos (7UL)              /*!< GPIO1_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC1_INTF0_GPIO1_EDGE_HIGH_Msk (0x80UL)           /*!< GPIO1_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO1_EDGE_LOW_Pos (6UL)               /*!< GPIO1_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC1_INTF0_GPIO1_EDGE_LOW_Msk (0x40UL)            /*!< GPIO1_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO1_LEVEL_HIGH_Pos (5UL)             /*!< GPIO1_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC1_INTF0_GPIO1_LEVEL_HIGH_Msk (0x20UL)          /*!< GPIO1_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO1_LEVEL_LOW_Pos (4UL)              /*!< GPIO1_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC1_INTF0_GPIO1_LEVEL_LOW_Msk (0x10UL)           /*!< GPIO1_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO0_EDGE_HIGH_Pos (3UL)              /*!< GPIO0_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC1_INTF0_GPIO0_EDGE_HIGH_Msk (0x8UL)            /*!< GPIO0_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO0_EDGE_LOW_Pos (2UL)               /*!< GPIO0_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC1_INTF0_GPIO0_EDGE_LOW_Msk (0x4UL)             /*!< GPIO0_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO0_LEVEL_HIGH_Pos (1UL)             /*!< GPIO0_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC1_INTF0_GPIO0_LEVEL_HIGH_Msk (0x2UL)           /*!< GPIO0_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF0_GPIO0_LEVEL_LOW_Pos (0UL)              /*!< GPIO0_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC1_INTF0_GPIO0_LEVEL_LOW_Msk (0x1UL)            /*!< GPIO0_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO15_EDGE_HIGH_Pos (31UL)            /*!< GPIO15_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC1_INTF1_GPIO15_EDGE_HIGH_Msk (0x80000000UL)    /*!< GPIO15_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO15_EDGE_LOW_Pos (30UL)             /*!< GPIO15_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC1_INTF1_GPIO15_EDGE_LOW_Msk (0x40000000UL)     /*!< GPIO15_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO15_LEVEL_HIGH_Pos (29UL)           /*!< GPIO15_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC1_INTF1_GPIO15_LEVEL_HIGH_Msk (0x20000000UL)   /*!< GPIO15_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO15_LEVEL_LOW_Pos (28UL)            /*!< GPIO15_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC1_INTF1_GPIO15_LEVEL_LOW_Msk (0x10000000UL)    /*!< GPIO15_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO14_EDGE_HIGH_Pos (27UL)            /*!< GPIO14_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC1_INTF1_GPIO14_EDGE_HIGH_Msk (0x8000000UL)     /*!< GPIO14_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO14_EDGE_LOW_Pos (26UL)             /*!< GPIO14_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC1_INTF1_GPIO14_EDGE_LOW_Msk (0x4000000UL)      /*!< GPIO14_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO14_LEVEL_HIGH_Pos (25UL)           /*!< GPIO14_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC1_INTF1_GPIO14_LEVEL_HIGH_Msk (0x2000000UL)    /*!< GPIO14_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO14_LEVEL_LOW_Pos (24UL)            /*!< GPIO14_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC1_INTF1_GPIO14_LEVEL_LOW_Msk (0x1000000UL)     /*!< GPIO14_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO13_EDGE_HIGH_Pos (23UL)            /*!< GPIO13_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC1_INTF1_GPIO13_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO13_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO13_EDGE_LOW_Pos (22UL)             /*!< GPIO13_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC1_INTF1_GPIO13_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO13_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO13_LEVEL_HIGH_Pos (21UL)           /*!< GPIO13_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC1_INTF1_GPIO13_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO13_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO13_LEVEL_LOW_Pos (20UL)            /*!< GPIO13_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC1_INTF1_GPIO13_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO13_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO12_EDGE_HIGH_Pos (19UL)            /*!< GPIO12_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC1_INTF1_GPIO12_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO12_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO12_EDGE_LOW_Pos (18UL)             /*!< GPIO12_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC1_INTF1_GPIO12_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO12_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO12_LEVEL_HIGH_Pos (17UL)           /*!< GPIO12_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC1_INTF1_GPIO12_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO12_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO12_LEVEL_LOW_Pos (16UL)            /*!< GPIO12_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC1_INTF1_GPIO12_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO12_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO11_EDGE_HIGH_Pos (15UL)            /*!< GPIO11_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC1_INTF1_GPIO11_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO11_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO11_EDGE_LOW_Pos (14UL)             /*!< GPIO11_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC1_INTF1_GPIO11_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO11_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO11_LEVEL_HIGH_Pos (13UL)           /*!< GPIO11_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC1_INTF1_GPIO11_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO11_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO11_LEVEL_LOW_Pos (12UL)            /*!< GPIO11_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC1_INTF1_GPIO11_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO11_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO10_EDGE_HIGH_Pos (11UL)            /*!< GPIO10_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC1_INTF1_GPIO10_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO10_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO10_EDGE_LOW_Pos (10UL)             /*!< GPIO10_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC1_INTF1_GPIO10_EDGE_LOW_Msk (0x400UL)          /*!< GPIO10_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO10_LEVEL_HIGH_Pos (9UL)            /*!< GPIO10_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC1_INTF1_GPIO10_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO10_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO10_LEVEL_LOW_Pos (8UL)             /*!< GPIO10_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC1_INTF1_GPIO10_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO10_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO9_EDGE_HIGH_Pos (7UL)              /*!< GPIO9_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC1_INTF1_GPIO9_EDGE_HIGH_Msk (0x80UL)           /*!< GPIO9_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO9_EDGE_LOW_Pos (6UL)               /*!< GPIO9_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC1_INTF1_GPIO9_EDGE_LOW_Msk (0x40UL)            /*!< GPIO9_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO9_LEVEL_HIGH_Pos (5UL)             /*!< GPIO9_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC1_INTF1_GPIO9_LEVEL_HIGH_Msk (0x20UL)          /*!< GPIO9_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO9_LEVEL_LOW_Pos (4UL)              /*!< GPIO9_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC1_INTF1_GPIO9_LEVEL_LOW_Msk (0x10UL)           /*!< GPIO9_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO8_EDGE_HIGH_Pos (3UL)              /*!< GPIO8_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC1_INTF1_GPIO8_EDGE_HIGH_Msk (0x8UL)            /*!< GPIO8_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO8_EDGE_LOW_Pos (2UL)               /*!< GPIO8_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC1_INTF1_GPIO8_EDGE_LOW_Msk (0x4UL)             /*!< GPIO8_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO8_LEVEL_HIGH_Pos (1UL)             /*!< GPIO8_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC1_INTF1_GPIO8_LEVEL_HIGH_Msk (0x2UL)           /*!< GPIO8_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF1_GPIO8_LEVEL_LOW_Pos (0UL)              /*!< GPIO8_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC1_INTF1_GPIO8_LEVEL_LOW_Msk (0x1UL)            /*!< GPIO8_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO23_EDGE_HIGH_Pos (31UL)            /*!< GPIO23_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC1_INTF2_GPIO23_EDGE_HIGH_Msk (0x80000000UL)    /*!< GPIO23_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO23_EDGE_LOW_Pos (30UL)             /*!< GPIO23_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC1_INTF2_GPIO23_EDGE_LOW_Msk (0x40000000UL)     /*!< GPIO23_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO23_LEVEL_HIGH_Pos (29UL)           /*!< GPIO23_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC1_INTF2_GPIO23_LEVEL_HIGH_Msk (0x20000000UL)   /*!< GPIO23_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO23_LEVEL_LOW_Pos (28UL)            /*!< GPIO23_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC1_INTF2_GPIO23_LEVEL_LOW_Msk (0x10000000UL)    /*!< GPIO23_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO22_EDGE_HIGH_Pos (27UL)            /*!< GPIO22_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC1_INTF2_GPIO22_EDGE_HIGH_Msk (0x8000000UL)     /*!< GPIO22_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO22_EDGE_LOW_Pos (26UL)             /*!< GPIO22_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC1_INTF2_GPIO22_EDGE_LOW_Msk (0x4000000UL)      /*!< GPIO22_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO22_LEVEL_HIGH_Pos (25UL)           /*!< GPIO22_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC1_INTF2_GPIO22_LEVEL_HIGH_Msk (0x2000000UL)    /*!< GPIO22_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO22_LEVEL_LOW_Pos (24UL)            /*!< GPIO22_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC1_INTF2_GPIO22_LEVEL_LOW_Msk (0x1000000UL)     /*!< GPIO22_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO21_EDGE_HIGH_Pos (23UL)            /*!< GPIO21_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC1_INTF2_GPIO21_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO21_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO21_EDGE_LOW_Pos (22UL)             /*!< GPIO21_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC1_INTF2_GPIO21_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO21_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO21_LEVEL_HIGH_Pos (21UL)           /*!< GPIO21_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC1_INTF2_GPIO21_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO21_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO21_LEVEL_LOW_Pos (20UL)            /*!< GPIO21_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC1_INTF2_GPIO21_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO21_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO20_EDGE_HIGH_Pos (19UL)            /*!< GPIO20_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC1_INTF2_GPIO20_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO20_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO20_EDGE_LOW_Pos (18UL)             /*!< GPIO20_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC1_INTF2_GPIO20_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO20_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO20_LEVEL_HIGH_Pos (17UL)           /*!< GPIO20_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC1_INTF2_GPIO20_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO20_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO20_LEVEL_LOW_Pos (16UL)            /*!< GPIO20_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC1_INTF2_GPIO20_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO20_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO19_EDGE_HIGH_Pos (15UL)            /*!< GPIO19_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC1_INTF2_GPIO19_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO19_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO19_EDGE_LOW_Pos (14UL)             /*!< GPIO19_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC1_INTF2_GPIO19_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO19_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO19_LEVEL_HIGH_Pos (13UL)           /*!< GPIO19_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC1_INTF2_GPIO19_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO19_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO19_LEVEL_LOW_Pos (12UL)            /*!< GPIO19_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC1_INTF2_GPIO19_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO19_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO18_EDGE_HIGH_Pos (11UL)            /*!< GPIO18_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC1_INTF2_GPIO18_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO18_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO18_EDGE_LOW_Pos (10UL)             /*!< GPIO18_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC1_INTF2_GPIO18_EDGE_LOW_Msk (0x400UL)          /*!< GPIO18_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO18_LEVEL_HIGH_Pos (9UL)            /*!< GPIO18_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC1_INTF2_GPIO18_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO18_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO18_LEVEL_LOW_Pos (8UL)             /*!< GPIO18_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC1_INTF2_GPIO18_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO18_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO17_EDGE_HIGH_Pos (7UL)             /*!< GPIO17_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC1_INTF2_GPIO17_EDGE_HIGH_Msk (0x80UL)          /*!< GPIO17_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO17_EDGE_LOW_Pos (6UL)              /*!< GPIO17_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC1_INTF2_GPIO17_EDGE_LOW_Msk (0x40UL)           /*!< GPIO17_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO17_LEVEL_HIGH_Pos (5UL)            /*!< GPIO17_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC1_INTF2_GPIO17_LEVEL_HIGH_Msk (0x20UL)         /*!< GPIO17_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO17_LEVEL_LOW_Pos (4UL)             /*!< GPIO17_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC1_INTF2_GPIO17_LEVEL_LOW_Msk (0x10UL)          /*!< GPIO17_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO16_EDGE_HIGH_Pos (3UL)             /*!< GPIO16_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC1_INTF2_GPIO16_EDGE_HIGH_Msk (0x8UL)           /*!< GPIO16_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO16_EDGE_LOW_Pos (2UL)              /*!< GPIO16_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC1_INTF2_GPIO16_EDGE_LOW_Msk (0x4UL)            /*!< GPIO16_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO16_LEVEL_HIGH_Pos (1UL)            /*!< GPIO16_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC1_INTF2_GPIO16_LEVEL_HIGH_Msk (0x2UL)          /*!< GPIO16_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF2_GPIO16_LEVEL_LOW_Pos (0UL)             /*!< GPIO16_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC1_INTF2_GPIO16_LEVEL_LOW_Msk (0x1UL)           /*!< GPIO16_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO29_EDGE_HIGH_Pos (23UL)            /*!< GPIO29_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC1_INTF3_GPIO29_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO29_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO29_EDGE_LOW_Pos (22UL)             /*!< GPIO29_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC1_INTF3_GPIO29_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO29_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO29_LEVEL_HIGH_Pos (21UL)           /*!< GPIO29_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC1_INTF3_GPIO29_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO29_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO29_LEVEL_LOW_Pos (20UL)            /*!< GPIO29_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC1_INTF3_GPIO29_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO29_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO28_EDGE_HIGH_Pos (19UL)            /*!< GPIO28_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC1_INTF3_GPIO28_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO28_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO28_EDGE_LOW_Pos (18UL)             /*!< GPIO28_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC1_INTF3_GPIO28_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO28_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO28_LEVEL_HIGH_Pos (17UL)           /*!< GPIO28_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC1_INTF3_GPIO28_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO28_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO28_LEVEL_LOW_Pos (16UL)            /*!< GPIO28_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC1_INTF3_GPIO28_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO28_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO27_EDGE_HIGH_Pos (15UL)            /*!< GPIO27_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC1_INTF3_GPIO27_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO27_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO27_EDGE_LOW_Pos (14UL)             /*!< GPIO27_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC1_INTF3_GPIO27_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO27_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO27_LEVEL_HIGH_Pos (13UL)           /*!< GPIO27_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC1_INTF3_GPIO27_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO27_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO27_LEVEL_LOW_Pos (12UL)            /*!< GPIO27_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC1_INTF3_GPIO27_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO27_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO26_EDGE_HIGH_Pos (11UL)            /*!< GPIO26_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC1_INTF3_GPIO26_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO26_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO26_EDGE_LOW_Pos (10UL)             /*!< GPIO26_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC1_INTF3_GPIO26_EDGE_LOW_Msk (0x400UL)          /*!< GPIO26_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO26_LEVEL_HIGH_Pos (9UL)            /*!< GPIO26_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC1_INTF3_GPIO26_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO26_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO26_LEVEL_LOW_Pos (8UL)             /*!< GPIO26_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC1_INTF3_GPIO26_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO26_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO25_EDGE_HIGH_Pos (7UL)             /*!< GPIO25_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC1_INTF3_GPIO25_EDGE_HIGH_Msk (0x80UL)          /*!< GPIO25_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO25_EDGE_LOW_Pos (6UL)              /*!< GPIO25_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC1_INTF3_GPIO25_EDGE_LOW_Msk (0x40UL)           /*!< GPIO25_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO25_LEVEL_HIGH_Pos (5UL)            /*!< GPIO25_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC1_INTF3_GPIO25_LEVEL_HIGH_Msk (0x20UL)         /*!< GPIO25_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO25_LEVEL_LOW_Pos (4UL)             /*!< GPIO25_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC1_INTF3_GPIO25_LEVEL_LOW_Msk (0x10UL)          /*!< GPIO25_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO24_EDGE_HIGH_Pos (3UL)             /*!< GPIO24_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC1_INTF3_GPIO24_EDGE_HIGH_Msk (0x8UL)           /*!< GPIO24_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO24_EDGE_LOW_Pos (2UL)              /*!< GPIO24_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC1_INTF3_GPIO24_EDGE_LOW_Msk (0x4UL)            /*!< GPIO24_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO24_LEVEL_HIGH_Pos (1UL)            /*!< GPIO24_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC1_INTF3_GPIO24_LEVEL_HIGH_Msk (0x2UL)          /*!< GPIO24_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTF3_GPIO24_LEVEL_LOW_Pos (0UL)             /*!< GPIO24_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC1_INTF3_GPIO24_LEVEL_LOW_Msk (0x1UL)           /*!< GPIO24_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO7_EDGE_HIGH_Pos (31UL)             /*!< GPIO7_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC1_INTS0_GPIO7_EDGE_HIGH_Msk (0x80000000UL)     /*!< GPIO7_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO7_EDGE_LOW_Pos (30UL)              /*!< GPIO7_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC1_INTS0_GPIO7_EDGE_LOW_Msk (0x40000000UL)      /*!< GPIO7_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO7_LEVEL_HIGH_Pos (29UL)            /*!< GPIO7_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC1_INTS0_GPIO7_LEVEL_HIGH_Msk (0x20000000UL)    /*!< GPIO7_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO7_LEVEL_LOW_Pos (28UL)             /*!< GPIO7_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC1_INTS0_GPIO7_LEVEL_LOW_Msk (0x10000000UL)     /*!< GPIO7_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO6_EDGE_HIGH_Pos (27UL)             /*!< GPIO6_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC1_INTS0_GPIO6_EDGE_HIGH_Msk (0x8000000UL)      /*!< GPIO6_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO6_EDGE_LOW_Pos (26UL)              /*!< GPIO6_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC1_INTS0_GPIO6_EDGE_LOW_Msk (0x4000000UL)       /*!< GPIO6_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO6_LEVEL_HIGH_Pos (25UL)            /*!< GPIO6_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC1_INTS0_GPIO6_LEVEL_HIGH_Msk (0x2000000UL)     /*!< GPIO6_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO6_LEVEL_LOW_Pos (24UL)             /*!< GPIO6_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC1_INTS0_GPIO6_LEVEL_LOW_Msk (0x1000000UL)      /*!< GPIO6_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO5_EDGE_HIGH_Pos (23UL)             /*!< GPIO5_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC1_INTS0_GPIO5_EDGE_HIGH_Msk (0x800000UL)       /*!< GPIO5_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO5_EDGE_LOW_Pos (22UL)              /*!< GPIO5_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC1_INTS0_GPIO5_EDGE_LOW_Msk (0x400000UL)        /*!< GPIO5_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO5_LEVEL_HIGH_Pos (21UL)            /*!< GPIO5_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC1_INTS0_GPIO5_LEVEL_HIGH_Msk (0x200000UL)      /*!< GPIO5_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO5_LEVEL_LOW_Pos (20UL)             /*!< GPIO5_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC1_INTS0_GPIO5_LEVEL_LOW_Msk (0x100000UL)       /*!< GPIO5_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO4_EDGE_HIGH_Pos (19UL)             /*!< GPIO4_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC1_INTS0_GPIO4_EDGE_HIGH_Msk (0x80000UL)        /*!< GPIO4_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO4_EDGE_LOW_Pos (18UL)              /*!< GPIO4_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC1_INTS0_GPIO4_EDGE_LOW_Msk (0x40000UL)         /*!< GPIO4_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO4_LEVEL_HIGH_Pos (17UL)            /*!< GPIO4_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC1_INTS0_GPIO4_LEVEL_HIGH_Msk (0x20000UL)       /*!< GPIO4_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO4_LEVEL_LOW_Pos (16UL)             /*!< GPIO4_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC1_INTS0_GPIO4_LEVEL_LOW_Msk (0x10000UL)        /*!< GPIO4_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO3_EDGE_HIGH_Pos (15UL)             /*!< GPIO3_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC1_INTS0_GPIO3_EDGE_HIGH_Msk (0x8000UL)         /*!< GPIO3_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO3_EDGE_LOW_Pos (14UL)              /*!< GPIO3_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC1_INTS0_GPIO3_EDGE_LOW_Msk (0x4000UL)          /*!< GPIO3_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO3_LEVEL_HIGH_Pos (13UL)            /*!< GPIO3_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC1_INTS0_GPIO3_LEVEL_HIGH_Msk (0x2000UL)        /*!< GPIO3_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO3_LEVEL_LOW_Pos (12UL)             /*!< GPIO3_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC1_INTS0_GPIO3_LEVEL_LOW_Msk (0x1000UL)         /*!< GPIO3_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO2_EDGE_HIGH_Pos (11UL)             /*!< GPIO2_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC1_INTS0_GPIO2_EDGE_HIGH_Msk (0x800UL)          /*!< GPIO2_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO2_EDGE_LOW_Pos (10UL)              /*!< GPIO2_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC1_INTS0_GPIO2_EDGE_LOW_Msk (0x400UL)           /*!< GPIO2_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO2_LEVEL_HIGH_Pos (9UL)             /*!< GPIO2_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC1_INTS0_GPIO2_LEVEL_HIGH_Msk (0x200UL)         /*!< GPIO2_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO2_LEVEL_LOW_Pos (8UL)              /*!< GPIO2_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC1_INTS0_GPIO2_LEVEL_LOW_Msk (0x100UL)          /*!< GPIO2_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO1_EDGE_HIGH_Pos (7UL)              /*!< GPIO1_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC1_INTS0_GPIO1_EDGE_HIGH_Msk (0x80UL)           /*!< GPIO1_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO1_EDGE_LOW_Pos (6UL)               /*!< GPIO1_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC1_INTS0_GPIO1_EDGE_LOW_Msk (0x40UL)            /*!< GPIO1_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO1_LEVEL_HIGH_Pos (5UL)             /*!< GPIO1_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC1_INTS0_GPIO1_LEVEL_HIGH_Msk (0x20UL)          /*!< GPIO1_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO1_LEVEL_LOW_Pos (4UL)              /*!< GPIO1_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC1_INTS0_GPIO1_LEVEL_LOW_Msk (0x10UL)           /*!< GPIO1_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO0_EDGE_HIGH_Pos (3UL)              /*!< GPIO0_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC1_INTS0_GPIO0_EDGE_HIGH_Msk (0x8UL)            /*!< GPIO0_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO0_EDGE_LOW_Pos (2UL)               /*!< GPIO0_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC1_INTS0_GPIO0_EDGE_LOW_Msk (0x4UL)             /*!< GPIO0_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO0_LEVEL_HIGH_Pos (1UL)             /*!< GPIO0_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC1_INTS0_GPIO0_LEVEL_HIGH_Msk (0x2UL)           /*!< GPIO0_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS0_GPIO0_LEVEL_LOW_Pos (0UL)              /*!< GPIO0_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC1_INTS0_GPIO0_LEVEL_LOW_Msk (0x1UL)            /*!< GPIO0_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO15_EDGE_HIGH_Pos (31UL)            /*!< GPIO15_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC1_INTS1_GPIO15_EDGE_HIGH_Msk (0x80000000UL)    /*!< GPIO15_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO15_EDGE_LOW_Pos (30UL)             /*!< GPIO15_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC1_INTS1_GPIO15_EDGE_LOW_Msk (0x40000000UL)     /*!< GPIO15_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO15_LEVEL_HIGH_Pos (29UL)           /*!< GPIO15_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC1_INTS1_GPIO15_LEVEL_HIGH_Msk (0x20000000UL)   /*!< GPIO15_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO15_LEVEL_LOW_Pos (28UL)            /*!< GPIO15_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC1_INTS1_GPIO15_LEVEL_LOW_Msk (0x10000000UL)    /*!< GPIO15_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO14_EDGE_HIGH_Pos (27UL)            /*!< GPIO14_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC1_INTS1_GPIO14_EDGE_HIGH_Msk (0x8000000UL)     /*!< GPIO14_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO14_EDGE_LOW_Pos (26UL)             /*!< GPIO14_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC1_INTS1_GPIO14_EDGE_LOW_Msk (0x4000000UL)      /*!< GPIO14_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO14_LEVEL_HIGH_Pos (25UL)           /*!< GPIO14_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC1_INTS1_GPIO14_LEVEL_HIGH_Msk (0x2000000UL)    /*!< GPIO14_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO14_LEVEL_LOW_Pos (24UL)            /*!< GPIO14_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC1_INTS1_GPIO14_LEVEL_LOW_Msk (0x1000000UL)     /*!< GPIO14_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO13_EDGE_HIGH_Pos (23UL)            /*!< GPIO13_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC1_INTS1_GPIO13_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO13_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO13_EDGE_LOW_Pos (22UL)             /*!< GPIO13_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC1_INTS1_GPIO13_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO13_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO13_LEVEL_HIGH_Pos (21UL)           /*!< GPIO13_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC1_INTS1_GPIO13_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO13_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO13_LEVEL_LOW_Pos (20UL)            /*!< GPIO13_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC1_INTS1_GPIO13_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO13_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO12_EDGE_HIGH_Pos (19UL)            /*!< GPIO12_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC1_INTS1_GPIO12_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO12_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO12_EDGE_LOW_Pos (18UL)             /*!< GPIO12_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC1_INTS1_GPIO12_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO12_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO12_LEVEL_HIGH_Pos (17UL)           /*!< GPIO12_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC1_INTS1_GPIO12_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO12_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO12_LEVEL_LOW_Pos (16UL)            /*!< GPIO12_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC1_INTS1_GPIO12_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO12_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO11_EDGE_HIGH_Pos (15UL)            /*!< GPIO11_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC1_INTS1_GPIO11_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO11_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO11_EDGE_LOW_Pos (14UL)             /*!< GPIO11_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC1_INTS1_GPIO11_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO11_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO11_LEVEL_HIGH_Pos (13UL)           /*!< GPIO11_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC1_INTS1_GPIO11_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO11_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO11_LEVEL_LOW_Pos (12UL)            /*!< GPIO11_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC1_INTS1_GPIO11_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO11_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO10_EDGE_HIGH_Pos (11UL)            /*!< GPIO10_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC1_INTS1_GPIO10_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO10_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO10_EDGE_LOW_Pos (10UL)             /*!< GPIO10_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC1_INTS1_GPIO10_EDGE_LOW_Msk (0x400UL)          /*!< GPIO10_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO10_LEVEL_HIGH_Pos (9UL)            /*!< GPIO10_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC1_INTS1_GPIO10_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO10_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO10_LEVEL_LOW_Pos (8UL)             /*!< GPIO10_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC1_INTS1_GPIO10_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO10_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO9_EDGE_HIGH_Pos (7UL)              /*!< GPIO9_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC1_INTS1_GPIO9_EDGE_HIGH_Msk (0x80UL)           /*!< GPIO9_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO9_EDGE_LOW_Pos (6UL)               /*!< GPIO9_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC1_INTS1_GPIO9_EDGE_LOW_Msk (0x40UL)            /*!< GPIO9_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO9_LEVEL_HIGH_Pos (5UL)             /*!< GPIO9_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC1_INTS1_GPIO9_LEVEL_HIGH_Msk (0x20UL)          /*!< GPIO9_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO9_LEVEL_LOW_Pos (4UL)              /*!< GPIO9_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC1_INTS1_GPIO9_LEVEL_LOW_Msk (0x10UL)           /*!< GPIO9_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO8_EDGE_HIGH_Pos (3UL)              /*!< GPIO8_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC1_INTS1_GPIO8_EDGE_HIGH_Msk (0x8UL)            /*!< GPIO8_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO8_EDGE_LOW_Pos (2UL)               /*!< GPIO8_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC1_INTS1_GPIO8_EDGE_LOW_Msk (0x4UL)             /*!< GPIO8_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO8_LEVEL_HIGH_Pos (1UL)             /*!< GPIO8_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC1_INTS1_GPIO8_LEVEL_HIGH_Msk (0x2UL)           /*!< GPIO8_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS1_GPIO8_LEVEL_LOW_Pos (0UL)              /*!< GPIO8_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC1_INTS1_GPIO8_LEVEL_LOW_Msk (0x1UL)            /*!< GPIO8_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO23_EDGE_HIGH_Pos (31UL)            /*!< GPIO23_EDGE_HIGH (Bit 31) */
#define IO_BANK0_PROC1_INTS2_GPIO23_EDGE_HIGH_Msk (0x80000000UL)    /*!< GPIO23_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO23_EDGE_LOW_Pos (30UL)             /*!< GPIO23_EDGE_LOW (Bit 30) */
#define IO_BANK0_PROC1_INTS2_GPIO23_EDGE_LOW_Msk (0x40000000UL)     /*!< GPIO23_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO23_LEVEL_HIGH_Pos (29UL)           /*!< GPIO23_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_PROC1_INTS2_GPIO23_LEVEL_HIGH_Msk (0x20000000UL)   /*!< GPIO23_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO23_LEVEL_LOW_Pos (28UL)            /*!< GPIO23_LEVEL_LOW (Bit 28) */
#define IO_BANK0_PROC1_INTS2_GPIO23_LEVEL_LOW_Msk (0x10000000UL)    /*!< GPIO23_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO22_EDGE_HIGH_Pos (27UL)            /*!< GPIO22_EDGE_HIGH (Bit 27) */
#define IO_BANK0_PROC1_INTS2_GPIO22_EDGE_HIGH_Msk (0x8000000UL)     /*!< GPIO22_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO22_EDGE_LOW_Pos (26UL)             /*!< GPIO22_EDGE_LOW (Bit 26) */
#define IO_BANK0_PROC1_INTS2_GPIO22_EDGE_LOW_Msk (0x4000000UL)      /*!< GPIO22_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO22_LEVEL_HIGH_Pos (25UL)           /*!< GPIO22_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_PROC1_INTS2_GPIO22_LEVEL_HIGH_Msk (0x2000000UL)    /*!< GPIO22_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO22_LEVEL_LOW_Pos (24UL)            /*!< GPIO22_LEVEL_LOW (Bit 24) */
#define IO_BANK0_PROC1_INTS2_GPIO22_LEVEL_LOW_Msk (0x1000000UL)     /*!< GPIO22_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO21_EDGE_HIGH_Pos (23UL)            /*!< GPIO21_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC1_INTS2_GPIO21_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO21_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO21_EDGE_LOW_Pos (22UL)             /*!< GPIO21_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC1_INTS2_GPIO21_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO21_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO21_LEVEL_HIGH_Pos (21UL)           /*!< GPIO21_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC1_INTS2_GPIO21_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO21_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO21_LEVEL_LOW_Pos (20UL)            /*!< GPIO21_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC1_INTS2_GPIO21_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO21_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO20_EDGE_HIGH_Pos (19UL)            /*!< GPIO20_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC1_INTS2_GPIO20_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO20_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO20_EDGE_LOW_Pos (18UL)             /*!< GPIO20_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC1_INTS2_GPIO20_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO20_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO20_LEVEL_HIGH_Pos (17UL)           /*!< GPIO20_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC1_INTS2_GPIO20_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO20_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO20_LEVEL_LOW_Pos (16UL)            /*!< GPIO20_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC1_INTS2_GPIO20_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO20_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO19_EDGE_HIGH_Pos (15UL)            /*!< GPIO19_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC1_INTS2_GPIO19_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO19_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO19_EDGE_LOW_Pos (14UL)             /*!< GPIO19_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC1_INTS2_GPIO19_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO19_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO19_LEVEL_HIGH_Pos (13UL)           /*!< GPIO19_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC1_INTS2_GPIO19_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO19_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO19_LEVEL_LOW_Pos (12UL)            /*!< GPIO19_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC1_INTS2_GPIO19_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO19_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO18_EDGE_HIGH_Pos (11UL)            /*!< GPIO18_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC1_INTS2_GPIO18_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO18_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO18_EDGE_LOW_Pos (10UL)             /*!< GPIO18_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC1_INTS2_GPIO18_EDGE_LOW_Msk (0x400UL)          /*!< GPIO18_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO18_LEVEL_HIGH_Pos (9UL)            /*!< GPIO18_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC1_INTS2_GPIO18_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO18_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO18_LEVEL_LOW_Pos (8UL)             /*!< GPIO18_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC1_INTS2_GPIO18_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO18_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO17_EDGE_HIGH_Pos (7UL)             /*!< GPIO17_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC1_INTS2_GPIO17_EDGE_HIGH_Msk (0x80UL)          /*!< GPIO17_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO17_EDGE_LOW_Pos (6UL)              /*!< GPIO17_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC1_INTS2_GPIO17_EDGE_LOW_Msk (0x40UL)           /*!< GPIO17_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO17_LEVEL_HIGH_Pos (5UL)            /*!< GPIO17_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC1_INTS2_GPIO17_LEVEL_HIGH_Msk (0x20UL)         /*!< GPIO17_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO17_LEVEL_LOW_Pos (4UL)             /*!< GPIO17_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC1_INTS2_GPIO17_LEVEL_LOW_Msk (0x10UL)          /*!< GPIO17_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO16_EDGE_HIGH_Pos (3UL)             /*!< GPIO16_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC1_INTS2_GPIO16_EDGE_HIGH_Msk (0x8UL)           /*!< GPIO16_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO16_EDGE_LOW_Pos (2UL)              /*!< GPIO16_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC1_INTS2_GPIO16_EDGE_LOW_Msk (0x4UL)            /*!< GPIO16_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO16_LEVEL_HIGH_Pos (1UL)            /*!< GPIO16_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC1_INTS2_GPIO16_LEVEL_HIGH_Msk (0x2UL)          /*!< GPIO16_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS2_GPIO16_LEVEL_LOW_Pos (0UL)             /*!< GPIO16_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC1_INTS2_GPIO16_LEVEL_LOW_Msk (0x1UL)           /*!< GPIO16_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO29_EDGE_HIGH_Pos (23UL)            /*!< GPIO29_EDGE_HIGH (Bit 23) */
#define IO_BANK0_PROC1_INTS3_GPIO29_EDGE_HIGH_Msk (0x800000UL)      /*!< GPIO29_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO29_EDGE_LOW_Pos (22UL)             /*!< GPIO29_EDGE_LOW (Bit 22) */
#define IO_BANK0_PROC1_INTS3_GPIO29_EDGE_LOW_Msk (0x400000UL)       /*!< GPIO29_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO29_LEVEL_HIGH_Pos (21UL)           /*!< GPIO29_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_PROC1_INTS3_GPIO29_LEVEL_HIGH_Msk (0x200000UL)     /*!< GPIO29_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO29_LEVEL_LOW_Pos (20UL)            /*!< GPIO29_LEVEL_LOW (Bit 20) */
#define IO_BANK0_PROC1_INTS3_GPIO29_LEVEL_LOW_Msk (0x100000UL)      /*!< GPIO29_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO28_EDGE_HIGH_Pos (19UL)            /*!< GPIO28_EDGE_HIGH (Bit 19) */
#define IO_BANK0_PROC1_INTS3_GPIO28_EDGE_HIGH_Msk (0x80000UL)       /*!< GPIO28_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO28_EDGE_LOW_Pos (18UL)             /*!< GPIO28_EDGE_LOW (Bit 18) */
#define IO_BANK0_PROC1_INTS3_GPIO28_EDGE_LOW_Msk (0x40000UL)        /*!< GPIO28_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO28_LEVEL_HIGH_Pos (17UL)           /*!< GPIO28_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_PROC1_INTS3_GPIO28_LEVEL_HIGH_Msk (0x20000UL)      /*!< GPIO28_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO28_LEVEL_LOW_Pos (16UL)            /*!< GPIO28_LEVEL_LOW (Bit 16) */
#define IO_BANK0_PROC1_INTS3_GPIO28_LEVEL_LOW_Msk (0x10000UL)       /*!< GPIO28_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO27_EDGE_HIGH_Pos (15UL)            /*!< GPIO27_EDGE_HIGH (Bit 15) */
#define IO_BANK0_PROC1_INTS3_GPIO27_EDGE_HIGH_Msk (0x8000UL)        /*!< GPIO27_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO27_EDGE_LOW_Pos (14UL)             /*!< GPIO27_EDGE_LOW (Bit 14) */
#define IO_BANK0_PROC1_INTS3_GPIO27_EDGE_LOW_Msk (0x4000UL)         /*!< GPIO27_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO27_LEVEL_HIGH_Pos (13UL)           /*!< GPIO27_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_PROC1_INTS3_GPIO27_LEVEL_HIGH_Msk (0x2000UL)       /*!< GPIO27_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO27_LEVEL_LOW_Pos (12UL)            /*!< GPIO27_LEVEL_LOW (Bit 12) */
#define IO_BANK0_PROC1_INTS3_GPIO27_LEVEL_LOW_Msk (0x1000UL)        /*!< GPIO27_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO26_EDGE_HIGH_Pos (11UL)            /*!< GPIO26_EDGE_HIGH (Bit 11) */
#define IO_BANK0_PROC1_INTS3_GPIO26_EDGE_HIGH_Msk (0x800UL)         /*!< GPIO26_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO26_EDGE_LOW_Pos (10UL)             /*!< GPIO26_EDGE_LOW (Bit 10) */
#define IO_BANK0_PROC1_INTS3_GPIO26_EDGE_LOW_Msk (0x400UL)          /*!< GPIO26_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO26_LEVEL_HIGH_Pos (9UL)            /*!< GPIO26_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_PROC1_INTS3_GPIO26_LEVEL_HIGH_Msk (0x200UL)        /*!< GPIO26_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO26_LEVEL_LOW_Pos (8UL)             /*!< GPIO26_LEVEL_LOW (Bit 8) */
#define IO_BANK0_PROC1_INTS3_GPIO26_LEVEL_LOW_Msk (0x100UL)         /*!< GPIO26_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO25_EDGE_HIGH_Pos (7UL)             /*!< GPIO25_EDGE_HIGH (Bit 7) */
#define IO_BANK0_PROC1_INTS3_GPIO25_EDGE_HIGH_Msk (0x80UL)          /*!< GPIO25_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO25_EDGE_LOW_Pos (6UL)              /*!< GPIO25_EDGE_LOW (Bit 6) */
#define IO_BANK0_PROC1_INTS3_GPIO25_EDGE_LOW_Msk (0x40UL)           /*!< GPIO25_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO25_LEVEL_HIGH_Pos (5UL)            /*!< GPIO25_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_PROC1_INTS3_GPIO25_LEVEL_HIGH_Msk (0x20UL)         /*!< GPIO25_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO25_LEVEL_LOW_Pos (4UL)             /*!< GPIO25_LEVEL_LOW (Bit 4) */
#define IO_BANK0_PROC1_INTS3_GPIO25_LEVEL_LOW_Msk (0x10UL)          /*!< GPIO25_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO24_EDGE_HIGH_Pos (3UL)             /*!< GPIO24_EDGE_HIGH (Bit 3) */
#define IO_BANK0_PROC1_INTS3_GPIO24_EDGE_HIGH_Msk (0x8UL)           /*!< GPIO24_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO24_EDGE_LOW_Pos (2UL)              /*!< GPIO24_EDGE_LOW (Bit 2) */
#define IO_BANK0_PROC1_INTS3_GPIO24_EDGE_LOW_Msk (0x4UL)            /*!< GPIO24_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO24_LEVEL_HIGH_Pos (1UL)            /*!< GPIO24_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_PROC1_INTS3_GPIO24_LEVEL_HIGH_Msk (0x2UL)          /*!< GPIO24_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_PROC1_INTS3_GPIO24_LEVEL_LOW_Pos (0UL)             /*!< GPIO24_LEVEL_LOW (Bit 0) */
#define IO_BANK0_PROC1_INTS3_GPIO24_LEVEL_LOW_Msk (0x1UL)           /*!< GPIO24_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO7_EDGE_HIGH_Pos (31UL)      /*!< GPIO7_EDGE_HIGH (Bit 31) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO7_EDGE_HIGH_Msk (0x80000000UL) /*!< GPIO7_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO7_EDGE_LOW_Pos (30UL)       /*!< GPIO7_EDGE_LOW (Bit 30) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO7_EDGE_LOW_Msk (0x40000000UL) /*!< GPIO7_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO7_LEVEL_HIGH_Pos (29UL)     /*!< GPIO7_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO7_LEVEL_HIGH_Msk (0x20000000UL) /*!< GPIO7_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO7_LEVEL_LOW_Pos (28UL)      /*!< GPIO7_LEVEL_LOW (Bit 28) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO7_LEVEL_LOW_Msk (0x10000000UL) /*!< GPIO7_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO6_EDGE_HIGH_Pos (27UL)      /*!< GPIO6_EDGE_HIGH (Bit 27) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO6_EDGE_HIGH_Msk (0x8000000UL) /*!< GPIO6_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO6_EDGE_LOW_Pos (26UL)       /*!< GPIO6_EDGE_LOW (Bit 26) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO6_EDGE_LOW_Msk (0x4000000UL) /*!< GPIO6_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO6_LEVEL_HIGH_Pos (25UL)     /*!< GPIO6_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO6_LEVEL_HIGH_Msk (0x2000000UL) /*!< GPIO6_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO6_LEVEL_LOW_Pos (24UL)      /*!< GPIO6_LEVEL_LOW (Bit 24) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO6_LEVEL_LOW_Msk (0x1000000UL) /*!< GPIO6_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO5_EDGE_HIGH_Pos (23UL)      /*!< GPIO5_EDGE_HIGH (Bit 23) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO5_EDGE_HIGH_Msk (0x800000UL) /*!< GPIO5_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO5_EDGE_LOW_Pos (22UL)       /*!< GPIO5_EDGE_LOW (Bit 22) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO5_EDGE_LOW_Msk (0x400000UL) /*!< GPIO5_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO5_LEVEL_HIGH_Pos (21UL)     /*!< GPIO5_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO5_LEVEL_HIGH_Msk (0x200000UL) /*!< GPIO5_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO5_LEVEL_LOW_Pos (20UL)      /*!< GPIO5_LEVEL_LOW (Bit 20) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO5_LEVEL_LOW_Msk (0x100000UL) /*!< GPIO5_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO4_EDGE_HIGH_Pos (19UL)      /*!< GPIO4_EDGE_HIGH (Bit 19) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO4_EDGE_HIGH_Msk (0x80000UL) /*!< GPIO4_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO4_EDGE_LOW_Pos (18UL)       /*!< GPIO4_EDGE_LOW (Bit 18) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO4_EDGE_LOW_Msk (0x40000UL)  /*!< GPIO4_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO4_LEVEL_HIGH_Pos (17UL)     /*!< GPIO4_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO4_LEVEL_HIGH_Msk (0x20000UL) /*!< GPIO4_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO4_LEVEL_LOW_Pos (16UL)      /*!< GPIO4_LEVEL_LOW (Bit 16) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO4_LEVEL_LOW_Msk (0x10000UL) /*!< GPIO4_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO3_EDGE_HIGH_Pos (15UL)      /*!< GPIO3_EDGE_HIGH (Bit 15) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO3_EDGE_HIGH_Msk (0x8000UL)  /*!< GPIO3_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO3_EDGE_LOW_Pos (14UL)       /*!< GPIO3_EDGE_LOW (Bit 14) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO3_EDGE_LOW_Msk (0x4000UL)   /*!< GPIO3_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO3_LEVEL_HIGH_Pos (13UL)     /*!< GPIO3_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO3_LEVEL_HIGH_Msk (0x2000UL) /*!< GPIO3_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO3_LEVEL_LOW_Pos (12UL)      /*!< GPIO3_LEVEL_LOW (Bit 12) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO3_LEVEL_LOW_Msk (0x1000UL)  /*!< GPIO3_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO2_EDGE_HIGH_Pos (11UL)      /*!< GPIO2_EDGE_HIGH (Bit 11) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO2_EDGE_HIGH_Msk (0x800UL)   /*!< GPIO2_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO2_EDGE_LOW_Pos (10UL)       /*!< GPIO2_EDGE_LOW (Bit 10) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO2_EDGE_LOW_Msk (0x400UL)    /*!< GPIO2_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO2_LEVEL_HIGH_Pos (9UL)      /*!< GPIO2_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO2_LEVEL_HIGH_Msk (0x200UL)  /*!< GPIO2_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO2_LEVEL_LOW_Pos (8UL)       /*!< GPIO2_LEVEL_LOW (Bit 8) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO2_LEVEL_LOW_Msk (0x100UL)   /*!< GPIO2_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO1_EDGE_HIGH_Pos (7UL)       /*!< GPIO1_EDGE_HIGH (Bit 7) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO1_EDGE_HIGH_Msk (0x80UL)    /*!< GPIO1_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO1_EDGE_LOW_Pos (6UL)        /*!< GPIO1_EDGE_LOW (Bit 6) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO1_EDGE_LOW_Msk (0x40UL)     /*!< GPIO1_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO1_LEVEL_HIGH_Pos (5UL)      /*!< GPIO1_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO1_LEVEL_HIGH_Msk (0x20UL)   /*!< GPIO1_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO1_LEVEL_LOW_Pos (4UL)       /*!< GPIO1_LEVEL_LOW (Bit 4) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO1_LEVEL_LOW_Msk (0x10UL)    /*!< GPIO1_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_EDGE_HIGH_Pos (3UL)       /*!< GPIO0_EDGE_HIGH (Bit 3) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_EDGE_HIGH_Msk (0x8UL)     /*!< GPIO0_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_EDGE_LOW_Pos (2UL)        /*!< GPIO0_EDGE_LOW (Bit 2) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_EDGE_LOW_Msk (0x4UL)      /*!< GPIO0_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_LEVEL_HIGH_Pos (1UL)      /*!< GPIO0_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_LEVEL_HIGH_Msk (0x2UL)    /*!< GPIO0_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_LEVEL_LOW_Pos (0UL)       /*!< GPIO0_LEVEL_LOW (Bit 0) */
#define IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_LEVEL_LOW_Msk (0x1UL)     /*!< GPIO0_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO15_EDGE_HIGH_Pos (31UL)     /*!< GPIO15_EDGE_HIGH (Bit 31) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO15_EDGE_HIGH_Msk (0x80000000UL) /*!< GPIO15_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO15_EDGE_LOW_Pos (30UL)      /*!< GPIO15_EDGE_LOW (Bit 30) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO15_EDGE_LOW_Msk (0x40000000UL) /*!< GPIO15_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO15_LEVEL_HIGH_Pos (29UL)    /*!< GPIO15_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO15_LEVEL_HIGH_Msk (0x20000000UL) /*!< GPIO15_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO15_LEVEL_LOW_Pos (28UL)     /*!< GPIO15_LEVEL_LOW (Bit 28) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO15_LEVEL_LOW_Msk (0x10000000UL) /*!< GPIO15_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO14_EDGE_HIGH_Pos (27UL)     /*!< GPIO14_EDGE_HIGH (Bit 27) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO14_EDGE_HIGH_Msk (0x8000000UL) /*!< GPIO14_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO14_EDGE_LOW_Pos (26UL)      /*!< GPIO14_EDGE_LOW (Bit 26) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO14_EDGE_LOW_Msk (0x4000000UL) /*!< GPIO14_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO14_LEVEL_HIGH_Pos (25UL)    /*!< GPIO14_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO14_LEVEL_HIGH_Msk (0x2000000UL) /*!< GPIO14_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO14_LEVEL_LOW_Pos (24UL)     /*!< GPIO14_LEVEL_LOW (Bit 24) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO14_LEVEL_LOW_Msk (0x1000000UL) /*!< GPIO14_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO13_EDGE_HIGH_Pos (23UL)     /*!< GPIO13_EDGE_HIGH (Bit 23) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO13_EDGE_HIGH_Msk (0x800000UL) /*!< GPIO13_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO13_EDGE_LOW_Pos (22UL)      /*!< GPIO13_EDGE_LOW (Bit 22) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO13_EDGE_LOW_Msk (0x400000UL) /*!< GPIO13_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO13_LEVEL_HIGH_Pos (21UL)    /*!< GPIO13_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO13_LEVEL_HIGH_Msk (0x200000UL) /*!< GPIO13_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO13_LEVEL_LOW_Pos (20UL)     /*!< GPIO13_LEVEL_LOW (Bit 20) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO13_LEVEL_LOW_Msk (0x100000UL) /*!< GPIO13_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO12_EDGE_HIGH_Pos (19UL)     /*!< GPIO12_EDGE_HIGH (Bit 19) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO12_EDGE_HIGH_Msk (0x80000UL) /*!< GPIO12_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO12_EDGE_LOW_Pos (18UL)      /*!< GPIO12_EDGE_LOW (Bit 18) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO12_EDGE_LOW_Msk (0x40000UL) /*!< GPIO12_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO12_LEVEL_HIGH_Pos (17UL)    /*!< GPIO12_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO12_LEVEL_HIGH_Msk (0x20000UL) /*!< GPIO12_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO12_LEVEL_LOW_Pos (16UL)     /*!< GPIO12_LEVEL_LOW (Bit 16) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO12_LEVEL_LOW_Msk (0x10000UL) /*!< GPIO12_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO11_EDGE_HIGH_Pos (15UL)     /*!< GPIO11_EDGE_HIGH (Bit 15) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO11_EDGE_HIGH_Msk (0x8000UL) /*!< GPIO11_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO11_EDGE_LOW_Pos (14UL)      /*!< GPIO11_EDGE_LOW (Bit 14) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO11_EDGE_LOW_Msk (0x4000UL)  /*!< GPIO11_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO11_LEVEL_HIGH_Pos (13UL)    /*!< GPIO11_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO11_LEVEL_HIGH_Msk (0x2000UL) /*!< GPIO11_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO11_LEVEL_LOW_Pos (12UL)     /*!< GPIO11_LEVEL_LOW (Bit 12) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO11_LEVEL_LOW_Msk (0x1000UL) /*!< GPIO11_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO10_EDGE_HIGH_Pos (11UL)     /*!< GPIO10_EDGE_HIGH (Bit 11) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO10_EDGE_HIGH_Msk (0x800UL)  /*!< GPIO10_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO10_EDGE_LOW_Pos (10UL)      /*!< GPIO10_EDGE_LOW (Bit 10) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO10_EDGE_LOW_Msk (0x400UL)   /*!< GPIO10_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO10_LEVEL_HIGH_Pos (9UL)     /*!< GPIO10_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO10_LEVEL_HIGH_Msk (0x200UL) /*!< GPIO10_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO10_LEVEL_LOW_Pos (8UL)      /*!< GPIO10_LEVEL_LOW (Bit 8) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO10_LEVEL_LOW_Msk (0x100UL)  /*!< GPIO10_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO9_EDGE_HIGH_Pos (7UL)       /*!< GPIO9_EDGE_HIGH (Bit 7) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO9_EDGE_HIGH_Msk (0x80UL)    /*!< GPIO9_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO9_EDGE_LOW_Pos (6UL)        /*!< GPIO9_EDGE_LOW (Bit 6) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO9_EDGE_LOW_Msk (0x40UL)     /*!< GPIO9_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO9_LEVEL_HIGH_Pos (5UL)      /*!< GPIO9_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO9_LEVEL_HIGH_Msk (0x20UL)   /*!< GPIO9_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO9_LEVEL_LOW_Pos (4UL)       /*!< GPIO9_LEVEL_LOW (Bit 4) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO9_LEVEL_LOW_Msk (0x10UL)    /*!< GPIO9_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO8_EDGE_HIGH_Pos (3UL)       /*!< GPIO8_EDGE_HIGH (Bit 3) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO8_EDGE_HIGH_Msk (0x8UL)     /*!< GPIO8_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO8_EDGE_LOW_Pos (2UL)        /*!< GPIO8_EDGE_LOW (Bit 2) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO8_EDGE_LOW_Msk (0x4UL)      /*!< GPIO8_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO8_LEVEL_HIGH_Pos (1UL)      /*!< GPIO8_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO8_LEVEL_HIGH_Msk (0x2UL)    /*!< GPIO8_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO8_LEVEL_LOW_Pos (0UL)       /*!< GPIO8_LEVEL_LOW (Bit 0) */
#define IO_BANK0_DORMANT_WAKE_INTE1_GPIO8_LEVEL_LOW_Msk (0x1UL)     /*!< GPIO8_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO23_EDGE_HIGH_Pos (31UL)     /*!< GPIO23_EDGE_HIGH (Bit 31) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO23_EDGE_HIGH_Msk (0x80000000UL) /*!< GPIO23_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO23_EDGE_LOW_Pos (30UL)      /*!< GPIO23_EDGE_LOW (Bit 30) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO23_EDGE_LOW_Msk (0x40000000UL) /*!< GPIO23_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO23_LEVEL_HIGH_Pos (29UL)    /*!< GPIO23_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO23_LEVEL_HIGH_Msk (0x20000000UL) /*!< GPIO23_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO23_LEVEL_LOW_Pos (28UL)     /*!< GPIO23_LEVEL_LOW (Bit 28) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO23_LEVEL_LOW_Msk (0x10000000UL) /*!< GPIO23_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO22_EDGE_HIGH_Pos (27UL)     /*!< GPIO22_EDGE_HIGH (Bit 27) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO22_EDGE_HIGH_Msk (0x8000000UL) /*!< GPIO22_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO22_EDGE_LOW_Pos (26UL)      /*!< GPIO22_EDGE_LOW (Bit 26) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO22_EDGE_LOW_Msk (0x4000000UL) /*!< GPIO22_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO22_LEVEL_HIGH_Pos (25UL)    /*!< GPIO22_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO22_LEVEL_HIGH_Msk (0x2000000UL) /*!< GPIO22_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO22_LEVEL_LOW_Pos (24UL)     /*!< GPIO22_LEVEL_LOW (Bit 24) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO22_LEVEL_LOW_Msk (0x1000000UL) /*!< GPIO22_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO21_EDGE_HIGH_Pos (23UL)     /*!< GPIO21_EDGE_HIGH (Bit 23) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO21_EDGE_HIGH_Msk (0x800000UL) /*!< GPIO21_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO21_EDGE_LOW_Pos (22UL)      /*!< GPIO21_EDGE_LOW (Bit 22) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO21_EDGE_LOW_Msk (0x400000UL) /*!< GPIO21_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO21_LEVEL_HIGH_Pos (21UL)    /*!< GPIO21_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO21_LEVEL_HIGH_Msk (0x200000UL) /*!< GPIO21_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO21_LEVEL_LOW_Pos (20UL)     /*!< GPIO21_LEVEL_LOW (Bit 20) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO21_LEVEL_LOW_Msk (0x100000UL) /*!< GPIO21_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO20_EDGE_HIGH_Pos (19UL)     /*!< GPIO20_EDGE_HIGH (Bit 19) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO20_EDGE_HIGH_Msk (0x80000UL) /*!< GPIO20_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO20_EDGE_LOW_Pos (18UL)      /*!< GPIO20_EDGE_LOW (Bit 18) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO20_EDGE_LOW_Msk (0x40000UL) /*!< GPIO20_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO20_LEVEL_HIGH_Pos (17UL)    /*!< GPIO20_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO20_LEVEL_HIGH_Msk (0x20000UL) /*!< GPIO20_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO20_LEVEL_LOW_Pos (16UL)     /*!< GPIO20_LEVEL_LOW (Bit 16) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO20_LEVEL_LOW_Msk (0x10000UL) /*!< GPIO20_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO19_EDGE_HIGH_Pos (15UL)     /*!< GPIO19_EDGE_HIGH (Bit 15) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO19_EDGE_HIGH_Msk (0x8000UL) /*!< GPIO19_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO19_EDGE_LOW_Pos (14UL)      /*!< GPIO19_EDGE_LOW (Bit 14) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO19_EDGE_LOW_Msk (0x4000UL)  /*!< GPIO19_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO19_LEVEL_HIGH_Pos (13UL)    /*!< GPIO19_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO19_LEVEL_HIGH_Msk (0x2000UL) /*!< GPIO19_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO19_LEVEL_LOW_Pos (12UL)     /*!< GPIO19_LEVEL_LOW (Bit 12) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO19_LEVEL_LOW_Msk (0x1000UL) /*!< GPIO19_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO18_EDGE_HIGH_Pos (11UL)     /*!< GPIO18_EDGE_HIGH (Bit 11) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO18_EDGE_HIGH_Msk (0x800UL)  /*!< GPIO18_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO18_EDGE_LOW_Pos (10UL)      /*!< GPIO18_EDGE_LOW (Bit 10) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO18_EDGE_LOW_Msk (0x400UL)   /*!< GPIO18_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO18_LEVEL_HIGH_Pos (9UL)     /*!< GPIO18_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO18_LEVEL_HIGH_Msk (0x200UL) /*!< GPIO18_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO18_LEVEL_LOW_Pos (8UL)      /*!< GPIO18_LEVEL_LOW (Bit 8) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO18_LEVEL_LOW_Msk (0x100UL)  /*!< GPIO18_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO17_EDGE_HIGH_Pos (7UL)      /*!< GPIO17_EDGE_HIGH (Bit 7) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO17_EDGE_HIGH_Msk (0x80UL)   /*!< GPIO17_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO17_EDGE_LOW_Pos (6UL)       /*!< GPIO17_EDGE_LOW (Bit 6) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO17_EDGE_LOW_Msk (0x40UL)    /*!< GPIO17_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO17_LEVEL_HIGH_Pos (5UL)     /*!< GPIO17_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO17_LEVEL_HIGH_Msk (0x20UL)  /*!< GPIO17_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO17_LEVEL_LOW_Pos (4UL)      /*!< GPIO17_LEVEL_LOW (Bit 4) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO17_LEVEL_LOW_Msk (0x10UL)   /*!< GPIO17_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO16_EDGE_HIGH_Pos (3UL)      /*!< GPIO16_EDGE_HIGH (Bit 3) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO16_EDGE_HIGH_Msk (0x8UL)    /*!< GPIO16_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO16_EDGE_LOW_Pos (2UL)       /*!< GPIO16_EDGE_LOW (Bit 2) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO16_EDGE_LOW_Msk (0x4UL)     /*!< GPIO16_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO16_LEVEL_HIGH_Pos (1UL)     /*!< GPIO16_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO16_LEVEL_HIGH_Msk (0x2UL)   /*!< GPIO16_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO16_LEVEL_LOW_Pos (0UL)      /*!< GPIO16_LEVEL_LOW (Bit 0) */
#define IO_BANK0_DORMANT_WAKE_INTE2_GPIO16_LEVEL_LOW_Msk (0x1UL)    /*!< GPIO16_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO29_EDGE_HIGH_Pos (23UL)     /*!< GPIO29_EDGE_HIGH (Bit 23) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO29_EDGE_HIGH_Msk (0x800000UL) /*!< GPIO29_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO29_EDGE_LOW_Pos (22UL)      /*!< GPIO29_EDGE_LOW (Bit 22) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO29_EDGE_LOW_Msk (0x400000UL) /*!< GPIO29_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO29_LEVEL_HIGH_Pos (21UL)    /*!< GPIO29_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO29_LEVEL_HIGH_Msk (0x200000UL) /*!< GPIO29_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO29_LEVEL_LOW_Pos (20UL)     /*!< GPIO29_LEVEL_LOW (Bit 20) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO29_LEVEL_LOW_Msk (0x100000UL) /*!< GPIO29_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO28_EDGE_HIGH_Pos (19UL)     /*!< GPIO28_EDGE_HIGH (Bit 19) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO28_EDGE_HIGH_Msk (0x80000UL) /*!< GPIO28_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO28_EDGE_LOW_Pos (18UL)      /*!< GPIO28_EDGE_LOW (Bit 18) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO28_EDGE_LOW_Msk (0x40000UL) /*!< GPIO28_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO28_LEVEL_HIGH_Pos (17UL)    /*!< GPIO28_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO28_LEVEL_HIGH_Msk (0x20000UL) /*!< GPIO28_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO28_LEVEL_LOW_Pos (16UL)     /*!< GPIO28_LEVEL_LOW (Bit 16) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO28_LEVEL_LOW_Msk (0x10000UL) /*!< GPIO28_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO27_EDGE_HIGH_Pos (15UL)     /*!< GPIO27_EDGE_HIGH (Bit 15) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO27_EDGE_HIGH_Msk (0x8000UL) /*!< GPIO27_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO27_EDGE_LOW_Pos (14UL)      /*!< GPIO27_EDGE_LOW (Bit 14) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO27_EDGE_LOW_Msk (0x4000UL)  /*!< GPIO27_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO27_LEVEL_HIGH_Pos (13UL)    /*!< GPIO27_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO27_LEVEL_HIGH_Msk (0x2000UL) /*!< GPIO27_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO27_LEVEL_LOW_Pos (12UL)     /*!< GPIO27_LEVEL_LOW (Bit 12) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO27_LEVEL_LOW_Msk (0x1000UL) /*!< GPIO27_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO26_EDGE_HIGH_Pos (11UL)     /*!< GPIO26_EDGE_HIGH (Bit 11) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO26_EDGE_HIGH_Msk (0x800UL)  /*!< GPIO26_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO26_EDGE_LOW_Pos (10UL)      /*!< GPIO26_EDGE_LOW (Bit 10) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO26_EDGE_LOW_Msk (0x400UL)   /*!< GPIO26_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO26_LEVEL_HIGH_Pos (9UL)     /*!< GPIO26_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO26_LEVEL_HIGH_Msk (0x200UL) /*!< GPIO26_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO26_LEVEL_LOW_Pos (8UL)      /*!< GPIO26_LEVEL_LOW (Bit 8) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO26_LEVEL_LOW_Msk (0x100UL)  /*!< GPIO26_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO25_EDGE_HIGH_Pos (7UL)      /*!< GPIO25_EDGE_HIGH (Bit 7) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO25_EDGE_HIGH_Msk (0x80UL)   /*!< GPIO25_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO25_EDGE_LOW_Pos (6UL)       /*!< GPIO25_EDGE_LOW (Bit 6) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO25_EDGE_LOW_Msk (0x40UL)    /*!< GPIO25_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO25_LEVEL_HIGH_Pos (5UL)     /*!< GPIO25_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO25_LEVEL_HIGH_Msk (0x20UL)  /*!< GPIO25_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO25_LEVEL_LOW_Pos (4UL)      /*!< GPIO25_LEVEL_LOW (Bit 4) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO25_LEVEL_LOW_Msk (0x10UL)   /*!< GPIO25_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO24_EDGE_HIGH_Pos (3UL)      /*!< GPIO24_EDGE_HIGH (Bit 3) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO24_EDGE_HIGH_Msk (0x8UL)    /*!< GPIO24_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO24_EDGE_LOW_Pos (2UL)       /*!< GPIO24_EDGE_LOW (Bit 2) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO24_EDGE_LOW_Msk (0x4UL)     /*!< GPIO24_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO24_LEVEL_HIGH_Pos (1UL)     /*!< GPIO24_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO24_LEVEL_HIGH_Msk (0x2UL)   /*!< GPIO24_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO24_LEVEL_LOW_Pos (0UL)      /*!< GPIO24_LEVEL_LOW (Bit 0) */
#define IO_BANK0_DORMANT_WAKE_INTE3_GPIO24_LEVEL_LOW_Msk (0x1UL)    /*!< GPIO24_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO7_EDGE_HIGH_Pos (31UL)      /*!< GPIO7_EDGE_HIGH (Bit 31) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO7_EDGE_HIGH_Msk (0x80000000UL) /*!< GPIO7_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO7_EDGE_LOW_Pos (30UL)       /*!< GPIO7_EDGE_LOW (Bit 30) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO7_EDGE_LOW_Msk (0x40000000UL) /*!< GPIO7_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO7_LEVEL_HIGH_Pos (29UL)     /*!< GPIO7_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO7_LEVEL_HIGH_Msk (0x20000000UL) /*!< GPIO7_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO7_LEVEL_LOW_Pos (28UL)      /*!< GPIO7_LEVEL_LOW (Bit 28) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO7_LEVEL_LOW_Msk (0x10000000UL) /*!< GPIO7_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO6_EDGE_HIGH_Pos (27UL)      /*!< GPIO6_EDGE_HIGH (Bit 27) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO6_EDGE_HIGH_Msk (0x8000000UL) /*!< GPIO6_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO6_EDGE_LOW_Pos (26UL)       /*!< GPIO6_EDGE_LOW (Bit 26) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO6_EDGE_LOW_Msk (0x4000000UL) /*!< GPIO6_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO6_LEVEL_HIGH_Pos (25UL)     /*!< GPIO6_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO6_LEVEL_HIGH_Msk (0x2000000UL) /*!< GPIO6_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO6_LEVEL_LOW_Pos (24UL)      /*!< GPIO6_LEVEL_LOW (Bit 24) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO6_LEVEL_LOW_Msk (0x1000000UL) /*!< GPIO6_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO5_EDGE_HIGH_Pos (23UL)      /*!< GPIO5_EDGE_HIGH (Bit 23) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO5_EDGE_HIGH_Msk (0x800000UL) /*!< GPIO5_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO5_EDGE_LOW_Pos (22UL)       /*!< GPIO5_EDGE_LOW (Bit 22) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO5_EDGE_LOW_Msk (0x400000UL) /*!< GPIO5_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO5_LEVEL_HIGH_Pos (21UL)     /*!< GPIO5_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO5_LEVEL_HIGH_Msk (0x200000UL) /*!< GPIO5_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO5_LEVEL_LOW_Pos (20UL)      /*!< GPIO5_LEVEL_LOW (Bit 20) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO5_LEVEL_LOW_Msk (0x100000UL) /*!< GPIO5_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO4_EDGE_HIGH_Pos (19UL)      /*!< GPIO4_EDGE_HIGH (Bit 19) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO4_EDGE_HIGH_Msk (0x80000UL) /*!< GPIO4_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO4_EDGE_LOW_Pos (18UL)       /*!< GPIO4_EDGE_LOW (Bit 18) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO4_EDGE_LOW_Msk (0x40000UL)  /*!< GPIO4_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO4_LEVEL_HIGH_Pos (17UL)     /*!< GPIO4_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO4_LEVEL_HIGH_Msk (0x20000UL) /*!< GPIO4_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO4_LEVEL_LOW_Pos (16UL)      /*!< GPIO4_LEVEL_LOW (Bit 16) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO4_LEVEL_LOW_Msk (0x10000UL) /*!< GPIO4_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO3_EDGE_HIGH_Pos (15UL)      /*!< GPIO3_EDGE_HIGH (Bit 15) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO3_EDGE_HIGH_Msk (0x8000UL)  /*!< GPIO3_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO3_EDGE_LOW_Pos (14UL)       /*!< GPIO3_EDGE_LOW (Bit 14) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO3_EDGE_LOW_Msk (0x4000UL)   /*!< GPIO3_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO3_LEVEL_HIGH_Pos (13UL)     /*!< GPIO3_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO3_LEVEL_HIGH_Msk (0x2000UL) /*!< GPIO3_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO3_LEVEL_LOW_Pos (12UL)      /*!< GPIO3_LEVEL_LOW (Bit 12) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO3_LEVEL_LOW_Msk (0x1000UL)  /*!< GPIO3_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO2_EDGE_HIGH_Pos (11UL)      /*!< GPIO2_EDGE_HIGH (Bit 11) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO2_EDGE_HIGH_Msk (0x800UL)   /*!< GPIO2_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO2_EDGE_LOW_Pos (10UL)       /*!< GPIO2_EDGE_LOW (Bit 10) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO2_EDGE_LOW_Msk (0x400UL)    /*!< GPIO2_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO2_LEVEL_HIGH_Pos (9UL)      /*!< GPIO2_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO2_LEVEL_HIGH_Msk (0x200UL)  /*!< GPIO2_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO2_LEVEL_LOW_Pos (8UL)       /*!< GPIO2_LEVEL_LOW (Bit 8) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO2_LEVEL_LOW_Msk (0x100UL)   /*!< GPIO2_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO1_EDGE_HIGH_Pos (7UL)       /*!< GPIO1_EDGE_HIGH (Bit 7) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO1_EDGE_HIGH_Msk (0x80UL)    /*!< GPIO1_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO1_EDGE_LOW_Pos (6UL)        /*!< GPIO1_EDGE_LOW (Bit 6) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO1_EDGE_LOW_Msk (0x40UL)     /*!< GPIO1_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO1_LEVEL_HIGH_Pos (5UL)      /*!< GPIO1_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO1_LEVEL_HIGH_Msk (0x20UL)   /*!< GPIO1_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO1_LEVEL_LOW_Pos (4UL)       /*!< GPIO1_LEVEL_LOW (Bit 4) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO1_LEVEL_LOW_Msk (0x10UL)    /*!< GPIO1_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO0_EDGE_HIGH_Pos (3UL)       /*!< GPIO0_EDGE_HIGH (Bit 3) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO0_EDGE_HIGH_Msk (0x8UL)     /*!< GPIO0_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO0_EDGE_LOW_Pos (2UL)        /*!< GPIO0_EDGE_LOW (Bit 2) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO0_EDGE_LOW_Msk (0x4UL)      /*!< GPIO0_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO0_LEVEL_HIGH_Pos (1UL)      /*!< GPIO0_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO0_LEVEL_HIGH_Msk (0x2UL)    /*!< GPIO0_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO0_LEVEL_LOW_Pos (0UL)       /*!< GPIO0_LEVEL_LOW (Bit 0) */
#define IO_BANK0_DORMANT_WAKE_INTF0_GPIO0_LEVEL_LOW_Msk (0x1UL)     /*!< GPIO0_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO15_EDGE_HIGH_Pos (31UL)     /*!< GPIO15_EDGE_HIGH (Bit 31) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO15_EDGE_HIGH_Msk (0x80000000UL) /*!< GPIO15_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO15_EDGE_LOW_Pos (30UL)      /*!< GPIO15_EDGE_LOW (Bit 30) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO15_EDGE_LOW_Msk (0x40000000UL) /*!< GPIO15_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO15_LEVEL_HIGH_Pos (29UL)    /*!< GPIO15_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO15_LEVEL_HIGH_Msk (0x20000000UL) /*!< GPIO15_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO15_LEVEL_LOW_Pos (28UL)     /*!< GPIO15_LEVEL_LOW (Bit 28) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO15_LEVEL_LOW_Msk (0x10000000UL) /*!< GPIO15_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO14_EDGE_HIGH_Pos (27UL)     /*!< GPIO14_EDGE_HIGH (Bit 27) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO14_EDGE_HIGH_Msk (0x8000000UL) /*!< GPIO14_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO14_EDGE_LOW_Pos (26UL)      /*!< GPIO14_EDGE_LOW (Bit 26) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO14_EDGE_LOW_Msk (0x4000000UL) /*!< GPIO14_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO14_LEVEL_HIGH_Pos (25UL)    /*!< GPIO14_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO14_LEVEL_HIGH_Msk (0x2000000UL) /*!< GPIO14_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO14_LEVEL_LOW_Pos (24UL)     /*!< GPIO14_LEVEL_LOW (Bit 24) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO14_LEVEL_LOW_Msk (0x1000000UL) /*!< GPIO14_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO13_EDGE_HIGH_Pos (23UL)     /*!< GPIO13_EDGE_HIGH (Bit 23) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO13_EDGE_HIGH_Msk (0x800000UL) /*!< GPIO13_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO13_EDGE_LOW_Pos (22UL)      /*!< GPIO13_EDGE_LOW (Bit 22) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO13_EDGE_LOW_Msk (0x400000UL) /*!< GPIO13_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO13_LEVEL_HIGH_Pos (21UL)    /*!< GPIO13_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO13_LEVEL_HIGH_Msk (0x200000UL) /*!< GPIO13_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO13_LEVEL_LOW_Pos (20UL)     /*!< GPIO13_LEVEL_LOW (Bit 20) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO13_LEVEL_LOW_Msk (0x100000UL) /*!< GPIO13_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO12_EDGE_HIGH_Pos (19UL)     /*!< GPIO12_EDGE_HIGH (Bit 19) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO12_EDGE_HIGH_Msk (0x80000UL) /*!< GPIO12_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO12_EDGE_LOW_Pos (18UL)      /*!< GPIO12_EDGE_LOW (Bit 18) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO12_EDGE_LOW_Msk (0x40000UL) /*!< GPIO12_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO12_LEVEL_HIGH_Pos (17UL)    /*!< GPIO12_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO12_LEVEL_HIGH_Msk (0x20000UL) /*!< GPIO12_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO12_LEVEL_LOW_Pos (16UL)     /*!< GPIO12_LEVEL_LOW (Bit 16) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO12_LEVEL_LOW_Msk (0x10000UL) /*!< GPIO12_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO11_EDGE_HIGH_Pos (15UL)     /*!< GPIO11_EDGE_HIGH (Bit 15) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO11_EDGE_HIGH_Msk (0x8000UL) /*!< GPIO11_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO11_EDGE_LOW_Pos (14UL)      /*!< GPIO11_EDGE_LOW (Bit 14) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO11_EDGE_LOW_Msk (0x4000UL)  /*!< GPIO11_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO11_LEVEL_HIGH_Pos (13UL)    /*!< GPIO11_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO11_LEVEL_HIGH_Msk (0x2000UL) /*!< GPIO11_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO11_LEVEL_LOW_Pos (12UL)     /*!< GPIO11_LEVEL_LOW (Bit 12) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO11_LEVEL_LOW_Msk (0x1000UL) /*!< GPIO11_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO10_EDGE_HIGH_Pos (11UL)     /*!< GPIO10_EDGE_HIGH (Bit 11) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO10_EDGE_HIGH_Msk (0x800UL)  /*!< GPIO10_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO10_EDGE_LOW_Pos (10UL)      /*!< GPIO10_EDGE_LOW (Bit 10) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO10_EDGE_LOW_Msk (0x400UL)   /*!< GPIO10_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO10_LEVEL_HIGH_Pos (9UL)     /*!< GPIO10_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO10_LEVEL_HIGH_Msk (0x200UL) /*!< GPIO10_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO10_LEVEL_LOW_Pos (8UL)      /*!< GPIO10_LEVEL_LOW (Bit 8) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO10_LEVEL_LOW_Msk (0x100UL)  /*!< GPIO10_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO9_EDGE_HIGH_Pos (7UL)       /*!< GPIO9_EDGE_HIGH (Bit 7) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO9_EDGE_HIGH_Msk (0x80UL)    /*!< GPIO9_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO9_EDGE_LOW_Pos (6UL)        /*!< GPIO9_EDGE_LOW (Bit 6) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO9_EDGE_LOW_Msk (0x40UL)     /*!< GPIO9_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO9_LEVEL_HIGH_Pos (5UL)      /*!< GPIO9_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO9_LEVEL_HIGH_Msk (0x20UL)   /*!< GPIO9_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO9_LEVEL_LOW_Pos (4UL)       /*!< GPIO9_LEVEL_LOW (Bit 4) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO9_LEVEL_LOW_Msk (0x10UL)    /*!< GPIO9_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO8_EDGE_HIGH_Pos (3UL)       /*!< GPIO8_EDGE_HIGH (Bit 3) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO8_EDGE_HIGH_Msk (0x8UL)     /*!< GPIO8_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO8_EDGE_LOW_Pos (2UL)        /*!< GPIO8_EDGE_LOW (Bit 2) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO8_EDGE_LOW_Msk (0x4UL)      /*!< GPIO8_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO8_LEVEL_HIGH_Pos (1UL)      /*!< GPIO8_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO8_LEVEL_HIGH_Msk (0x2UL)    /*!< GPIO8_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO8_LEVEL_LOW_Pos (0UL)       /*!< GPIO8_LEVEL_LOW (Bit 0) */
#define IO_BANK0_DORMANT_WAKE_INTF1_GPIO8_LEVEL_LOW_Msk (0x1UL)     /*!< GPIO8_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO23_EDGE_HIGH_Pos (31UL)     /*!< GPIO23_EDGE_HIGH (Bit 31) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO23_EDGE_HIGH_Msk (0x80000000UL) /*!< GPIO23_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO23_EDGE_LOW_Pos (30UL)      /*!< GPIO23_EDGE_LOW (Bit 30) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO23_EDGE_LOW_Msk (0x40000000UL) /*!< GPIO23_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO23_LEVEL_HIGH_Pos (29UL)    /*!< GPIO23_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO23_LEVEL_HIGH_Msk (0x20000000UL) /*!< GPIO23_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO23_LEVEL_LOW_Pos (28UL)     /*!< GPIO23_LEVEL_LOW (Bit 28) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO23_LEVEL_LOW_Msk (0x10000000UL) /*!< GPIO23_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO22_EDGE_HIGH_Pos (27UL)     /*!< GPIO22_EDGE_HIGH (Bit 27) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO22_EDGE_HIGH_Msk (0x8000000UL) /*!< GPIO22_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO22_EDGE_LOW_Pos (26UL)      /*!< GPIO22_EDGE_LOW (Bit 26) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO22_EDGE_LOW_Msk (0x4000000UL) /*!< GPIO22_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO22_LEVEL_HIGH_Pos (25UL)    /*!< GPIO22_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO22_LEVEL_HIGH_Msk (0x2000000UL) /*!< GPIO22_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO22_LEVEL_LOW_Pos (24UL)     /*!< GPIO22_LEVEL_LOW (Bit 24) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO22_LEVEL_LOW_Msk (0x1000000UL) /*!< GPIO22_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO21_EDGE_HIGH_Pos (23UL)     /*!< GPIO21_EDGE_HIGH (Bit 23) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO21_EDGE_HIGH_Msk (0x800000UL) /*!< GPIO21_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO21_EDGE_LOW_Pos (22UL)      /*!< GPIO21_EDGE_LOW (Bit 22) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO21_EDGE_LOW_Msk (0x400000UL) /*!< GPIO21_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO21_LEVEL_HIGH_Pos (21UL)    /*!< GPIO21_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO21_LEVEL_HIGH_Msk (0x200000UL) /*!< GPIO21_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO21_LEVEL_LOW_Pos (20UL)     /*!< GPIO21_LEVEL_LOW (Bit 20) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO21_LEVEL_LOW_Msk (0x100000UL) /*!< GPIO21_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO20_EDGE_HIGH_Pos (19UL)     /*!< GPIO20_EDGE_HIGH (Bit 19) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO20_EDGE_HIGH_Msk (0x80000UL) /*!< GPIO20_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO20_EDGE_LOW_Pos (18UL)      /*!< GPIO20_EDGE_LOW (Bit 18) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO20_EDGE_LOW_Msk (0x40000UL) /*!< GPIO20_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO20_LEVEL_HIGH_Pos (17UL)    /*!< GPIO20_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO20_LEVEL_HIGH_Msk (0x20000UL) /*!< GPIO20_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO20_LEVEL_LOW_Pos (16UL)     /*!< GPIO20_LEVEL_LOW (Bit 16) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO20_LEVEL_LOW_Msk (0x10000UL) /*!< GPIO20_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO19_EDGE_HIGH_Pos (15UL)     /*!< GPIO19_EDGE_HIGH (Bit 15) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO19_EDGE_HIGH_Msk (0x8000UL) /*!< GPIO19_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO19_EDGE_LOW_Pos (14UL)      /*!< GPIO19_EDGE_LOW (Bit 14) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO19_EDGE_LOW_Msk (0x4000UL)  /*!< GPIO19_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO19_LEVEL_HIGH_Pos (13UL)    /*!< GPIO19_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO19_LEVEL_HIGH_Msk (0x2000UL) /*!< GPIO19_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO19_LEVEL_LOW_Pos (12UL)     /*!< GPIO19_LEVEL_LOW (Bit 12) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO19_LEVEL_LOW_Msk (0x1000UL) /*!< GPIO19_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO18_EDGE_HIGH_Pos (11UL)     /*!< GPIO18_EDGE_HIGH (Bit 11) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO18_EDGE_HIGH_Msk (0x800UL)  /*!< GPIO18_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO18_EDGE_LOW_Pos (10UL)      /*!< GPIO18_EDGE_LOW (Bit 10) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO18_EDGE_LOW_Msk (0x400UL)   /*!< GPIO18_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO18_LEVEL_HIGH_Pos (9UL)     /*!< GPIO18_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO18_LEVEL_HIGH_Msk (0x200UL) /*!< GPIO18_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO18_LEVEL_LOW_Pos (8UL)      /*!< GPIO18_LEVEL_LOW (Bit 8) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO18_LEVEL_LOW_Msk (0x100UL)  /*!< GPIO18_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO17_EDGE_HIGH_Pos (7UL)      /*!< GPIO17_EDGE_HIGH (Bit 7) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO17_EDGE_HIGH_Msk (0x80UL)   /*!< GPIO17_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO17_EDGE_LOW_Pos (6UL)       /*!< GPIO17_EDGE_LOW (Bit 6) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO17_EDGE_LOW_Msk (0x40UL)    /*!< GPIO17_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO17_LEVEL_HIGH_Pos (5UL)     /*!< GPIO17_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO17_LEVEL_HIGH_Msk (0x20UL)  /*!< GPIO17_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO17_LEVEL_LOW_Pos (4UL)      /*!< GPIO17_LEVEL_LOW (Bit 4) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO17_LEVEL_LOW_Msk (0x10UL)   /*!< GPIO17_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO16_EDGE_HIGH_Pos (3UL)      /*!< GPIO16_EDGE_HIGH (Bit 3) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO16_EDGE_HIGH_Msk (0x8UL)    /*!< GPIO16_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO16_EDGE_LOW_Pos (2UL)       /*!< GPIO16_EDGE_LOW (Bit 2) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO16_EDGE_LOW_Msk (0x4UL)     /*!< GPIO16_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO16_LEVEL_HIGH_Pos (1UL)     /*!< GPIO16_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO16_LEVEL_HIGH_Msk (0x2UL)   /*!< GPIO16_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO16_LEVEL_LOW_Pos (0UL)      /*!< GPIO16_LEVEL_LOW (Bit 0) */
#define IO_BANK0_DORMANT_WAKE_INTF2_GPIO16_LEVEL_LOW_Msk (0x1UL)    /*!< GPIO16_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO29_EDGE_HIGH_Pos (23UL)     /*!< GPIO29_EDGE_HIGH (Bit 23) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO29_EDGE_HIGH_Msk (0x800000UL) /*!< GPIO29_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO29_EDGE_LOW_Pos (22UL)      /*!< GPIO29_EDGE_LOW (Bit 22) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO29_EDGE_LOW_Msk (0x400000UL) /*!< GPIO29_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO29_LEVEL_HIGH_Pos (21UL)    /*!< GPIO29_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO29_LEVEL_HIGH_Msk (0x200000UL) /*!< GPIO29_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO29_LEVEL_LOW_Pos (20UL)     /*!< GPIO29_LEVEL_LOW (Bit 20) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO29_LEVEL_LOW_Msk (0x100000UL) /*!< GPIO29_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO28_EDGE_HIGH_Pos (19UL)     /*!< GPIO28_EDGE_HIGH (Bit 19) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO28_EDGE_HIGH_Msk (0x80000UL) /*!< GPIO28_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO28_EDGE_LOW_Pos (18UL)      /*!< GPIO28_EDGE_LOW (Bit 18) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO28_EDGE_LOW_Msk (0x40000UL) /*!< GPIO28_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO28_LEVEL_HIGH_Pos (17UL)    /*!< GPIO28_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO28_LEVEL_HIGH_Msk (0x20000UL) /*!< GPIO28_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO28_LEVEL_LOW_Pos (16UL)     /*!< GPIO28_LEVEL_LOW (Bit 16) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO28_LEVEL_LOW_Msk (0x10000UL) /*!< GPIO28_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO27_EDGE_HIGH_Pos (15UL)     /*!< GPIO27_EDGE_HIGH (Bit 15) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO27_EDGE_HIGH_Msk (0x8000UL) /*!< GPIO27_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO27_EDGE_LOW_Pos (14UL)      /*!< GPIO27_EDGE_LOW (Bit 14) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO27_EDGE_LOW_Msk (0x4000UL)  /*!< GPIO27_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO27_LEVEL_HIGH_Pos (13UL)    /*!< GPIO27_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO27_LEVEL_HIGH_Msk (0x2000UL) /*!< GPIO27_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO27_LEVEL_LOW_Pos (12UL)     /*!< GPIO27_LEVEL_LOW (Bit 12) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO27_LEVEL_LOW_Msk (0x1000UL) /*!< GPIO27_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO26_EDGE_HIGH_Pos (11UL)     /*!< GPIO26_EDGE_HIGH (Bit 11) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO26_EDGE_HIGH_Msk (0x800UL)  /*!< GPIO26_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO26_EDGE_LOW_Pos (10UL)      /*!< GPIO26_EDGE_LOW (Bit 10) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO26_EDGE_LOW_Msk (0x400UL)   /*!< GPIO26_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO26_LEVEL_HIGH_Pos (9UL)     /*!< GPIO26_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO26_LEVEL_HIGH_Msk (0x200UL) /*!< GPIO26_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO26_LEVEL_LOW_Pos (8UL)      /*!< GPIO26_LEVEL_LOW (Bit 8) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO26_LEVEL_LOW_Msk (0x100UL)  /*!< GPIO26_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO25_EDGE_HIGH_Pos (7UL)      /*!< GPIO25_EDGE_HIGH (Bit 7) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO25_EDGE_HIGH_Msk (0x80UL)   /*!< GPIO25_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO25_EDGE_LOW_Pos (6UL)       /*!< GPIO25_EDGE_LOW (Bit 6) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO25_EDGE_LOW_Msk (0x40UL)    /*!< GPIO25_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO25_LEVEL_HIGH_Pos (5UL)     /*!< GPIO25_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO25_LEVEL_HIGH_Msk (0x20UL)  /*!< GPIO25_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO25_LEVEL_LOW_Pos (4UL)      /*!< GPIO25_LEVEL_LOW (Bit 4) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO25_LEVEL_LOW_Msk (0x10UL)   /*!< GPIO25_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO24_EDGE_HIGH_Pos (3UL)      /*!< GPIO24_EDGE_HIGH (Bit 3) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO24_EDGE_HIGH_Msk (0x8UL)    /*!< GPIO24_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO24_EDGE_LOW_Pos (2UL)       /*!< GPIO24_EDGE_LOW (Bit 2) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO24_EDGE_LOW_Msk (0x4UL)     /*!< GPIO24_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO24_LEVEL_HIGH_Pos (1UL)     /*!< GPIO24_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO24_LEVEL_HIGH_Msk (0x2UL)   /*!< GPIO24_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO24_LEVEL_LOW_Pos (0UL)      /*!< GPIO24_LEVEL_LOW (Bit 0) */
#define IO_BANK0_DORMANT_WAKE_INTF3_GPIO24_LEVEL_LOW_Msk (0x1UL)    /*!< GPIO24_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO7_EDGE_HIGH_Pos (31UL)      /*!< GPIO7_EDGE_HIGH (Bit 31) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO7_EDGE_HIGH_Msk (0x80000000UL) /*!< GPIO7_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO7_EDGE_LOW_Pos (30UL)       /*!< GPIO7_EDGE_LOW (Bit 30) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO7_EDGE_LOW_Msk (0x40000000UL) /*!< GPIO7_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO7_LEVEL_HIGH_Pos (29UL)     /*!< GPIO7_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO7_LEVEL_HIGH_Msk (0x20000000UL) /*!< GPIO7_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO7_LEVEL_LOW_Pos (28UL)      /*!< GPIO7_LEVEL_LOW (Bit 28) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO7_LEVEL_LOW_Msk (0x10000000UL) /*!< GPIO7_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO6_EDGE_HIGH_Pos (27UL)      /*!< GPIO6_EDGE_HIGH (Bit 27) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO6_EDGE_HIGH_Msk (0x8000000UL) /*!< GPIO6_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO6_EDGE_LOW_Pos (26UL)       /*!< GPIO6_EDGE_LOW (Bit 26) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO6_EDGE_LOW_Msk (0x4000000UL) /*!< GPIO6_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO6_LEVEL_HIGH_Pos (25UL)     /*!< GPIO6_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO6_LEVEL_HIGH_Msk (0x2000000UL) /*!< GPIO6_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO6_LEVEL_LOW_Pos (24UL)      /*!< GPIO6_LEVEL_LOW (Bit 24) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO6_LEVEL_LOW_Msk (0x1000000UL) /*!< GPIO6_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO5_EDGE_HIGH_Pos (23UL)      /*!< GPIO5_EDGE_HIGH (Bit 23) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO5_EDGE_HIGH_Msk (0x800000UL) /*!< GPIO5_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO5_EDGE_LOW_Pos (22UL)       /*!< GPIO5_EDGE_LOW (Bit 22) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO5_EDGE_LOW_Msk (0x400000UL) /*!< GPIO5_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO5_LEVEL_HIGH_Pos (21UL)     /*!< GPIO5_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO5_LEVEL_HIGH_Msk (0x200000UL) /*!< GPIO5_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO5_LEVEL_LOW_Pos (20UL)      /*!< GPIO5_LEVEL_LOW (Bit 20) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO5_LEVEL_LOW_Msk (0x100000UL) /*!< GPIO5_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO4_EDGE_HIGH_Pos (19UL)      /*!< GPIO4_EDGE_HIGH (Bit 19) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO4_EDGE_HIGH_Msk (0x80000UL) /*!< GPIO4_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO4_EDGE_LOW_Pos (18UL)       /*!< GPIO4_EDGE_LOW (Bit 18) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO4_EDGE_LOW_Msk (0x40000UL)  /*!< GPIO4_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO4_LEVEL_HIGH_Pos (17UL)     /*!< GPIO4_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO4_LEVEL_HIGH_Msk (0x20000UL) /*!< GPIO4_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO4_LEVEL_LOW_Pos (16UL)      /*!< GPIO4_LEVEL_LOW (Bit 16) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO4_LEVEL_LOW_Msk (0x10000UL) /*!< GPIO4_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO3_EDGE_HIGH_Pos (15UL)      /*!< GPIO3_EDGE_HIGH (Bit 15) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO3_EDGE_HIGH_Msk (0x8000UL)  /*!< GPIO3_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO3_EDGE_LOW_Pos (14UL)       /*!< GPIO3_EDGE_LOW (Bit 14) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO3_EDGE_LOW_Msk (0x4000UL)   /*!< GPIO3_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO3_LEVEL_HIGH_Pos (13UL)     /*!< GPIO3_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO3_LEVEL_HIGH_Msk (0x2000UL) /*!< GPIO3_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO3_LEVEL_LOW_Pos (12UL)      /*!< GPIO3_LEVEL_LOW (Bit 12) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO3_LEVEL_LOW_Msk (0x1000UL)  /*!< GPIO3_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO2_EDGE_HIGH_Pos (11UL)      /*!< GPIO2_EDGE_HIGH (Bit 11) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO2_EDGE_HIGH_Msk (0x800UL)   /*!< GPIO2_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO2_EDGE_LOW_Pos (10UL)       /*!< GPIO2_EDGE_LOW (Bit 10) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO2_EDGE_LOW_Msk (0x400UL)    /*!< GPIO2_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO2_LEVEL_HIGH_Pos (9UL)      /*!< GPIO2_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO2_LEVEL_HIGH_Msk (0x200UL)  /*!< GPIO2_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO2_LEVEL_LOW_Pos (8UL)       /*!< GPIO2_LEVEL_LOW (Bit 8) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO2_LEVEL_LOW_Msk (0x100UL)   /*!< GPIO2_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO1_EDGE_HIGH_Pos (7UL)       /*!< GPIO1_EDGE_HIGH (Bit 7) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO1_EDGE_HIGH_Msk (0x80UL)    /*!< GPIO1_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO1_EDGE_LOW_Pos (6UL)        /*!< GPIO1_EDGE_LOW (Bit 6) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO1_EDGE_LOW_Msk (0x40UL)     /*!< GPIO1_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO1_LEVEL_HIGH_Pos (5UL)      /*!< GPIO1_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO1_LEVEL_HIGH_Msk (0x20UL)   /*!< GPIO1_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO1_LEVEL_LOW_Pos (4UL)       /*!< GPIO1_LEVEL_LOW (Bit 4) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO1_LEVEL_LOW_Msk (0x10UL)    /*!< GPIO1_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO0_EDGE_HIGH_Pos (3UL)       /*!< GPIO0_EDGE_HIGH (Bit 3) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO0_EDGE_HIGH_Msk (0x8UL)     /*!< GPIO0_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO0_EDGE_LOW_Pos (2UL)        /*!< GPIO0_EDGE_LOW (Bit 2) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO0_EDGE_LOW_Msk (0x4UL)      /*!< GPIO0_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO0_LEVEL_HIGH_Pos (1UL)      /*!< GPIO0_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO0_LEVEL_HIGH_Msk (0x2UL)    /*!< GPIO0_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO0_LEVEL_LOW_Pos (0UL)       /*!< GPIO0_LEVEL_LOW (Bit 0) */
#define IO_BANK0_DORMANT_WAKE_INTS0_GPIO0_LEVEL_LOW_Msk (0x1UL)     /*!< GPIO0_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO15_EDGE_HIGH_Pos (31UL)     /*!< GPIO15_EDGE_HIGH (Bit 31) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO15_EDGE_HIGH_Msk (0x80000000UL) /*!< GPIO15_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO15_EDGE_LOW_Pos (30UL)      /*!< GPIO15_EDGE_LOW (Bit 30) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO15_EDGE_LOW_Msk (0x40000000UL) /*!< GPIO15_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO15_LEVEL_HIGH_Pos (29UL)    /*!< GPIO15_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO15_LEVEL_HIGH_Msk (0x20000000UL) /*!< GPIO15_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO15_LEVEL_LOW_Pos (28UL)     /*!< GPIO15_LEVEL_LOW (Bit 28) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO15_LEVEL_LOW_Msk (0x10000000UL) /*!< GPIO15_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO14_EDGE_HIGH_Pos (27UL)     /*!< GPIO14_EDGE_HIGH (Bit 27) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO14_EDGE_HIGH_Msk (0x8000000UL) /*!< GPIO14_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO14_EDGE_LOW_Pos (26UL)      /*!< GPIO14_EDGE_LOW (Bit 26) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO14_EDGE_LOW_Msk (0x4000000UL) /*!< GPIO14_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO14_LEVEL_HIGH_Pos (25UL)    /*!< GPIO14_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO14_LEVEL_HIGH_Msk (0x2000000UL) /*!< GPIO14_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO14_LEVEL_LOW_Pos (24UL)     /*!< GPIO14_LEVEL_LOW (Bit 24) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO14_LEVEL_LOW_Msk (0x1000000UL) /*!< GPIO14_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO13_EDGE_HIGH_Pos (23UL)     /*!< GPIO13_EDGE_HIGH (Bit 23) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO13_EDGE_HIGH_Msk (0x800000UL) /*!< GPIO13_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO13_EDGE_LOW_Pos (22UL)      /*!< GPIO13_EDGE_LOW (Bit 22) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO13_EDGE_LOW_Msk (0x400000UL) /*!< GPIO13_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO13_LEVEL_HIGH_Pos (21UL)    /*!< GPIO13_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO13_LEVEL_HIGH_Msk (0x200000UL) /*!< GPIO13_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO13_LEVEL_LOW_Pos (20UL)     /*!< GPIO13_LEVEL_LOW (Bit 20) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO13_LEVEL_LOW_Msk (0x100000UL) /*!< GPIO13_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO12_EDGE_HIGH_Pos (19UL)     /*!< GPIO12_EDGE_HIGH (Bit 19) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO12_EDGE_HIGH_Msk (0x80000UL) /*!< GPIO12_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO12_EDGE_LOW_Pos (18UL)      /*!< GPIO12_EDGE_LOW (Bit 18) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO12_EDGE_LOW_Msk (0x40000UL) /*!< GPIO12_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO12_LEVEL_HIGH_Pos (17UL)    /*!< GPIO12_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO12_LEVEL_HIGH_Msk (0x20000UL) /*!< GPIO12_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO12_LEVEL_LOW_Pos (16UL)     /*!< GPIO12_LEVEL_LOW (Bit 16) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO12_LEVEL_LOW_Msk (0x10000UL) /*!< GPIO12_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO11_EDGE_HIGH_Pos (15UL)     /*!< GPIO11_EDGE_HIGH (Bit 15) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO11_EDGE_HIGH_Msk (0x8000UL) /*!< GPIO11_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO11_EDGE_LOW_Pos (14UL)      /*!< GPIO11_EDGE_LOW (Bit 14) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO11_EDGE_LOW_Msk (0x4000UL)  /*!< GPIO11_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO11_LEVEL_HIGH_Pos (13UL)    /*!< GPIO11_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO11_LEVEL_HIGH_Msk (0x2000UL) /*!< GPIO11_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO11_LEVEL_LOW_Pos (12UL)     /*!< GPIO11_LEVEL_LOW (Bit 12) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO11_LEVEL_LOW_Msk (0x1000UL) /*!< GPIO11_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO10_EDGE_HIGH_Pos (11UL)     /*!< GPIO10_EDGE_HIGH (Bit 11) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO10_EDGE_HIGH_Msk (0x800UL)  /*!< GPIO10_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO10_EDGE_LOW_Pos (10UL)      /*!< GPIO10_EDGE_LOW (Bit 10) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO10_EDGE_LOW_Msk (0x400UL)   /*!< GPIO10_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO10_LEVEL_HIGH_Pos (9UL)     /*!< GPIO10_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO10_LEVEL_HIGH_Msk (0x200UL) /*!< GPIO10_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO10_LEVEL_LOW_Pos (8UL)      /*!< GPIO10_LEVEL_LOW (Bit 8) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO10_LEVEL_LOW_Msk (0x100UL)  /*!< GPIO10_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO9_EDGE_HIGH_Pos (7UL)       /*!< GPIO9_EDGE_HIGH (Bit 7) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO9_EDGE_HIGH_Msk (0x80UL)    /*!< GPIO9_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO9_EDGE_LOW_Pos (6UL)        /*!< GPIO9_EDGE_LOW (Bit 6) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO9_EDGE_LOW_Msk (0x40UL)     /*!< GPIO9_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO9_LEVEL_HIGH_Pos (5UL)      /*!< GPIO9_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO9_LEVEL_HIGH_Msk (0x20UL)   /*!< GPIO9_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO9_LEVEL_LOW_Pos (4UL)       /*!< GPIO9_LEVEL_LOW (Bit 4) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO9_LEVEL_LOW_Msk (0x10UL)    /*!< GPIO9_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO8_EDGE_HIGH_Pos (3UL)       /*!< GPIO8_EDGE_HIGH (Bit 3) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO8_EDGE_HIGH_Msk (0x8UL)     /*!< GPIO8_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO8_EDGE_LOW_Pos (2UL)        /*!< GPIO8_EDGE_LOW (Bit 2) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO8_EDGE_LOW_Msk (0x4UL)      /*!< GPIO8_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO8_LEVEL_HIGH_Pos (1UL)      /*!< GPIO8_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO8_LEVEL_HIGH_Msk (0x2UL)    /*!< GPIO8_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO8_LEVEL_LOW_Pos (0UL)       /*!< GPIO8_LEVEL_LOW (Bit 0) */
#define IO_BANK0_DORMANT_WAKE_INTS1_GPIO8_LEVEL_LOW_Msk (0x1UL)     /*!< GPIO8_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO23_EDGE_HIGH_Pos (31UL)     /*!< GPIO23_EDGE_HIGH (Bit 31) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO23_EDGE_HIGH_Msk (0x80000000UL) /*!< GPIO23_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO23_EDGE_LOW_Pos (30UL)      /*!< GPIO23_EDGE_LOW (Bit 30) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO23_EDGE_LOW_Msk (0x40000000UL) /*!< GPIO23_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO23_LEVEL_HIGH_Pos (29UL)    /*!< GPIO23_LEVEL_HIGH (Bit 29) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO23_LEVEL_HIGH_Msk (0x20000000UL) /*!< GPIO23_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO23_LEVEL_LOW_Pos (28UL)     /*!< GPIO23_LEVEL_LOW (Bit 28) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO23_LEVEL_LOW_Msk (0x10000000UL) /*!< GPIO23_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO22_EDGE_HIGH_Pos (27UL)     /*!< GPIO22_EDGE_HIGH (Bit 27) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO22_EDGE_HIGH_Msk (0x8000000UL) /*!< GPIO22_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO22_EDGE_LOW_Pos (26UL)      /*!< GPIO22_EDGE_LOW (Bit 26) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO22_EDGE_LOW_Msk (0x4000000UL) /*!< GPIO22_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO22_LEVEL_HIGH_Pos (25UL)    /*!< GPIO22_LEVEL_HIGH (Bit 25) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO22_LEVEL_HIGH_Msk (0x2000000UL) /*!< GPIO22_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO22_LEVEL_LOW_Pos (24UL)     /*!< GPIO22_LEVEL_LOW (Bit 24) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO22_LEVEL_LOW_Msk (0x1000000UL) /*!< GPIO22_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO21_EDGE_HIGH_Pos (23UL)     /*!< GPIO21_EDGE_HIGH (Bit 23) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO21_EDGE_HIGH_Msk (0x800000UL) /*!< GPIO21_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO21_EDGE_LOW_Pos (22UL)      /*!< GPIO21_EDGE_LOW (Bit 22) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO21_EDGE_LOW_Msk (0x400000UL) /*!< GPIO21_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO21_LEVEL_HIGH_Pos (21UL)    /*!< GPIO21_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO21_LEVEL_HIGH_Msk (0x200000UL) /*!< GPIO21_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO21_LEVEL_LOW_Pos (20UL)     /*!< GPIO21_LEVEL_LOW (Bit 20) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO21_LEVEL_LOW_Msk (0x100000UL) /*!< GPIO21_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO20_EDGE_HIGH_Pos (19UL)     /*!< GPIO20_EDGE_HIGH (Bit 19) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO20_EDGE_HIGH_Msk (0x80000UL) /*!< GPIO20_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO20_EDGE_LOW_Pos (18UL)      /*!< GPIO20_EDGE_LOW (Bit 18) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO20_EDGE_LOW_Msk (0x40000UL) /*!< GPIO20_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO20_LEVEL_HIGH_Pos (17UL)    /*!< GPIO20_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO20_LEVEL_HIGH_Msk (0x20000UL) /*!< GPIO20_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO20_LEVEL_LOW_Pos (16UL)     /*!< GPIO20_LEVEL_LOW (Bit 16) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO20_LEVEL_LOW_Msk (0x10000UL) /*!< GPIO20_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO19_EDGE_HIGH_Pos (15UL)     /*!< GPIO19_EDGE_HIGH (Bit 15) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO19_EDGE_HIGH_Msk (0x8000UL) /*!< GPIO19_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO19_EDGE_LOW_Pos (14UL)      /*!< GPIO19_EDGE_LOW (Bit 14) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO19_EDGE_LOW_Msk (0x4000UL)  /*!< GPIO19_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO19_LEVEL_HIGH_Pos (13UL)    /*!< GPIO19_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO19_LEVEL_HIGH_Msk (0x2000UL) /*!< GPIO19_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO19_LEVEL_LOW_Pos (12UL)     /*!< GPIO19_LEVEL_LOW (Bit 12) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO19_LEVEL_LOW_Msk (0x1000UL) /*!< GPIO19_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO18_EDGE_HIGH_Pos (11UL)     /*!< GPIO18_EDGE_HIGH (Bit 11) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO18_EDGE_HIGH_Msk (0x800UL)  /*!< GPIO18_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO18_EDGE_LOW_Pos (10UL)      /*!< GPIO18_EDGE_LOW (Bit 10) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO18_EDGE_LOW_Msk (0x400UL)   /*!< GPIO18_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO18_LEVEL_HIGH_Pos (9UL)     /*!< GPIO18_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO18_LEVEL_HIGH_Msk (0x200UL) /*!< GPIO18_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO18_LEVEL_LOW_Pos (8UL)      /*!< GPIO18_LEVEL_LOW (Bit 8) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO18_LEVEL_LOW_Msk (0x100UL)  /*!< GPIO18_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO17_EDGE_HIGH_Pos (7UL)      /*!< GPIO17_EDGE_HIGH (Bit 7) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO17_EDGE_HIGH_Msk (0x80UL)   /*!< GPIO17_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO17_EDGE_LOW_Pos (6UL)       /*!< GPIO17_EDGE_LOW (Bit 6) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO17_EDGE_LOW_Msk (0x40UL)    /*!< GPIO17_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO17_LEVEL_HIGH_Pos (5UL)     /*!< GPIO17_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO17_LEVEL_HIGH_Msk (0x20UL)  /*!< GPIO17_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO17_LEVEL_LOW_Pos (4UL)      /*!< GPIO17_LEVEL_LOW (Bit 4) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO17_LEVEL_LOW_Msk (0x10UL)   /*!< GPIO17_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO16_EDGE_HIGH_Pos (3UL)      /*!< GPIO16_EDGE_HIGH (Bit 3) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO16_EDGE_HIGH_Msk (0x8UL)    /*!< GPIO16_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO16_EDGE_LOW_Pos (2UL)       /*!< GPIO16_EDGE_LOW (Bit 2) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO16_EDGE_LOW_Msk (0x4UL)     /*!< GPIO16_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO16_LEVEL_HIGH_Pos (1UL)     /*!< GPIO16_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO16_LEVEL_HIGH_Msk (0x2UL)   /*!< GPIO16_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO16_LEVEL_LOW_Pos (0UL)      /*!< GPIO16_LEVEL_LOW (Bit 0) */
#define IO_BANK0_DORMANT_WAKE_INTS2_GPIO16_LEVEL_LOW_Msk (0x1UL)    /*!< GPIO16_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO29_EDGE_HIGH_Pos (23UL)     /*!< GPIO29_EDGE_HIGH (Bit 23) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO29_EDGE_HIGH_Msk (0x800000UL) /*!< GPIO29_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO29_EDGE_LOW_Pos (22UL)      /*!< GPIO29_EDGE_LOW (Bit 22) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO29_EDGE_LOW_Msk (0x400000UL) /*!< GPIO29_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO29_LEVEL_HIGH_Pos (21UL)    /*!< GPIO29_LEVEL_HIGH (Bit 21) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO29_LEVEL_HIGH_Msk (0x200000UL) /*!< GPIO29_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO29_LEVEL_LOW_Pos (20UL)     /*!< GPIO29_LEVEL_LOW (Bit 20) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO29_LEVEL_LOW_Msk (0x100000UL) /*!< GPIO29_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO28_EDGE_HIGH_Pos (19UL)     /*!< GPIO28_EDGE_HIGH (Bit 19) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO28_EDGE_HIGH_Msk (0x80000UL) /*!< GPIO28_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO28_EDGE_LOW_Pos (18UL)      /*!< GPIO28_EDGE_LOW (Bit 18) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO28_EDGE_LOW_Msk (0x40000UL) /*!< GPIO28_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO28_LEVEL_HIGH_Pos (17UL)    /*!< GPIO28_LEVEL_HIGH (Bit 17) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO28_LEVEL_HIGH_Msk (0x20000UL) /*!< GPIO28_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO28_LEVEL_LOW_Pos (16UL)     /*!< GPIO28_LEVEL_LOW (Bit 16) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO28_LEVEL_LOW_Msk (0x10000UL) /*!< GPIO28_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO27_EDGE_HIGH_Pos (15UL)     /*!< GPIO27_EDGE_HIGH (Bit 15) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO27_EDGE_HIGH_Msk (0x8000UL) /*!< GPIO27_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO27_EDGE_LOW_Pos (14UL)      /*!< GPIO27_EDGE_LOW (Bit 14) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO27_EDGE_LOW_Msk (0x4000UL)  /*!< GPIO27_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO27_LEVEL_HIGH_Pos (13UL)    /*!< GPIO27_LEVEL_HIGH (Bit 13) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO27_LEVEL_HIGH_Msk (0x2000UL) /*!< GPIO27_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO27_LEVEL_LOW_Pos (12UL)     /*!< GPIO27_LEVEL_LOW (Bit 12) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO27_LEVEL_LOW_Msk (0x1000UL) /*!< GPIO27_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO26_EDGE_HIGH_Pos (11UL)     /*!< GPIO26_EDGE_HIGH (Bit 11) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO26_EDGE_HIGH_Msk (0x800UL)  /*!< GPIO26_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO26_EDGE_LOW_Pos (10UL)      /*!< GPIO26_EDGE_LOW (Bit 10) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO26_EDGE_LOW_Msk (0x400UL)   /*!< GPIO26_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO26_LEVEL_HIGH_Pos (9UL)     /*!< GPIO26_LEVEL_HIGH (Bit 9) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO26_LEVEL_HIGH_Msk (0x200UL) /*!< GPIO26_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO26_LEVEL_LOW_Pos (8UL)      /*!< GPIO26_LEVEL_LOW (Bit 8) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO26_LEVEL_LOW_Msk (0x100UL)  /*!< GPIO26_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO25_EDGE_HIGH_Pos (7UL)      /*!< GPIO25_EDGE_HIGH (Bit 7) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO25_EDGE_HIGH_Msk (0x80UL)   /*!< GPIO25_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO25_EDGE_LOW_Pos (6UL)       /*!< GPIO25_EDGE_LOW (Bit 6) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO25_EDGE_LOW_Msk (0x40UL)    /*!< GPIO25_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO25_LEVEL_HIGH_Pos (5UL)     /*!< GPIO25_LEVEL_HIGH (Bit 5) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO25_LEVEL_HIGH_Msk (0x20UL)  /*!< GPIO25_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO25_LEVEL_LOW_Pos (4UL)      /*!< GPIO25_LEVEL_LOW (Bit 4) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO25_LEVEL_LOW_Msk (0x10UL)   /*!< GPIO25_LEVEL_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO24_EDGE_HIGH_Pos (3UL)      /*!< GPIO24_EDGE_HIGH (Bit 3) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO24_EDGE_HIGH_Msk (0x8UL)    /*!< GPIO24_EDGE_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO24_EDGE_LOW_Pos (2UL)       /*!< GPIO24_EDGE_LOW (Bit 2) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO24_EDGE_LOW_Msk (0x4UL)     /*!< GPIO24_EDGE_LOW (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO24_LEVEL_HIGH_Pos (1UL)     /*!< GPIO24_LEVEL_HIGH (Bit 1) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO24_LEVEL_HIGH_Msk (0x2UL)   /*!< GPIO24_LEVEL_HIGH (Bitfield-Mask: 0x01) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO24_LEVEL_LOW_Pos (0UL)      /*!< GPIO24_LEVEL_LOW (Bit 0) */
#define IO_BANK0_DORMANT_WAKE_INTS3_GPIO24_LEVEL_LOW_Msk (0x1UL)    /*!< GPIO24_LEVEL_LOW (Bitfield-Mask: 0x01) */
/* ================                                         IO_BANK0                                          ================ */
/* =========================================  IO_BANK0 GPIO0_CTRL IRQOVER [28..29]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO0_CTRL_IRQOVER */
  IO_BANK0_GPIO0_CTRL_IRQOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO0_CTRL_IRQOVER_INVERT   = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO0_CTRL_IRQOVER_LOW      = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO0_CTRL_IRQOVER_HIGH     = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO0_CTRL_IRQOVER_Enum;
/* ==========================================  IO_BANK0 GPIO0_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO0_CTRL_INOVER */
  IO_BANK0_GPIO0_CTRL_INOVER_NORMAL    = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO0_CTRL_INOVER_INVERT    = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO0_CTRL_INOVER_LOW       = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO0_CTRL_INOVER_HIGH      = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO0_CTRL_INOVER_Enum;
/* ==========================================  IO_BANK0 GPIO0_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO0_CTRL_OEOVER */
  IO_BANK0_GPIO0_CTRL_OEOVER_NORMAL    = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO0_CTRL_OEOVER_INVERT    = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO0_CTRL_OEOVER_DISABLE   = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO0_CTRL_OEOVER_ENABLE    = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO0_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO0_CTRL OUTOVER [8..9]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO0_CTRL_OUTOVER */
  IO_BANK0_GPIO0_CTRL_OUTOVER_NORMAL   = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO0_CTRL_OUTOVER_INVERT   = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO0_CTRL_OUTOVER_LOW      = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO0_CTRL_OUTOVER_HIGH     = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO0_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO0_CTRL FUNCSEL [0..4]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO0_CTRL_FUNCSEL */
  IO_BANK0_GPIO0_CTRL_FUNCSEL_jtag_tck = 0,     /*!< jtag_tck : jtag_tck */
  IO_BANK0_GPIO0_CTRL_FUNCSEL_spi0_rx  = 1,     /*!< spi0_rx : spi0_rx */
  IO_BANK0_GPIO0_CTRL_FUNCSEL_uart0_tx = 2,     /*!< uart0_tx : uart0_tx */
  IO_BANK0_GPIO0_CTRL_FUNCSEL_i2c0_sda = 3,     /*!< i2c0_sda : i2c0_sda */
  IO_BANK0_GPIO0_CTRL_FUNCSEL_pwm_a_0  = 4,     /*!< pwm_a_0 : pwm_a_0 */
  IO_BANK0_GPIO0_CTRL_FUNCSEL_sio_0    = 5,     /*!< sio_0 : sio_0 */
  IO_BANK0_GPIO0_CTRL_FUNCSEL_pio0_0   = 6,     /*!< pio0_0 : pio0_0 */
  IO_BANK0_GPIO0_CTRL_FUNCSEL_pio1_0   = 7,     /*!< pio1_0 : pio1_0 */
  IO_BANK0_GPIO0_CTRL_FUNCSEL_usb_muxing_overcurr_detect = 9,/*!< usb_muxing_overcurr_detect : usb_muxing_overcurr_detect */
  IO_BANK0_GPIO0_CTRL_FUNCSEL_null     = 31,    /*!< null : null */
} IO_BANK0_GPIO0_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO1_CTRL IRQOVER [28..29]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO1_CTRL_IRQOVER */
  IO_BANK0_GPIO1_CTRL_IRQOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO1_CTRL_IRQOVER_INVERT   = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO1_CTRL_IRQOVER_LOW      = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO1_CTRL_IRQOVER_HIGH     = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO1_CTRL_IRQOVER_Enum;
/* ==========================================  IO_BANK0 GPIO1_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO1_CTRL_INOVER */
  IO_BANK0_GPIO1_CTRL_INOVER_NORMAL    = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO1_CTRL_INOVER_INVERT    = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO1_CTRL_INOVER_LOW       = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO1_CTRL_INOVER_HIGH      = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO1_CTRL_INOVER_Enum;
/* ==========================================  IO_BANK0 GPIO1_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO1_CTRL_OEOVER */
  IO_BANK0_GPIO1_CTRL_OEOVER_NORMAL    = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO1_CTRL_OEOVER_INVERT    = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO1_CTRL_OEOVER_DISABLE   = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO1_CTRL_OEOVER_ENABLE    = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO1_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO1_CTRL OUTOVER [8..9]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO1_CTRL_OUTOVER */
  IO_BANK0_GPIO1_CTRL_OUTOVER_NORMAL   = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO1_CTRL_OUTOVER_INVERT   = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO1_CTRL_OUTOVER_LOW      = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO1_CTRL_OUTOVER_HIGH     = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO1_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO1_CTRL FUNCSEL [0..4]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO1_CTRL_FUNCSEL */
  IO_BANK0_GPIO1_CTRL_FUNCSEL_jtag_tms = 0,     /*!< jtag_tms : jtag_tms */
  IO_BANK0_GPIO1_CTRL_FUNCSEL_spi0_ss_n = 1,    /*!< spi0_ss_n : spi0_ss_n */
  IO_BANK0_GPIO1_CTRL_FUNCSEL_uart0_rx = 2,     /*!< uart0_rx : uart0_rx */
  IO_BANK0_GPIO1_CTRL_FUNCSEL_i2c0_scl = 3,     /*!< i2c0_scl : i2c0_scl */
  IO_BANK0_GPIO1_CTRL_FUNCSEL_pwm_b_0  = 4,     /*!< pwm_b_0 : pwm_b_0 */
  IO_BANK0_GPIO1_CTRL_FUNCSEL_sio_1    = 5,     /*!< sio_1 : sio_1 */
  IO_BANK0_GPIO1_CTRL_FUNCSEL_pio0_1   = 6,     /*!< pio0_1 : pio0_1 */
  IO_BANK0_GPIO1_CTRL_FUNCSEL_pio1_1   = 7,     /*!< pio1_1 : pio1_1 */
  IO_BANK0_GPIO1_CTRL_FUNCSEL_usb_muxing_vbus_detect = 9,/*!< usb_muxing_vbus_detect : usb_muxing_vbus_detect */
  IO_BANK0_GPIO1_CTRL_FUNCSEL_null     = 31,    /*!< null : null */
} IO_BANK0_GPIO1_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO2_CTRL IRQOVER [28..29]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO2_CTRL_IRQOVER */
  IO_BANK0_GPIO2_CTRL_IRQOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO2_CTRL_IRQOVER_INVERT   = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO2_CTRL_IRQOVER_LOW      = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO2_CTRL_IRQOVER_HIGH     = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO2_CTRL_IRQOVER_Enum;
/* ==========================================  IO_BANK0 GPIO2_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO2_CTRL_INOVER */
  IO_BANK0_GPIO2_CTRL_INOVER_NORMAL    = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO2_CTRL_INOVER_INVERT    = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO2_CTRL_INOVER_LOW       = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO2_CTRL_INOVER_HIGH      = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO2_CTRL_INOVER_Enum;
/* ==========================================  IO_BANK0 GPIO2_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO2_CTRL_OEOVER */
  IO_BANK0_GPIO2_CTRL_OEOVER_NORMAL    = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO2_CTRL_OEOVER_INVERT    = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO2_CTRL_OEOVER_DISABLE   = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO2_CTRL_OEOVER_ENABLE    = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO2_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO2_CTRL OUTOVER [8..9]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO2_CTRL_OUTOVER */
  IO_BANK0_GPIO2_CTRL_OUTOVER_NORMAL   = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO2_CTRL_OUTOVER_INVERT   = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO2_CTRL_OUTOVER_LOW      = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO2_CTRL_OUTOVER_HIGH     = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO2_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO2_CTRL FUNCSEL [0..4]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO2_CTRL_FUNCSEL */
  IO_BANK0_GPIO2_CTRL_FUNCSEL_jtag_tdi = 0,     /*!< jtag_tdi : jtag_tdi */
  IO_BANK0_GPIO2_CTRL_FUNCSEL_spi0_sclk = 1,    /*!< spi0_sclk : spi0_sclk */
  IO_BANK0_GPIO2_CTRL_FUNCSEL_uart0_cts = 2,    /*!< uart0_cts : uart0_cts */
  IO_BANK0_GPIO2_CTRL_FUNCSEL_i2c1_sda = 3,     /*!< i2c1_sda : i2c1_sda */
  IO_BANK0_GPIO2_CTRL_FUNCSEL_pwm_a_1  = 4,     /*!< pwm_a_1 : pwm_a_1 */
  IO_BANK0_GPIO2_CTRL_FUNCSEL_sio_2    = 5,     /*!< sio_2 : sio_2 */
  IO_BANK0_GPIO2_CTRL_FUNCSEL_pio0_2   = 6,     /*!< pio0_2 : pio0_2 */
  IO_BANK0_GPIO2_CTRL_FUNCSEL_pio1_2   = 7,     /*!< pio1_2 : pio1_2 */
  IO_BANK0_GPIO2_CTRL_FUNCSEL_usb_muxing_vbus_en = 9,/*!< usb_muxing_vbus_en : usb_muxing_vbus_en */
  IO_BANK0_GPIO2_CTRL_FUNCSEL_null     = 31,    /*!< null : null */
} IO_BANK0_GPIO2_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO3_CTRL IRQOVER [28..29]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO3_CTRL_IRQOVER */
  IO_BANK0_GPIO3_CTRL_IRQOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO3_CTRL_IRQOVER_INVERT   = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO3_CTRL_IRQOVER_LOW      = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO3_CTRL_IRQOVER_HIGH     = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO3_CTRL_IRQOVER_Enum;
/* ==========================================  IO_BANK0 GPIO3_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO3_CTRL_INOVER */
  IO_BANK0_GPIO3_CTRL_INOVER_NORMAL    = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO3_CTRL_INOVER_INVERT    = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO3_CTRL_INOVER_LOW       = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO3_CTRL_INOVER_HIGH      = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO3_CTRL_INOVER_Enum;
/* ==========================================  IO_BANK0 GPIO3_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO3_CTRL_OEOVER */
  IO_BANK0_GPIO3_CTRL_OEOVER_NORMAL    = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO3_CTRL_OEOVER_INVERT    = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO3_CTRL_OEOVER_DISABLE   = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO3_CTRL_OEOVER_ENABLE    = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO3_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO3_CTRL OUTOVER [8..9]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO3_CTRL_OUTOVER */
  IO_BANK0_GPIO3_CTRL_OUTOVER_NORMAL   = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO3_CTRL_OUTOVER_INVERT   = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO3_CTRL_OUTOVER_LOW      = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO3_CTRL_OUTOVER_HIGH     = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO3_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO3_CTRL FUNCSEL [0..4]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO3_CTRL_FUNCSEL */
  IO_BANK0_GPIO3_CTRL_FUNCSEL_jtag_tdo = 0,     /*!< jtag_tdo : jtag_tdo */
  IO_BANK0_GPIO3_CTRL_FUNCSEL_spi0_tx  = 1,     /*!< spi0_tx : spi0_tx */
  IO_BANK0_GPIO3_CTRL_FUNCSEL_uart0_rts = 2,    /*!< uart0_rts : uart0_rts */
  IO_BANK0_GPIO3_CTRL_FUNCSEL_i2c1_scl = 3,     /*!< i2c1_scl : i2c1_scl */
  IO_BANK0_GPIO3_CTRL_FUNCSEL_pwm_b_1  = 4,     /*!< pwm_b_1 : pwm_b_1 */
  IO_BANK0_GPIO3_CTRL_FUNCSEL_sio_3    = 5,     /*!< sio_3 : sio_3 */
  IO_BANK0_GPIO3_CTRL_FUNCSEL_pio0_3   = 6,     /*!< pio0_3 : pio0_3 */
  IO_BANK0_GPIO3_CTRL_FUNCSEL_pio1_3   = 7,     /*!< pio1_3 : pio1_3 */
  IO_BANK0_GPIO3_CTRL_FUNCSEL_usb_muxing_overcurr_detect = 9,/*!< usb_muxing_overcurr_detect : usb_muxing_overcurr_detect */
  IO_BANK0_GPIO3_CTRL_FUNCSEL_null     = 31,    /*!< null : null */
} IO_BANK0_GPIO3_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO4_CTRL IRQOVER [28..29]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO4_CTRL_IRQOVER */
  IO_BANK0_GPIO4_CTRL_IRQOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO4_CTRL_IRQOVER_INVERT   = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO4_CTRL_IRQOVER_LOW      = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO4_CTRL_IRQOVER_HIGH     = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO4_CTRL_IRQOVER_Enum;
/* ==========================================  IO_BANK0 GPIO4_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO4_CTRL_INOVER */
  IO_BANK0_GPIO4_CTRL_INOVER_NORMAL    = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO4_CTRL_INOVER_INVERT    = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO4_CTRL_INOVER_LOW       = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO4_CTRL_INOVER_HIGH      = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO4_CTRL_INOVER_Enum;
/* ==========================================  IO_BANK0 GPIO4_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO4_CTRL_OEOVER */
  IO_BANK0_GPIO4_CTRL_OEOVER_NORMAL    = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO4_CTRL_OEOVER_INVERT    = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO4_CTRL_OEOVER_DISABLE   = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO4_CTRL_OEOVER_ENABLE    = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO4_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO4_CTRL OUTOVER [8..9]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO4_CTRL_OUTOVER */
  IO_BANK0_GPIO4_CTRL_OUTOVER_NORMAL   = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO4_CTRL_OUTOVER_INVERT   = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO4_CTRL_OUTOVER_LOW      = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO4_CTRL_OUTOVER_HIGH     = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO4_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO4_CTRL FUNCSEL [0..4]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO4_CTRL_FUNCSEL */
  IO_BANK0_GPIO4_CTRL_FUNCSEL_spi0_rx  = 1,     /*!< spi0_rx : spi0_rx */
  IO_BANK0_GPIO4_CTRL_FUNCSEL_uart1_tx = 2,     /*!< uart1_tx : uart1_tx */
  IO_BANK0_GPIO4_CTRL_FUNCSEL_i2c0_sda = 3,     /*!< i2c0_sda : i2c0_sda */
  IO_BANK0_GPIO4_CTRL_FUNCSEL_pwm_a_2  = 4,     /*!< pwm_a_2 : pwm_a_2 */
  IO_BANK0_GPIO4_CTRL_FUNCSEL_sio_4    = 5,     /*!< sio_4 : sio_4 */
  IO_BANK0_GPIO4_CTRL_FUNCSEL_pio0_4   = 6,     /*!< pio0_4 : pio0_4 */
  IO_BANK0_GPIO4_CTRL_FUNCSEL_pio1_4   = 7,     /*!< pio1_4 : pio1_4 */
  IO_BANK0_GPIO4_CTRL_FUNCSEL_usb_muxing_vbus_detect = 9,/*!< usb_muxing_vbus_detect : usb_muxing_vbus_detect */
  IO_BANK0_GPIO4_CTRL_FUNCSEL_null     = 31,    /*!< null : null */
} IO_BANK0_GPIO4_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO5_CTRL IRQOVER [28..29]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO5_CTRL_IRQOVER */
  IO_BANK0_GPIO5_CTRL_IRQOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO5_CTRL_IRQOVER_INVERT   = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO5_CTRL_IRQOVER_LOW      = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO5_CTRL_IRQOVER_HIGH     = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO5_CTRL_IRQOVER_Enum;
/* ==========================================  IO_BANK0 GPIO5_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO5_CTRL_INOVER */
  IO_BANK0_GPIO5_CTRL_INOVER_NORMAL    = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO5_CTRL_INOVER_INVERT    = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO5_CTRL_INOVER_LOW       = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO5_CTRL_INOVER_HIGH      = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO5_CTRL_INOVER_Enum;
/* ==========================================  IO_BANK0 GPIO5_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO5_CTRL_OEOVER */
  IO_BANK0_GPIO5_CTRL_OEOVER_NORMAL    = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO5_CTRL_OEOVER_INVERT    = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO5_CTRL_OEOVER_DISABLE   = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO5_CTRL_OEOVER_ENABLE    = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO5_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO5_CTRL OUTOVER [8..9]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO5_CTRL_OUTOVER */
  IO_BANK0_GPIO5_CTRL_OUTOVER_NORMAL   = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO5_CTRL_OUTOVER_INVERT   = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO5_CTRL_OUTOVER_LOW      = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO5_CTRL_OUTOVER_HIGH     = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO5_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO5_CTRL FUNCSEL [0..4]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO5_CTRL_FUNCSEL */
  IO_BANK0_GPIO5_CTRL_FUNCSEL_spi0_ss_n = 1,    /*!< spi0_ss_n : spi0_ss_n */
  IO_BANK0_GPIO5_CTRL_FUNCSEL_uart1_rx = 2,     /*!< uart1_rx : uart1_rx */
  IO_BANK0_GPIO5_CTRL_FUNCSEL_i2c0_scl = 3,     /*!< i2c0_scl : i2c0_scl */
  IO_BANK0_GPIO5_CTRL_FUNCSEL_pwm_b_2  = 4,     /*!< pwm_b_2 : pwm_b_2 */
  IO_BANK0_GPIO5_CTRL_FUNCSEL_sio_5    = 5,     /*!< sio_5 : sio_5 */
  IO_BANK0_GPIO5_CTRL_FUNCSEL_pio0_5   = 6,     /*!< pio0_5 : pio0_5 */
  IO_BANK0_GPIO5_CTRL_FUNCSEL_pio1_5   = 7,     /*!< pio1_5 : pio1_5 */
  IO_BANK0_GPIO5_CTRL_FUNCSEL_usb_muxing_vbus_en = 9,/*!< usb_muxing_vbus_en : usb_muxing_vbus_en */
  IO_BANK0_GPIO5_CTRL_FUNCSEL_null     = 31,    /*!< null : null */
} IO_BANK0_GPIO5_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO6_CTRL IRQOVER [28..29]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO6_CTRL_IRQOVER */
  IO_BANK0_GPIO6_CTRL_IRQOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO6_CTRL_IRQOVER_INVERT   = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO6_CTRL_IRQOVER_LOW      = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO6_CTRL_IRQOVER_HIGH     = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO6_CTRL_IRQOVER_Enum;
/* ==========================================  IO_BANK0 GPIO6_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO6_CTRL_INOVER */
  IO_BANK0_GPIO6_CTRL_INOVER_NORMAL    = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO6_CTRL_INOVER_INVERT    = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO6_CTRL_INOVER_LOW       = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO6_CTRL_INOVER_HIGH      = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO6_CTRL_INOVER_Enum;
/* ==========================================  IO_BANK0 GPIO6_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO6_CTRL_OEOVER */
  IO_BANK0_GPIO6_CTRL_OEOVER_NORMAL    = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO6_CTRL_OEOVER_INVERT    = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO6_CTRL_OEOVER_DISABLE   = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO6_CTRL_OEOVER_ENABLE    = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO6_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO6_CTRL OUTOVER [8..9]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO6_CTRL_OUTOVER */
  IO_BANK0_GPIO6_CTRL_OUTOVER_NORMAL   = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO6_CTRL_OUTOVER_INVERT   = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO6_CTRL_OUTOVER_LOW      = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO6_CTRL_OUTOVER_HIGH     = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO6_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO6_CTRL FUNCSEL [0..4]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO6_CTRL_FUNCSEL */
  IO_BANK0_GPIO6_CTRL_FUNCSEL_spi0_sclk = 1,    /*!< spi0_sclk : spi0_sclk */
  IO_BANK0_GPIO6_CTRL_FUNCSEL_uart1_cts = 2,    /*!< uart1_cts : uart1_cts */
  IO_BANK0_GPIO6_CTRL_FUNCSEL_i2c1_sda = 3,     /*!< i2c1_sda : i2c1_sda */
  IO_BANK0_GPIO6_CTRL_FUNCSEL_pwm_a_3  = 4,     /*!< pwm_a_3 : pwm_a_3 */
  IO_BANK0_GPIO6_CTRL_FUNCSEL_sio_6    = 5,     /*!< sio_6 : sio_6 */
  IO_BANK0_GPIO6_CTRL_FUNCSEL_pio0_6   = 6,     /*!< pio0_6 : pio0_6 */
  IO_BANK0_GPIO6_CTRL_FUNCSEL_pio1_6   = 7,     /*!< pio1_6 : pio1_6 */
  IO_BANK0_GPIO6_CTRL_FUNCSEL_usb_muxing_extphy_softcon = 8,/*!< usb_muxing_extphy_softcon : usb_muxing_extphy_softcon */
  IO_BANK0_GPIO6_CTRL_FUNCSEL_usb_muxing_overcurr_detect = 9,/*!< usb_muxing_overcurr_detect : usb_muxing_overcurr_detect */
  IO_BANK0_GPIO6_CTRL_FUNCSEL_null     = 31,    /*!< null : null */
} IO_BANK0_GPIO6_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO7_CTRL IRQOVER [28..29]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO7_CTRL_IRQOVER */
  IO_BANK0_GPIO7_CTRL_IRQOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO7_CTRL_IRQOVER_INVERT   = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO7_CTRL_IRQOVER_LOW      = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO7_CTRL_IRQOVER_HIGH     = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO7_CTRL_IRQOVER_Enum;
/* ==========================================  IO_BANK0 GPIO7_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO7_CTRL_INOVER */
  IO_BANK0_GPIO7_CTRL_INOVER_NORMAL    = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO7_CTRL_INOVER_INVERT    = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO7_CTRL_INOVER_LOW       = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO7_CTRL_INOVER_HIGH      = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO7_CTRL_INOVER_Enum;
/* ==========================================  IO_BANK0 GPIO7_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO7_CTRL_OEOVER */
  IO_BANK0_GPIO7_CTRL_OEOVER_NORMAL    = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO7_CTRL_OEOVER_INVERT    = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO7_CTRL_OEOVER_DISABLE   = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO7_CTRL_OEOVER_ENABLE    = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO7_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO7_CTRL OUTOVER [8..9]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO7_CTRL_OUTOVER */
  IO_BANK0_GPIO7_CTRL_OUTOVER_NORMAL   = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO7_CTRL_OUTOVER_INVERT   = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO7_CTRL_OUTOVER_LOW      = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO7_CTRL_OUTOVER_HIGH     = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO7_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO7_CTRL FUNCSEL [0..4]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO7_CTRL_FUNCSEL */
  IO_BANK0_GPIO7_CTRL_FUNCSEL_spi0_tx  = 1,     /*!< spi0_tx : spi0_tx */
  IO_BANK0_GPIO7_CTRL_FUNCSEL_uart1_rts = 2,    /*!< uart1_rts : uart1_rts */
  IO_BANK0_GPIO7_CTRL_FUNCSEL_i2c1_scl = 3,     /*!< i2c1_scl : i2c1_scl */
  IO_BANK0_GPIO7_CTRL_FUNCSEL_pwm_b_3  = 4,     /*!< pwm_b_3 : pwm_b_3 */
  IO_BANK0_GPIO7_CTRL_FUNCSEL_sio_7    = 5,     /*!< sio_7 : sio_7 */
  IO_BANK0_GPIO7_CTRL_FUNCSEL_pio0_7   = 6,     /*!< pio0_7 : pio0_7 */
  IO_BANK0_GPIO7_CTRL_FUNCSEL_pio1_7   = 7,     /*!< pio1_7 : pio1_7 */
  IO_BANK0_GPIO7_CTRL_FUNCSEL_usb_muxing_extphy_oe_n = 8,/*!< usb_muxing_extphy_oe_n : usb_muxing_extphy_oe_n */
  IO_BANK0_GPIO7_CTRL_FUNCSEL_usb_muxing_vbus_detect = 9,/*!< usb_muxing_vbus_detect : usb_muxing_vbus_detect */
  IO_BANK0_GPIO7_CTRL_FUNCSEL_null     = 31,    /*!< null : null */
} IO_BANK0_GPIO7_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO8_CTRL IRQOVER [28..29]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO8_CTRL_IRQOVER */
  IO_BANK0_GPIO8_CTRL_IRQOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO8_CTRL_IRQOVER_INVERT   = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO8_CTRL_IRQOVER_LOW      = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO8_CTRL_IRQOVER_HIGH     = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO8_CTRL_IRQOVER_Enum;
/* ==========================================  IO_BANK0 GPIO8_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO8_CTRL_INOVER */
  IO_BANK0_GPIO8_CTRL_INOVER_NORMAL    = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO8_CTRL_INOVER_INVERT    = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO8_CTRL_INOVER_LOW       = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO8_CTRL_INOVER_HIGH      = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO8_CTRL_INOVER_Enum;
/* ==========================================  IO_BANK0 GPIO8_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO8_CTRL_OEOVER */
  IO_BANK0_GPIO8_CTRL_OEOVER_NORMAL    = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO8_CTRL_OEOVER_INVERT    = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO8_CTRL_OEOVER_DISABLE   = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO8_CTRL_OEOVER_ENABLE    = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO8_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO8_CTRL OUTOVER [8..9]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO8_CTRL_OUTOVER */
  IO_BANK0_GPIO8_CTRL_OUTOVER_NORMAL   = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO8_CTRL_OUTOVER_INVERT   = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO8_CTRL_OUTOVER_LOW      = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO8_CTRL_OUTOVER_HIGH     = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO8_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO8_CTRL FUNCSEL [0..4]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO8_CTRL_FUNCSEL */
  IO_BANK0_GPIO8_CTRL_FUNCSEL_spi1_rx  = 1,     /*!< spi1_rx : spi1_rx */
  IO_BANK0_GPIO8_CTRL_FUNCSEL_uart1_tx = 2,     /*!< uart1_tx : uart1_tx */
  IO_BANK0_GPIO8_CTRL_FUNCSEL_i2c0_sda = 3,     /*!< i2c0_sda : i2c0_sda */
  IO_BANK0_GPIO8_CTRL_FUNCSEL_pwm_a_4  = 4,     /*!< pwm_a_4 : pwm_a_4 */
  IO_BANK0_GPIO8_CTRL_FUNCSEL_sio_8    = 5,     /*!< sio_8 : sio_8 */
  IO_BANK0_GPIO8_CTRL_FUNCSEL_pio0_8   = 6,     /*!< pio0_8 : pio0_8 */
  IO_BANK0_GPIO8_CTRL_FUNCSEL_pio1_8   = 7,     /*!< pio1_8 : pio1_8 */
  IO_BANK0_GPIO8_CTRL_FUNCSEL_usb_muxing_extphy_rcv = 8,/*!< usb_muxing_extphy_rcv : usb_muxing_extphy_rcv */
  IO_BANK0_GPIO8_CTRL_FUNCSEL_usb_muxing_vbus_en = 9,/*!< usb_muxing_vbus_en : usb_muxing_vbus_en */
  IO_BANK0_GPIO8_CTRL_FUNCSEL_null     = 31,    /*!< null : null */
} IO_BANK0_GPIO8_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO9_CTRL IRQOVER [28..29]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO9_CTRL_IRQOVER */
  IO_BANK0_GPIO9_CTRL_IRQOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO9_CTRL_IRQOVER_INVERT   = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO9_CTRL_IRQOVER_LOW      = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO9_CTRL_IRQOVER_HIGH     = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO9_CTRL_IRQOVER_Enum;
/* ==========================================  IO_BANK0 GPIO9_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO9_CTRL_INOVER */
  IO_BANK0_GPIO9_CTRL_INOVER_NORMAL    = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO9_CTRL_INOVER_INVERT    = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO9_CTRL_INOVER_LOW       = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO9_CTRL_INOVER_HIGH      = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO9_CTRL_INOVER_Enum;
/* ==========================================  IO_BANK0 GPIO9_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO9_CTRL_OEOVER */
  IO_BANK0_GPIO9_CTRL_OEOVER_NORMAL    = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO9_CTRL_OEOVER_INVERT    = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO9_CTRL_OEOVER_DISABLE   = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO9_CTRL_OEOVER_ENABLE    = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO9_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO9_CTRL OUTOVER [8..9]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO9_CTRL_OUTOVER */
  IO_BANK0_GPIO9_CTRL_OUTOVER_NORMAL   = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO9_CTRL_OUTOVER_INVERT   = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO9_CTRL_OUTOVER_LOW      = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO9_CTRL_OUTOVER_HIGH     = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO9_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO9_CTRL FUNCSEL [0..4]  =========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO9_CTRL_FUNCSEL */
  IO_BANK0_GPIO9_CTRL_FUNCSEL_spi1_ss_n = 1,    /*!< spi1_ss_n : spi1_ss_n */
  IO_BANK0_GPIO9_CTRL_FUNCSEL_uart1_rx = 2,     /*!< uart1_rx : uart1_rx */
  IO_BANK0_GPIO9_CTRL_FUNCSEL_i2c0_scl = 3,     /*!< i2c0_scl : i2c0_scl */
  IO_BANK0_GPIO9_CTRL_FUNCSEL_pwm_b_4  = 4,     /*!< pwm_b_4 : pwm_b_4 */
  IO_BANK0_GPIO9_CTRL_FUNCSEL_sio_9    = 5,     /*!< sio_9 : sio_9 */
  IO_BANK0_GPIO9_CTRL_FUNCSEL_pio0_9   = 6,     /*!< pio0_9 : pio0_9 */
  IO_BANK0_GPIO9_CTRL_FUNCSEL_pio1_9   = 7,     /*!< pio1_9 : pio1_9 */
  IO_BANK0_GPIO9_CTRL_FUNCSEL_usb_muxing_extphy_vp = 8,/*!< usb_muxing_extphy_vp : usb_muxing_extphy_vp */
  IO_BANK0_GPIO9_CTRL_FUNCSEL_usb_muxing_overcurr_detect = 9,/*!< usb_muxing_overcurr_detect : usb_muxing_overcurr_detect */
  IO_BANK0_GPIO9_CTRL_FUNCSEL_null     = 31,    /*!< null : null */
} IO_BANK0_GPIO9_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO10_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO10_CTRL_IRQOVER */
  IO_BANK0_GPIO10_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO10_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO10_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO10_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO10_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO10_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO10_CTRL_INOVER */
  IO_BANK0_GPIO10_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO10_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO10_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO10_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO10_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO10_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO10_CTRL_OEOVER */
  IO_BANK0_GPIO10_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO10_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO10_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO10_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO10_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO10_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO10_CTRL_OUTOVER */
  IO_BANK0_GPIO10_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO10_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO10_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO10_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO10_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO10_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO10_CTRL_FUNCSEL */
  IO_BANK0_GPIO10_CTRL_FUNCSEL_spi1_sclk = 1,   /*!< spi1_sclk : spi1_sclk */
  IO_BANK0_GPIO10_CTRL_FUNCSEL_uart1_cts = 2,   /*!< uart1_cts : uart1_cts */
  IO_BANK0_GPIO10_CTRL_FUNCSEL_i2c1_sda = 3,    /*!< i2c1_sda : i2c1_sda */
  IO_BANK0_GPIO10_CTRL_FUNCSEL_pwm_a_5 = 4,     /*!< pwm_a_5 : pwm_a_5 */
  IO_BANK0_GPIO10_CTRL_FUNCSEL_sio_10  = 5,     /*!< sio_10 : sio_10 */
  IO_BANK0_GPIO10_CTRL_FUNCSEL_pio0_10 = 6,     /*!< pio0_10 : pio0_10 */
  IO_BANK0_GPIO10_CTRL_FUNCSEL_pio1_10 = 7,     /*!< pio1_10 : pio1_10 */
  IO_BANK0_GPIO10_CTRL_FUNCSEL_usb_muxing_extphy_vm = 8,/*!< usb_muxing_extphy_vm : usb_muxing_extphy_vm */
  IO_BANK0_GPIO10_CTRL_FUNCSEL_usb_muxing_vbus_detect = 9,/*!< usb_muxing_vbus_detect : usb_muxing_vbus_detect */
  IO_BANK0_GPIO10_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO10_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO11_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO11_CTRL_IRQOVER */
  IO_BANK0_GPIO11_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO11_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO11_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO11_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO11_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO11_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO11_CTRL_INOVER */
  IO_BANK0_GPIO11_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO11_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO11_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO11_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO11_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO11_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO11_CTRL_OEOVER */
  IO_BANK0_GPIO11_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO11_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO11_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO11_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO11_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO11_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO11_CTRL_OUTOVER */
  IO_BANK0_GPIO11_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO11_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO11_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO11_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO11_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO11_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO11_CTRL_FUNCSEL */
  IO_BANK0_GPIO11_CTRL_FUNCSEL_spi1_tx = 1,     /*!< spi1_tx : spi1_tx */
  IO_BANK0_GPIO11_CTRL_FUNCSEL_uart1_rts = 2,   /*!< uart1_rts : uart1_rts */
  IO_BANK0_GPIO11_CTRL_FUNCSEL_i2c1_scl = 3,    /*!< i2c1_scl : i2c1_scl */
  IO_BANK0_GPIO11_CTRL_FUNCSEL_pwm_b_5 = 4,     /*!< pwm_b_5 : pwm_b_5 */
  IO_BANK0_GPIO11_CTRL_FUNCSEL_sio_11  = 5,     /*!< sio_11 : sio_11 */
  IO_BANK0_GPIO11_CTRL_FUNCSEL_pio0_11 = 6,     /*!< pio0_11 : pio0_11 */
  IO_BANK0_GPIO11_CTRL_FUNCSEL_pio1_11 = 7,     /*!< pio1_11 : pio1_11 */
  IO_BANK0_GPIO11_CTRL_FUNCSEL_usb_muxing_extphy_suspnd = 8,/*!< usb_muxing_extphy_suspnd : usb_muxing_extphy_suspnd */
  IO_BANK0_GPIO11_CTRL_FUNCSEL_usb_muxing_vbus_en = 9,/*!< usb_muxing_vbus_en : usb_muxing_vbus_en */
  IO_BANK0_GPIO11_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO11_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO12_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO12_CTRL_IRQOVER */
  IO_BANK0_GPIO12_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO12_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO12_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO12_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO12_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO12_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO12_CTRL_INOVER */
  IO_BANK0_GPIO12_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO12_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO12_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO12_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO12_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO12_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO12_CTRL_OEOVER */
  IO_BANK0_GPIO12_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO12_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO12_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO12_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO12_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO12_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO12_CTRL_OUTOVER */
  IO_BANK0_GPIO12_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO12_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO12_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO12_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO12_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO12_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO12_CTRL_FUNCSEL */
  IO_BANK0_GPIO12_CTRL_FUNCSEL_spi1_rx = 1,     /*!< spi1_rx : spi1_rx */
  IO_BANK0_GPIO12_CTRL_FUNCSEL_uart0_tx = 2,    /*!< uart0_tx : uart0_tx */
  IO_BANK0_GPIO12_CTRL_FUNCSEL_i2c0_sda = 3,    /*!< i2c0_sda : i2c0_sda */
  IO_BANK0_GPIO12_CTRL_FUNCSEL_pwm_a_6 = 4,     /*!< pwm_a_6 : pwm_a_6 */
  IO_BANK0_GPIO12_CTRL_FUNCSEL_sio_12  = 5,     /*!< sio_12 : sio_12 */
  IO_BANK0_GPIO12_CTRL_FUNCSEL_pio0_12 = 6,     /*!< pio0_12 : pio0_12 */
  IO_BANK0_GPIO12_CTRL_FUNCSEL_pio1_12 = 7,     /*!< pio1_12 : pio1_12 */
  IO_BANK0_GPIO12_CTRL_FUNCSEL_usb_muxing_extphy_speed = 8,/*!< usb_muxing_extphy_speed : usb_muxing_extphy_speed */
  IO_BANK0_GPIO12_CTRL_FUNCSEL_usb_muxing_overcurr_detect = 9,/*!< usb_muxing_overcurr_detect : usb_muxing_overcurr_detect */
  IO_BANK0_GPIO12_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO12_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO13_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO13_CTRL_IRQOVER */
  IO_BANK0_GPIO13_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO13_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO13_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO13_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO13_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO13_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO13_CTRL_INOVER */
  IO_BANK0_GPIO13_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO13_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO13_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO13_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO13_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO13_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO13_CTRL_OEOVER */
  IO_BANK0_GPIO13_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO13_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO13_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO13_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO13_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO13_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO13_CTRL_OUTOVER */
  IO_BANK0_GPIO13_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO13_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO13_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO13_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO13_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO13_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO13_CTRL_FUNCSEL */
  IO_BANK0_GPIO13_CTRL_FUNCSEL_spi1_ss_n = 1,   /*!< spi1_ss_n : spi1_ss_n */
  IO_BANK0_GPIO13_CTRL_FUNCSEL_uart0_rx = 2,    /*!< uart0_rx : uart0_rx */
  IO_BANK0_GPIO13_CTRL_FUNCSEL_i2c0_scl = 3,    /*!< i2c0_scl : i2c0_scl */
  IO_BANK0_GPIO13_CTRL_FUNCSEL_pwm_b_6 = 4,     /*!< pwm_b_6 : pwm_b_6 */
  IO_BANK0_GPIO13_CTRL_FUNCSEL_sio_13  = 5,     /*!< sio_13 : sio_13 */
  IO_BANK0_GPIO13_CTRL_FUNCSEL_pio0_13 = 6,     /*!< pio0_13 : pio0_13 */
  IO_BANK0_GPIO13_CTRL_FUNCSEL_pio1_13 = 7,     /*!< pio1_13 : pio1_13 */
  IO_BANK0_GPIO13_CTRL_FUNCSEL_usb_muxing_extphy_vpo = 8,/*!< usb_muxing_extphy_vpo : usb_muxing_extphy_vpo */
  IO_BANK0_GPIO13_CTRL_FUNCSEL_usb_muxing_vbus_detect = 9,/*!< usb_muxing_vbus_detect : usb_muxing_vbus_detect */
  IO_BANK0_GPIO13_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO13_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO14_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO14_CTRL_IRQOVER */
  IO_BANK0_GPIO14_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO14_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO14_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO14_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO14_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO14_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO14_CTRL_INOVER */
  IO_BANK0_GPIO14_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO14_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO14_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO14_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO14_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO14_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO14_CTRL_OEOVER */
  IO_BANK0_GPIO14_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO14_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO14_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO14_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO14_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO14_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO14_CTRL_OUTOVER */
  IO_BANK0_GPIO14_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO14_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO14_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO14_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO14_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO14_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO14_CTRL_FUNCSEL */
  IO_BANK0_GPIO14_CTRL_FUNCSEL_spi1_sclk = 1,   /*!< spi1_sclk : spi1_sclk */
  IO_BANK0_GPIO14_CTRL_FUNCSEL_uart0_cts = 2,   /*!< uart0_cts : uart0_cts */
  IO_BANK0_GPIO14_CTRL_FUNCSEL_i2c1_sda = 3,    /*!< i2c1_sda : i2c1_sda */
  IO_BANK0_GPIO14_CTRL_FUNCSEL_pwm_a_7 = 4,     /*!< pwm_a_7 : pwm_a_7 */
  IO_BANK0_GPIO14_CTRL_FUNCSEL_sio_14  = 5,     /*!< sio_14 : sio_14 */
  IO_BANK0_GPIO14_CTRL_FUNCSEL_pio0_14 = 6,     /*!< pio0_14 : pio0_14 */
  IO_BANK0_GPIO14_CTRL_FUNCSEL_pio1_14 = 7,     /*!< pio1_14 : pio1_14 */
  IO_BANK0_GPIO14_CTRL_FUNCSEL_usb_muxing_extphy_vmo = 8,/*!< usb_muxing_extphy_vmo : usb_muxing_extphy_vmo */
  IO_BANK0_GPIO14_CTRL_FUNCSEL_usb_muxing_vbus_en = 9,/*!< usb_muxing_vbus_en : usb_muxing_vbus_en */
  IO_BANK0_GPIO14_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO14_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO15_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO15_CTRL_IRQOVER */
  IO_BANK0_GPIO15_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO15_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO15_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO15_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO15_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO15_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO15_CTRL_INOVER */
  IO_BANK0_GPIO15_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO15_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO15_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO15_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO15_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO15_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO15_CTRL_OEOVER */
  IO_BANK0_GPIO15_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO15_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO15_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO15_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO15_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO15_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO15_CTRL_OUTOVER */
  IO_BANK0_GPIO15_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO15_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO15_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO15_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO15_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO15_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO15_CTRL_FUNCSEL */
  IO_BANK0_GPIO15_CTRL_FUNCSEL_spi1_tx = 1,     /*!< spi1_tx : spi1_tx */
  IO_BANK0_GPIO15_CTRL_FUNCSEL_uart0_rts = 2,   /*!< uart0_rts : uart0_rts */
  IO_BANK0_GPIO15_CTRL_FUNCSEL_i2c1_scl = 3,    /*!< i2c1_scl : i2c1_scl */
  IO_BANK0_GPIO15_CTRL_FUNCSEL_pwm_b_7 = 4,     /*!< pwm_b_7 : pwm_b_7 */
  IO_BANK0_GPIO15_CTRL_FUNCSEL_sio_15  = 5,     /*!< sio_15 : sio_15 */
  IO_BANK0_GPIO15_CTRL_FUNCSEL_pio0_15 = 6,     /*!< pio0_15 : pio0_15 */
  IO_BANK0_GPIO15_CTRL_FUNCSEL_pio1_15 = 7,     /*!< pio1_15 : pio1_15 */
  IO_BANK0_GPIO15_CTRL_FUNCSEL_usb_muxing_digital_dp = 8,/*!< usb_muxing_digital_dp : usb_muxing_digital_dp */
  IO_BANK0_GPIO15_CTRL_FUNCSEL_usb_muxing_overcurr_detect = 9,/*!< usb_muxing_overcurr_detect : usb_muxing_overcurr_detect */
  IO_BANK0_GPIO15_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO15_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO16_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO16_CTRL_IRQOVER */
  IO_BANK0_GPIO16_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO16_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO16_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO16_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO16_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO16_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO16_CTRL_INOVER */
  IO_BANK0_GPIO16_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO16_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO16_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO16_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO16_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO16_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO16_CTRL_OEOVER */
  IO_BANK0_GPIO16_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO16_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO16_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO16_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO16_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO16_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO16_CTRL_OUTOVER */
  IO_BANK0_GPIO16_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO16_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO16_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO16_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO16_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO16_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO16_CTRL_FUNCSEL */
  IO_BANK0_GPIO16_CTRL_FUNCSEL_spi0_rx = 1,     /*!< spi0_rx : spi0_rx */
  IO_BANK0_GPIO16_CTRL_FUNCSEL_uart0_tx = 2,    /*!< uart0_tx : uart0_tx */
  IO_BANK0_GPIO16_CTRL_FUNCSEL_i2c0_sda = 3,    /*!< i2c0_sda : i2c0_sda */
  IO_BANK0_GPIO16_CTRL_FUNCSEL_pwm_a_0 = 4,     /*!< pwm_a_0 : pwm_a_0 */
  IO_BANK0_GPIO16_CTRL_FUNCSEL_sio_16  = 5,     /*!< sio_16 : sio_16 */
  IO_BANK0_GPIO16_CTRL_FUNCSEL_pio0_16 = 6,     /*!< pio0_16 : pio0_16 */
  IO_BANK0_GPIO16_CTRL_FUNCSEL_pio1_16 = 7,     /*!< pio1_16 : pio1_16 */
  IO_BANK0_GPIO16_CTRL_FUNCSEL_usb_muxing_digital_dm = 8,/*!< usb_muxing_digital_dm : usb_muxing_digital_dm */
  IO_BANK0_GPIO16_CTRL_FUNCSEL_usb_muxing_vbus_detect = 9,/*!< usb_muxing_vbus_detect : usb_muxing_vbus_detect */
  IO_BANK0_GPIO16_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO16_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO17_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO17_CTRL_IRQOVER */
  IO_BANK0_GPIO17_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO17_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO17_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO17_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO17_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO17_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO17_CTRL_INOVER */
  IO_BANK0_GPIO17_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO17_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO17_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO17_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO17_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO17_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO17_CTRL_OEOVER */
  IO_BANK0_GPIO17_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO17_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO17_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO17_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO17_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO17_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO17_CTRL_OUTOVER */
  IO_BANK0_GPIO17_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO17_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO17_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO17_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO17_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO17_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO17_CTRL_FUNCSEL */
  IO_BANK0_GPIO17_CTRL_FUNCSEL_spi0_ss_n = 1,   /*!< spi0_ss_n : spi0_ss_n */
  IO_BANK0_GPIO17_CTRL_FUNCSEL_uart0_rx = 2,    /*!< uart0_rx : uart0_rx */
  IO_BANK0_GPIO17_CTRL_FUNCSEL_i2c0_scl = 3,    /*!< i2c0_scl : i2c0_scl */
  IO_BANK0_GPIO17_CTRL_FUNCSEL_pwm_b_0 = 4,     /*!< pwm_b_0 : pwm_b_0 */
  IO_BANK0_GPIO17_CTRL_FUNCSEL_sio_17  = 5,     /*!< sio_17 : sio_17 */
  IO_BANK0_GPIO17_CTRL_FUNCSEL_pio0_17 = 6,     /*!< pio0_17 : pio0_17 */
  IO_BANK0_GPIO17_CTRL_FUNCSEL_pio1_17 = 7,     /*!< pio1_17 : pio1_17 */
  IO_BANK0_GPIO17_CTRL_FUNCSEL_usb_muxing_vbus_en = 9,/*!< usb_muxing_vbus_en : usb_muxing_vbus_en */
  IO_BANK0_GPIO17_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO17_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO18_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO18_CTRL_IRQOVER */
  IO_BANK0_GPIO18_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO18_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO18_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO18_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO18_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO18_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO18_CTRL_INOVER */
  IO_BANK0_GPIO18_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO18_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO18_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO18_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO18_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO18_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO18_CTRL_OEOVER */
  IO_BANK0_GPIO18_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO18_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO18_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO18_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO18_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO18_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO18_CTRL_OUTOVER */
  IO_BANK0_GPIO18_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO18_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO18_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO18_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO18_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO18_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO18_CTRL_FUNCSEL */
  IO_BANK0_GPIO18_CTRL_FUNCSEL_spi0_sclk = 1,   /*!< spi0_sclk : spi0_sclk */
  IO_BANK0_GPIO18_CTRL_FUNCSEL_uart0_cts = 2,   /*!< uart0_cts : uart0_cts */
  IO_BANK0_GPIO18_CTRL_FUNCSEL_i2c1_sda = 3,    /*!< i2c1_sda : i2c1_sda */
  IO_BANK0_GPIO18_CTRL_FUNCSEL_pwm_a_1 = 4,     /*!< pwm_a_1 : pwm_a_1 */
  IO_BANK0_GPIO18_CTRL_FUNCSEL_sio_18  = 5,     /*!< sio_18 : sio_18 */
  IO_BANK0_GPIO18_CTRL_FUNCSEL_pio0_18 = 6,     /*!< pio0_18 : pio0_18 */
  IO_BANK0_GPIO18_CTRL_FUNCSEL_pio1_18 = 7,     /*!< pio1_18 : pio1_18 */
  IO_BANK0_GPIO18_CTRL_FUNCSEL_usb_muxing_overcurr_detect = 9,/*!< usb_muxing_overcurr_detect : usb_muxing_overcurr_detect */
  IO_BANK0_GPIO18_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO18_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO19_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO19_CTRL_IRQOVER */
  IO_BANK0_GPIO19_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO19_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO19_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO19_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO19_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO19_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO19_CTRL_INOVER */
  IO_BANK0_GPIO19_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO19_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO19_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO19_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO19_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO19_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO19_CTRL_OEOVER */
  IO_BANK0_GPIO19_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO19_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO19_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO19_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO19_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO19_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO19_CTRL_OUTOVER */
  IO_BANK0_GPIO19_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO19_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO19_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO19_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO19_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO19_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO19_CTRL_FUNCSEL */
  IO_BANK0_GPIO19_CTRL_FUNCSEL_spi0_tx = 1,     /*!< spi0_tx : spi0_tx */
  IO_BANK0_GPIO19_CTRL_FUNCSEL_uart0_rts = 2,   /*!< uart0_rts : uart0_rts */
  IO_BANK0_GPIO19_CTRL_FUNCSEL_i2c1_scl = 3,    /*!< i2c1_scl : i2c1_scl */
  IO_BANK0_GPIO19_CTRL_FUNCSEL_pwm_b_1 = 4,     /*!< pwm_b_1 : pwm_b_1 */
  IO_BANK0_GPIO19_CTRL_FUNCSEL_sio_19  = 5,     /*!< sio_19 : sio_19 */
  IO_BANK0_GPIO19_CTRL_FUNCSEL_pio0_19 = 6,     /*!< pio0_19 : pio0_19 */
  IO_BANK0_GPIO19_CTRL_FUNCSEL_pio1_19 = 7,     /*!< pio1_19 : pio1_19 */
  IO_BANK0_GPIO19_CTRL_FUNCSEL_usb_muxing_vbus_detect = 9,/*!< usb_muxing_vbus_detect : usb_muxing_vbus_detect */
  IO_BANK0_GPIO19_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO19_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO20_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO20_CTRL_IRQOVER */
  IO_BANK0_GPIO20_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO20_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO20_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO20_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO20_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO20_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO20_CTRL_INOVER */
  IO_BANK0_GPIO20_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO20_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO20_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO20_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO20_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO20_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO20_CTRL_OEOVER */
  IO_BANK0_GPIO20_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO20_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO20_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO20_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO20_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO20_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO20_CTRL_OUTOVER */
  IO_BANK0_GPIO20_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO20_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO20_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO20_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO20_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO20_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO20_CTRL_FUNCSEL */
  IO_BANK0_GPIO20_CTRL_FUNCSEL_spi0_rx = 1,     /*!< spi0_rx : spi0_rx */
  IO_BANK0_GPIO20_CTRL_FUNCSEL_uart1_tx = 2,    /*!< uart1_tx : uart1_tx */
  IO_BANK0_GPIO20_CTRL_FUNCSEL_i2c0_sda = 3,    /*!< i2c0_sda : i2c0_sda */
  IO_BANK0_GPIO20_CTRL_FUNCSEL_pwm_a_2 = 4,     /*!< pwm_a_2 : pwm_a_2 */
  IO_BANK0_GPIO20_CTRL_FUNCSEL_sio_20  = 5,     /*!< sio_20 : sio_20 */
  IO_BANK0_GPIO20_CTRL_FUNCSEL_pio0_20 = 6,     /*!< pio0_20 : pio0_20 */
  IO_BANK0_GPIO20_CTRL_FUNCSEL_pio1_20 = 7,     /*!< pio1_20 : pio1_20 */
  IO_BANK0_GPIO20_CTRL_FUNCSEL_clocks_gpin_0 = 8,/*!< clocks_gpin_0 : clocks_gpin_0 */
  IO_BANK0_GPIO20_CTRL_FUNCSEL_usb_muxing_vbus_en = 9,/*!< usb_muxing_vbus_en : usb_muxing_vbus_en */
  IO_BANK0_GPIO20_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO20_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO21_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO21_CTRL_IRQOVER */
  IO_BANK0_GPIO21_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO21_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO21_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO21_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO21_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO21_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO21_CTRL_INOVER */
  IO_BANK0_GPIO21_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO21_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO21_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO21_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO21_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO21_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO21_CTRL_OEOVER */
  IO_BANK0_GPIO21_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO21_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO21_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO21_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO21_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO21_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO21_CTRL_OUTOVER */
  IO_BANK0_GPIO21_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO21_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO21_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO21_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO21_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO21_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO21_CTRL_FUNCSEL */
  IO_BANK0_GPIO21_CTRL_FUNCSEL_spi0_ss_n = 1,   /*!< spi0_ss_n : spi0_ss_n */
  IO_BANK0_GPIO21_CTRL_FUNCSEL_uart1_rx = 2,    /*!< uart1_rx : uart1_rx */
  IO_BANK0_GPIO21_CTRL_FUNCSEL_i2c0_scl = 3,    /*!< i2c0_scl : i2c0_scl */
  IO_BANK0_GPIO21_CTRL_FUNCSEL_pwm_b_2 = 4,     /*!< pwm_b_2 : pwm_b_2 */
  IO_BANK0_GPIO21_CTRL_FUNCSEL_sio_21  = 5,     /*!< sio_21 : sio_21 */
  IO_BANK0_GPIO21_CTRL_FUNCSEL_pio0_21 = 6,     /*!< pio0_21 : pio0_21 */
  IO_BANK0_GPIO21_CTRL_FUNCSEL_pio1_21 = 7,     /*!< pio1_21 : pio1_21 */
  IO_BANK0_GPIO21_CTRL_FUNCSEL_clocks_gpout_0 = 8,/*!< clocks_gpout_0 : clocks_gpout_0 */
  IO_BANK0_GPIO21_CTRL_FUNCSEL_usb_muxing_overcurr_detect = 9,/*!< usb_muxing_overcurr_detect : usb_muxing_overcurr_detect */
  IO_BANK0_GPIO21_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO21_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO22_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO22_CTRL_IRQOVER */
  IO_BANK0_GPIO22_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO22_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO22_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO22_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO22_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO22_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO22_CTRL_INOVER */
  IO_BANK0_GPIO22_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO22_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO22_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO22_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO22_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO22_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO22_CTRL_OEOVER */
  IO_BANK0_GPIO22_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO22_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO22_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO22_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO22_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO22_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO22_CTRL_OUTOVER */
  IO_BANK0_GPIO22_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO22_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO22_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO22_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO22_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO22_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO22_CTRL_FUNCSEL */
  IO_BANK0_GPIO22_CTRL_FUNCSEL_spi0_sclk = 1,   /*!< spi0_sclk : spi0_sclk */
  IO_BANK0_GPIO22_CTRL_FUNCSEL_uart1_cts = 2,   /*!< uart1_cts : uart1_cts */
  IO_BANK0_GPIO22_CTRL_FUNCSEL_i2c1_sda = 3,    /*!< i2c1_sda : i2c1_sda */
  IO_BANK0_GPIO22_CTRL_FUNCSEL_pwm_a_3 = 4,     /*!< pwm_a_3 : pwm_a_3 */
  IO_BANK0_GPIO22_CTRL_FUNCSEL_sio_22  = 5,     /*!< sio_22 : sio_22 */
  IO_BANK0_GPIO22_CTRL_FUNCSEL_pio0_22 = 6,     /*!< pio0_22 : pio0_22 */
  IO_BANK0_GPIO22_CTRL_FUNCSEL_pio1_22 = 7,     /*!< pio1_22 : pio1_22 */
  IO_BANK0_GPIO22_CTRL_FUNCSEL_clocks_gpin_1 = 8,/*!< clocks_gpin_1 : clocks_gpin_1 */
  IO_BANK0_GPIO22_CTRL_FUNCSEL_usb_muxing_vbus_detect = 9,/*!< usb_muxing_vbus_detect : usb_muxing_vbus_detect */
  IO_BANK0_GPIO22_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO22_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO23_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO23_CTRL_IRQOVER */
  IO_BANK0_GPIO23_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO23_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO23_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO23_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO23_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO23_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO23_CTRL_INOVER */
  IO_BANK0_GPIO23_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO23_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO23_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO23_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO23_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO23_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO23_CTRL_OEOVER */
  IO_BANK0_GPIO23_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO23_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO23_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO23_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO23_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO23_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO23_CTRL_OUTOVER */
  IO_BANK0_GPIO23_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO23_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO23_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO23_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO23_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO23_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO23_CTRL_FUNCSEL */
  IO_BANK0_GPIO23_CTRL_FUNCSEL_spi0_tx = 1,     /*!< spi0_tx : spi0_tx */
  IO_BANK0_GPIO23_CTRL_FUNCSEL_uart1_rts = 2,   /*!< uart1_rts : uart1_rts */
  IO_BANK0_GPIO23_CTRL_FUNCSEL_i2c1_scl = 3,    /*!< i2c1_scl : i2c1_scl */
  IO_BANK0_GPIO23_CTRL_FUNCSEL_pwm_b_3 = 4,     /*!< pwm_b_3 : pwm_b_3 */
  IO_BANK0_GPIO23_CTRL_FUNCSEL_sio_23  = 5,     /*!< sio_23 : sio_23 */
  IO_BANK0_GPIO23_CTRL_FUNCSEL_pio0_23 = 6,     /*!< pio0_23 : pio0_23 */
  IO_BANK0_GPIO23_CTRL_FUNCSEL_pio1_23 = 7,     /*!< pio1_23 : pio1_23 */
  IO_BANK0_GPIO23_CTRL_FUNCSEL_clocks_gpout_1 = 8,/*!< clocks_gpout_1 : clocks_gpout_1 */
  IO_BANK0_GPIO23_CTRL_FUNCSEL_usb_muxing_vbus_en = 9,/*!< usb_muxing_vbus_en : usb_muxing_vbus_en */
  IO_BANK0_GPIO23_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO23_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO24_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO24_CTRL_IRQOVER */
  IO_BANK0_GPIO24_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO24_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO24_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO24_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO24_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO24_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO24_CTRL_INOVER */
  IO_BANK0_GPIO24_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO24_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO24_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO24_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO24_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO24_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO24_CTRL_OEOVER */
  IO_BANK0_GPIO24_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO24_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO24_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO24_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO24_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO24_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO24_CTRL_OUTOVER */
  IO_BANK0_GPIO24_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO24_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO24_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO24_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO24_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO24_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO24_CTRL_FUNCSEL */
  IO_BANK0_GPIO24_CTRL_FUNCSEL_spi1_rx = 1,     /*!< spi1_rx : spi1_rx */
  IO_BANK0_GPIO24_CTRL_FUNCSEL_uart1_tx = 2,    /*!< uart1_tx : uart1_tx */
  IO_BANK0_GPIO24_CTRL_FUNCSEL_i2c0_sda = 3,    /*!< i2c0_sda : i2c0_sda */
  IO_BANK0_GPIO24_CTRL_FUNCSEL_pwm_a_4 = 4,     /*!< pwm_a_4 : pwm_a_4 */
  IO_BANK0_GPIO24_CTRL_FUNCSEL_sio_24  = 5,     /*!< sio_24 : sio_24 */
  IO_BANK0_GPIO24_CTRL_FUNCSEL_pio0_24 = 6,     /*!< pio0_24 : pio0_24 */
  IO_BANK0_GPIO24_CTRL_FUNCSEL_pio1_24 = 7,     /*!< pio1_24 : pio1_24 */
  IO_BANK0_GPIO24_CTRL_FUNCSEL_clocks_gpout_2 = 8,/*!< clocks_gpout_2 : clocks_gpout_2 */
  IO_BANK0_GPIO24_CTRL_FUNCSEL_usb_muxing_overcurr_detect = 9,/*!< usb_muxing_overcurr_detect : usb_muxing_overcurr_detect */
  IO_BANK0_GPIO24_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO24_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO25_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO25_CTRL_IRQOVER */
  IO_BANK0_GPIO25_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO25_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO25_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO25_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO25_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO25_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO25_CTRL_INOVER */
  IO_BANK0_GPIO25_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO25_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO25_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO25_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO25_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO25_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO25_CTRL_OEOVER */
  IO_BANK0_GPIO25_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO25_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO25_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO25_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO25_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO25_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO25_CTRL_OUTOVER */
  IO_BANK0_GPIO25_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO25_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO25_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO25_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO25_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO25_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO25_CTRL_FUNCSEL */
  IO_BANK0_GPIO25_CTRL_FUNCSEL_spi1_ss_n = 1,   /*!< spi1_ss_n : spi1_ss_n */
  IO_BANK0_GPIO25_CTRL_FUNCSEL_uart1_rx = 2,    /*!< uart1_rx : uart1_rx */
  IO_BANK0_GPIO25_CTRL_FUNCSEL_i2c0_scl = 3,    /*!< i2c0_scl : i2c0_scl */
  IO_BANK0_GPIO25_CTRL_FUNCSEL_pwm_b_4 = 4,     /*!< pwm_b_4 : pwm_b_4 */
  IO_BANK0_GPIO25_CTRL_FUNCSEL_sio_25  = 5,     /*!< sio_25 : sio_25 */
  IO_BANK0_GPIO25_CTRL_FUNCSEL_pio0_25 = 6,     /*!< pio0_25 : pio0_25 */
  IO_BANK0_GPIO25_CTRL_FUNCSEL_pio1_25 = 7,     /*!< pio1_25 : pio1_25 */
  IO_BANK0_GPIO25_CTRL_FUNCSEL_clocks_gpout_3 = 8,/*!< clocks_gpout_3 : clocks_gpout_3 */
  IO_BANK0_GPIO25_CTRL_FUNCSEL_usb_muxing_vbus_detect = 9,/*!< usb_muxing_vbus_detect : usb_muxing_vbus_detect */
  IO_BANK0_GPIO25_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO25_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO26_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO26_CTRL_IRQOVER */
  IO_BANK0_GPIO26_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO26_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO26_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO26_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO26_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO26_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO26_CTRL_INOVER */
  IO_BANK0_GPIO26_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO26_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO26_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO26_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO26_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO26_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO26_CTRL_OEOVER */
  IO_BANK0_GPIO26_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO26_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO26_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO26_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO26_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO26_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO26_CTRL_OUTOVER */
  IO_BANK0_GPIO26_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO26_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO26_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO26_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO26_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO26_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO26_CTRL_FUNCSEL */
  IO_BANK0_GPIO26_CTRL_FUNCSEL_spi1_sclk = 1,   /*!< spi1_sclk : spi1_sclk */
  IO_BANK0_GPIO26_CTRL_FUNCSEL_uart1_cts = 2,   /*!< uart1_cts : uart1_cts */
  IO_BANK0_GPIO26_CTRL_FUNCSEL_i2c1_sda = 3,    /*!< i2c1_sda : i2c1_sda */
  IO_BANK0_GPIO26_CTRL_FUNCSEL_pwm_a_5 = 4,     /*!< pwm_a_5 : pwm_a_5 */
  IO_BANK0_GPIO26_CTRL_FUNCSEL_sio_26  = 5,     /*!< sio_26 : sio_26 */
  IO_BANK0_GPIO26_CTRL_FUNCSEL_pio0_26 = 6,     /*!< pio0_26 : pio0_26 */
  IO_BANK0_GPIO26_CTRL_FUNCSEL_pio1_26 = 7,     /*!< pio1_26 : pio1_26 */
  IO_BANK0_GPIO26_CTRL_FUNCSEL_usb_muxing_vbus_en = 9,/*!< usb_muxing_vbus_en : usb_muxing_vbus_en */
  IO_BANK0_GPIO26_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO26_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO27_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO27_CTRL_IRQOVER */
  IO_BANK0_GPIO27_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO27_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO27_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO27_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO27_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO27_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO27_CTRL_INOVER */
  IO_BANK0_GPIO27_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO27_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO27_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO27_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO27_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO27_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO27_CTRL_OEOVER */
  IO_BANK0_GPIO27_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO27_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO27_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO27_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO27_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO27_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO27_CTRL_OUTOVER */
  IO_BANK0_GPIO27_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO27_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO27_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO27_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO27_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO27_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO27_CTRL_FUNCSEL */
  IO_BANK0_GPIO27_CTRL_FUNCSEL_spi1_tx = 1,     /*!< spi1_tx : spi1_tx */
  IO_BANK0_GPIO27_CTRL_FUNCSEL_uart1_rts = 2,   /*!< uart1_rts : uart1_rts */
  IO_BANK0_GPIO27_CTRL_FUNCSEL_i2c1_scl = 3,    /*!< i2c1_scl : i2c1_scl */
  IO_BANK0_GPIO27_CTRL_FUNCSEL_pwm_b_5 = 4,     /*!< pwm_b_5 : pwm_b_5 */
  IO_BANK0_GPIO27_CTRL_FUNCSEL_sio_27  = 5,     /*!< sio_27 : sio_27 */
  IO_BANK0_GPIO27_CTRL_FUNCSEL_pio0_27 = 6,     /*!< pio0_27 : pio0_27 */
  IO_BANK0_GPIO27_CTRL_FUNCSEL_pio1_27 = 7,     /*!< pio1_27 : pio1_27 */
  IO_BANK0_GPIO27_CTRL_FUNCSEL_usb_muxing_overcurr_detect = 9,/*!< usb_muxing_overcurr_detect : usb_muxing_overcurr_detect */
  IO_BANK0_GPIO27_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO27_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO28_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO28_CTRL_IRQOVER */
  IO_BANK0_GPIO28_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO28_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO28_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO28_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO28_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO28_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO28_CTRL_INOVER */
  IO_BANK0_GPIO28_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO28_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO28_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO28_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO28_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO28_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO28_CTRL_OEOVER */
  IO_BANK0_GPIO28_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO28_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO28_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO28_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO28_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO28_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO28_CTRL_OUTOVER */
  IO_BANK0_GPIO28_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO28_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO28_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO28_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO28_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO28_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO28_CTRL_FUNCSEL */
  IO_BANK0_GPIO28_CTRL_FUNCSEL_spi1_rx = 1,     /*!< spi1_rx : spi1_rx */
  IO_BANK0_GPIO28_CTRL_FUNCSEL_uart0_tx = 2,    /*!< uart0_tx : uart0_tx */
  IO_BANK0_GPIO28_CTRL_FUNCSEL_i2c0_sda = 3,    /*!< i2c0_sda : i2c0_sda */
  IO_BANK0_GPIO28_CTRL_FUNCSEL_pwm_a_6 = 4,     /*!< pwm_a_6 : pwm_a_6 */
  IO_BANK0_GPIO28_CTRL_FUNCSEL_sio_28  = 5,     /*!< sio_28 : sio_28 */
  IO_BANK0_GPIO28_CTRL_FUNCSEL_pio0_28 = 6,     /*!< pio0_28 : pio0_28 */
  IO_BANK0_GPIO28_CTRL_FUNCSEL_pio1_28 = 7,     /*!< pio1_28 : pio1_28 */
  IO_BANK0_GPIO28_CTRL_FUNCSEL_usb_muxing_vbus_detect = 9,/*!< usb_muxing_vbus_detect : usb_muxing_vbus_detect */
  IO_BANK0_GPIO28_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO28_CTRL_FUNCSEL_Enum;
/* =========================================  IO_BANK0 GPIO29_CTRL IRQOVER [28..29]  ========================================= */
typedef enum {                                  /*!< IO_BANK0_GPIO29_CTRL_IRQOVER */
  IO_BANK0_GPIO29_CTRL_IRQOVER_NORMAL  = 0,     /*!< NORMAL : don't invert the interrupt */
  IO_BANK0_GPIO29_CTRL_IRQOVER_INVERT  = 1,     /*!< INVERT : invert the interrupt */
  IO_BANK0_GPIO29_CTRL_IRQOVER_LOW     = 2,     /*!< LOW : drive interrupt low */
  IO_BANK0_GPIO29_CTRL_IRQOVER_HIGH    = 3,     /*!< HIGH : drive interrupt high */
} IO_BANK0_GPIO29_CTRL_IRQOVER_Enum;
/* =========================================  IO_BANK0 GPIO29_CTRL INOVER [16..17]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO29_CTRL_INOVER */
  IO_BANK0_GPIO29_CTRL_INOVER_NORMAL   = 0,     /*!< NORMAL : don't invert the peri input */
  IO_BANK0_GPIO29_CTRL_INOVER_INVERT   = 1,     /*!< INVERT : invert the peri input */
  IO_BANK0_GPIO29_CTRL_INOVER_LOW      = 2,     /*!< LOW : drive peri input low */
  IO_BANK0_GPIO29_CTRL_INOVER_HIGH     = 3,     /*!< HIGH : drive peri input high */
} IO_BANK0_GPIO29_CTRL_INOVER_Enum;
/* =========================================  IO_BANK0 GPIO29_CTRL OEOVER [12..13]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO29_CTRL_OEOVER */
  IO_BANK0_GPIO29_CTRL_OEOVER_NORMAL   = 0,     /*!< NORMAL : drive output enable from peripheral signal selected by funcsel */
  IO_BANK0_GPIO29_CTRL_OEOVER_INVERT   = 1,     /*!< INVERT : drive output enable from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO29_CTRL_OEOVER_DISABLE  = 2,     /*!< DISABLE : disable output */
  IO_BANK0_GPIO29_CTRL_OEOVER_ENABLE   = 3,     /*!< ENABLE : enable output */
} IO_BANK0_GPIO29_CTRL_OEOVER_Enum;
/* ==========================================  IO_BANK0 GPIO29_CTRL OUTOVER [8..9]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO29_CTRL_OUTOVER */
  IO_BANK0_GPIO29_CTRL_OUTOVER_NORMAL  = 0,     /*!< NORMAL : drive output from peripheral signal selected by funcsel */
  IO_BANK0_GPIO29_CTRL_OUTOVER_INVERT  = 1,     /*!< INVERT : drive output from inverse of peripheral signal selected by funcsel */
  IO_BANK0_GPIO29_CTRL_OUTOVER_LOW     = 2,     /*!< LOW : drive output low */
  IO_BANK0_GPIO29_CTRL_OUTOVER_HIGH    = 3,     /*!< HIGH : drive output high */
} IO_BANK0_GPIO29_CTRL_OUTOVER_Enum;
/* ==========================================  IO_BANK0 GPIO29_CTRL FUNCSEL [0..4]  ========================================== */
typedef enum {                                  /*!< IO_BANK0_GPIO29_CTRL_FUNCSEL */
  IO_BANK0_GPIO29_CTRL_FUNCSEL_spi1_ss_n = 1,   /*!< spi1_ss_n : spi1_ss_n */
  IO_BANK0_GPIO29_CTRL_FUNCSEL_uart0_rx = 2,    /*!< uart0_rx : uart0_rx */
  IO_BANK0_GPIO29_CTRL_FUNCSEL_i2c0_scl = 3,    /*!< i2c0_scl : i2c0_scl */
  IO_BANK0_GPIO29_CTRL_FUNCSEL_pwm_b_6 = 4,     /*!< pwm_b_6 : pwm_b_6 */
  IO_BANK0_GPIO29_CTRL_FUNCSEL_sio_29  = 5,     /*!< sio_29 : sio_29 */
  IO_BANK0_GPIO29_CTRL_FUNCSEL_pio0_29 = 6,     /*!< pio0_29 : pio0_29 */
  IO_BANK0_GPIO29_CTRL_FUNCSEL_pio1_29 = 7,     /*!< pio1_29 : pio1_29 */
  IO_BANK0_GPIO29_CTRL_FUNCSEL_usb_muxing_vbus_en = 9,/*!< usb_muxing_vbus_en : usb_muxing_vbus_en */
  IO_BANK0_GPIO29_CTRL_FUNCSEL_null    = 31,    /*!< null : null */
} IO_BANK0_GPIO29_CTRL_FUNCSEL_Enum;
