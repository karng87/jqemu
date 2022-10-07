# [AMBA](https://vlsi.kr/ARM_AMBA_protocol/)
Advanced Microcontroller Bus Architecture Protocol

    - 회로간의 연결 방법
    - 프로세서, 주변장치, 메모리를 설계했다면 
        그 다음 차례는 회로간의 연결입니다. 
        이 연결을 규약(Protocol)한게 AMBA입니다. 
    - AMBA는 ARM社의 Advanced Microcontroller Bus Architecture Protocol입니다.
        (굳이 직역하면 ARM사에서 규정하고 약속한 회로 연결 방법론) 
    - Bus는 데이터나 메모리의 움직임을 결정하고, 
        클럭이 들어오면 동작합니다. 
        - Master는 읽기/쓰기를 Slave단에 허락하고, 
        - Slave는 이 명령에 맞게 실행됩니다. 
        여러개의 MASTER와 SLAVE가 얽히고 섥혀있어, 
        SoC의 BUS에서 병목현상이 많이 발생해서, 
        이 부분은 각 모듈들에 라우터를 달아 연결한 형태인 ‘NoC’로 최적화를 합니다.
        (이 부분은 Network topology를 다뤄야해서, 나중에 NoC는 따로 다루겠습니다.) 
    - AMBA는 SoC에서 
        고성능 16/32bit MCU, 
        신호처리 프로세서, 
        주변장치의 설계 표준입니다. (문서가 오픈 되어 있음. 로열티 없음.) 
    - AMBA Bus Protocol은 
        저전력, 
        다중 마스터 지원, 
        높은 modularity(굳이 번역하자면, 교체나 업그레이드가 쉽다고 생각하면 됩니다.)

## APB (Advanced Peripheral Bus) : 
    주변장치를 제어 할 수 있음. 단순함. 낮은 주파수, 저전력이고, 저속이고 
    대량의 주변장치를 제어할 때 쓰입니다. 
    Sel input이 1이고, 
    clk가 rising edge거나 enalbe이 1일때 Write합니다.
    (저전력에서, 주변장치 In/Output 제어만 필요할 때 자주 씀.)

## ASB (Advanced System Bus) : 
    APB보다 
    전력, 주파수가 높고 고속, 
    파이프라인, 다수의 버스 마스터, 
    데이터 모았다가 연속 전송 기능.
    프로세서와 메모리를 연결하는 고속버스. ASB는 양방향 버스구조라서, 
    이후에 다중 버스로 바뀐 AHB가 쓰이게됩니다..)

 ## AHB (Advanced High-performance Bus) : 
    ASB의 업그레이드 버전이라고 생각하면 됩니다. 
    ASB의 기능을 포함하고, 
    ASB는 양방향 버스여서 병목현상이 발생했지만, 
    버스를 여러개로 나누어서 데이터 교환이 더 빠르게 일어납니다. 
    어떤 Bus의 Master를 써야하는지 
        중재해주는 Arbitor(중재기)가 있어요. 
        또, 각 신호의 주소를 해독하는 단일 디코더가 필요해요. 
        마스터와 슬레이브는 16개 까지만 권장됩니다. 

    AHB는 
        자동차의 ECU(Engine Control Unit), 
        아두이노 보드, 
        전투기 항전 등 
        Cortex-M, ARM7, ARM9 프로세서의 프로토콜로 정말 많이 쓰입니다. 

    하지만 고속 장치와 저속의 장치들이 다수 있으면, 
        고속 장치가 저속장치를 기다리느라 느려지는 문제 때문에 
        다중 장치 사용시에는 AMBA3의 AXI를 사용
