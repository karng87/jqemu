# Hyper Visor
Hyper : over
Visor : a movable part of a helmet

가상 머신 모니터라고도 하는 하이퍼바이저는 
가상 머신(VM)을 생성하고 실행하는 프로세스입니다. 
하이퍼바이저는 
메모리 및 처리와 같은 단일 호스트 컴퓨터의 리소스를 
가상으로 공유하여 
호스트 컴퓨터가 여러 게스트 가상 머신을 지원할 수 있도록 합니다.

    Type 1 (bare metal)
        호스트의 하드웨어에서 직접 실행됩니다. 

    Type 2 (hosted)
        다른 컴퓨터 프로그램처럼 운영 체제에서 소프트웨어 계층으로 실행됩니다. 

 

    하이퍼바이저를 사용해야 하는 이유
        하이퍼바이저를 사용하면 게스트 가상 머신이 호스트 하드웨어와 
        독립되어 시스템의 가용 리소스를 더 많이 활용하고 
        IT 모빌리티를 향상할 수 있습니다. 
        이를 통해 가상 머신을 여러 서버 간에 쉽게 이동시킬 수 있습니다.
# KVM
Kernel based Virtual Machine

     Linux가 기존의 OS 역할뿐만 아니라 
     하이퍼바이저의 역할을 가능하게 한다. 
     즉 Linux는 Guest라는 독립된 공간을 만들어주고, 
     이 공간에서 가상 머신이 동작한다. 

     Guest는 Linux 입장에서 하나의 프로세스다. 
     리눅스가 하이퍼바이저 역할을 수행하기 때문에 
     KVM이 다른 VMM(Virtual Machine Monitor)보다 더 가볍다고 말할 수 있다. 
     다른 VMM은 OS와 하이퍼바이저가 분리되어있고, 
     Mode를 변경하며 동작한다. 
     그러나 KVM은 VMM mode와 host mode를 구분하지 않기 때문에 
     mode switching을 줄일 수 있다. 
     KVM은 Linux 커널 모듈에 내장되어 있어서 
     커널 컴파일 하기 전에 .config 파일을 수정해서 
     모듈 load 여부를 설정할 수 있다. 
     또한 KVM은 메모리 관리, 스케줄링, 네트워크 스택 등 
     일반적인 하이퍼바이저의 역할을 수행한다. 

# QEMU
    Full Virtualization(전가상화)는 
    모든 CPU 명령어를 가상화(애뮬레이션)하므로 
    아키텍처에 제한을 받지 않지만 느리다.

    QEMU 는 다양한 디바이스/하드웨어에 대한 에뮬레이팅을 담당하고, 
    KVM 은 CPU/Memory 가상화를 담당

### image
부팅가능한 OS 가 설치된 
가상 Disk 를 포함하는 하나의 파일을 말합니다. 
즉, 하이퍼바이저 위에서 구동가능한 가상 컴퓨팅 환경(가상머신)을 
일정한 포맷을 이용해 파일로 만들어놓은 것입니다.

가상머신 이미지 파일만 있으면 서로 다른 가상화 환경 또는 클라우드 환경에서 
해당 가상머신을 기동할 수 있습니다. 다만, 해당 이미지 포맷을 지원하는 하이퍼바이저를 사용하는 환경이어야 가능하겠죠.

다음은 하이퍼바이저 별로 지원하는 이미지 포맷입니다.

    KVM     : img(Raw), qcow2(qemu), vmdk(vmware)
    VMWare   : vmdk
    VirtualBox : vdi, vmdk, qcow2, vhd
    Hyper-V   : vhd, vmdk, vdi
    XEN, XENServer : qcow2, vhd

# Libvirt
xml 형태의 파일을 qemu CLI로 변환해주는 인터페이스이다

# Virtio
Guest가 Host의 디바이스에 
다이렉트 접근을 가능하게 하는 반가상화 방식의 인터페이스다. 
즉, 하이퍼바이저를 통하지 않고 직접 물리 머신에 접근한다.

# Virtio-net
guest 커널 공간에서 동작하는 프론트엔드를 말한다.
