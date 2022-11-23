#ifndef PICO_NVIC_Type_H
#define PICO_NVIC_Type_H

typedef struct
{
  unsigned int ISER[1U];               /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register */
  unsigned int RESERVED0[31U];
  unsigned int ICER[1U];               /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register */
  unsigned int RESERVED1[31U];
  unsigned int ISPR[1U];               /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register */
  unsigned int RESERVED2[31U];
  unsigned int ICPR[1U];               /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register */
  unsigned int RESERVED3[31U];
  unsigned int RESERVED4[64U];
  unsigned int IP[8U];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register */
}  NVIC_Type;

#endif
