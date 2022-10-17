/*
USART(DEVICE): Universal Synchronous Asyschronous Recieve Transmitter
    @Clock_Generator: cf) F_{osc} == System oscillator Clock Frequency
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
        - Baud Rate Generator
            internal clock generation
                : is used for the asynchronous and synchronous master modes 

    @Transmitter:
        - Write Buffer(single)
        - Serial Shift Register
        - Parity Generator
        - Control logic
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
