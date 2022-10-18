/*

USART_INITIALIZATION:
    set @_Baud_Rate
    set @_Frame_Format
        - FRAME_FORMAT: with meta data
            - start bit:: 1 bit
            - charactor bit :: 5,6,7,8,9 data bits
            - [parity bit]:: 0 or 1 bit, the result of exclusive or of charactor bits + parity bitt
            - stop bit:: 1 or 2 stop bit
    enable @_Transmitter
    enable @_Reciever

For @INTERRUPT_DRIVEN_USART
    The global interrupt flag should be cleared when doing the initialization
Before doing re-initialization with changed baud rate or frame format,
    be sue that there are no ongoing transmissions
    TXC0: used to check that the transmitter has completed all trasfers.
    RXC: used to check that there are no unread data in ther receive buffer.
     


USART(DEVICE): Universal Synchronous Asyschronous Recieve Transmitter
    @_Clock_Generator: cf) F_{osc} == System oscillator Clock Frequency
        - Synchronization logic (UCSR0C: [UMSEL01: UMSEL00: UPM01 | UPM0 | USBS |  UCSZ01 | UCSZ00 | UCPOL ]
            - Nomal asynchronous
                : Usart Mode SELect UCSR0C: [UMSEL01: UMSEL00: ---]
            - Double Speed asynchronous
                : UCSR0A: [RXC0 | TXC0| UDRE0 | FE0 | DOR0 | UPE0 | U2X0: | MPCN0]
            - Master synchronous
            - Slave synchronous
                XCK0(PD4): Transfer ClocK Pin
                DDR_XCK0: control whether the clock source is internal(master mode) or external(slave mode)
                    XCK pin is only active when using synchronous mode
        - Baud Rate Generator - internal clock generation
                : is used for the asynchronous and synchronous master modes 
            - asynchronous: 
                - Nomal mode :: 
                    - U2X0 in UCSR0A(Usart Control State Register)

                - double speed mode.
            - synchronous: matster mode, slave mode.
                    - UMSEL0 <- 1 :: Uasrt Mode SELect
                        - XCK0 <- 1 :: internal(Master mode), external(Slave Mode)
                            - Internal Clock Generation
                                - Baud Rate Generator
                                    - used for
                                        - asynchronous Mode
                                        - synchronous Master Mode

    @Transmitter:
        - Write Buffer(single)
        - Serial Shift Register
        - Parity Generator
        - Control logic
        = is enabled by setting the TXEN0: bit in the UCSR0B: register
    @Reciever:
        - can detect Frame Error, Data Overrun, Parity Errors
        - Clock and Recovery Units
            : for asynchronous data reception
        - Parity checker
        - Contro logic
        - Shift Register
        - UDRn
            : 2 level receive buffer
*/
int main(){
}
