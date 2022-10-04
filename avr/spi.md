# [AVR로 시작하는 임베디드](https://embed-avr.tistory.com/42)

    ISP(In-System Programming) 

        SPI(Serial Peripheral Interface)
            장치간 통신을 위한 인터페이스(또는 프로토콜).

        Serial Programming
            SPI를 이용한 프로그래밍 방식이다.

        Parallel Programming방식도 있다.

        Serial,Parallel  Programming 은 ISP방식 중 한 가지 이다.(ISP의 하위 개념이다)


# SPI
    Serial Peripheral Interface 
        cf. parallel

    UART:
        비동기 통신임에 반하여 
        1:1 Peer-to-Peer
    SPI: 
        동기 통신 방식이다. 즉, 클럭 신호를 마스터에서 제공하는 것이다.
        1:N Mater-Slave


## Mater-Slave 
    SCLK : Clock
    MOSI : Mater Out Slave In
    MISO : Mater In Slaove Out
    SS1 : slave 1 selcet
    SS2 ...

## AVR - AVR
        
