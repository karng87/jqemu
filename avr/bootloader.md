# bootloader
    일반적인 의미에서 bootloader라고 하는 것은 
        컴퓨터나 임베디스 시스템이 처음 기동할 때 
        기본적인 하드웨어의 동작을 검사 한 후, 
        이상이 없으면 하드디스크나 플래쉬메모리에서 OS 커널을 RAM으로 복사하여 
        OS가 시작되도록 하는 작은 프로그램을 의미한다.

    하지만, 
    AVR에서 말하는 bootloader는 위에서 설명한 의미 보다는 
    아이폰이나 안드로이드폰과 같은 단말기의 OS를 업데이트하는 개념과 비슷하다.
    즉, 특별한 장비없이 ROM 파일을 변경할 수 있는 셀프 프로그램이라고 보면된다.



## AVR
    Program Memory
        Application Flash Section(0x0000 ~ )
            application program
        Boot Flash Section( ~ 0xffff)
            boot program 

## CPU Reset
    항상 0번지에서부터 프로그램이 시작되도록 되어 있다.
    Bootloader가 먼저 실행이 되더라도 
        Application Section의 프로그램을 변경할 일이 없으면 
        즉각 0번지로 점프하여 
        평소처럼 Application 프로그램이 동작되도록 한다.

    하지만 기존에 있던 application 프로그램을 업데이트 하거나, 
    새로운 프로그램으로 변경하고자 할 때에는 
        컴퓨터로부터 application 프로그램 파일을 로딩받아 
        application flash section을 새로운 실행파일로 변경시키는 동작을 수행한다.
    컴퓨터에 있는 hex파일을 UART를 이용하여 로딩받기 때문에 
        ISP 장비없이도 application 프로그램을 변경할 수 있다.

## Flash Memory in AVR
    Page라고 하는 구역으로 이루어져 있다.  
        하나의 page 크기는 AVR마다 다르지만 
            32, 64, 128 word 크기를 가진다. 
    플래쉬메모리의 특성상 
    새로운 데이터를 플래쉬메모리에 기록하려면 
        반드시 page단위로 erase 시킨 후 
        page buffer에 새로운 데이터를 쓰고, 
        최종적으로 page buffer에 있는 값 전체를 erase한 플래쉬메모리 page로 
        옮기는 명령어를 수행하면 결과적으로 새로운 데이터로 업데이트 된다.
        

