/*
   @_IO Port

0x55 MCUCR: MCU Control Register
        | - | BODS | PUD | - | - | -  | IVSEL | IVCE |
            PUD: 1 -> pull-ups in the I/O ports are disabled

0x23 PINB: PINB Address containg the current Input value
        | PINB7  | PINB6 | PINB5| | PINB4 | PINB3 | PINB2 | PINB1 | PINB0 |

0x24 DDRB: what the Direction to pin
        | DDRB7  | DDRB6 | DDRB5| | DDRB4 | DDRB3 | DDRB2 | DDRB1 | DDRB0 |

0x25 PORTB: what the data to output 
        | PORTB7  | PORTB6 | PORTB5| | PORTB4 | PORTB3 | PORTB2 | PORTB1 | PORTB0 |

0x26 PINC:
        | - | PINC6 | PINC5| | PINC4 | PINC3 | PINC2 | PINC1 | PINC0 |
0x27 DDRC:
0x28 PORTC:

0x29 PIND:
0x2A DDRD:
0x2B PORTD:
*/
