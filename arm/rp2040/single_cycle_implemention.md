# Single Cycle Implementation
    Single cycle implementation이란 
        instruction 하나를 하나의 cycle에 수행하는 것을 말한다.

    Cycle이 끝나면 새로운 instruction을 수행한다.

    Clock이 올라가서부터 다음 clock이 올라가기 전까지 하나의 수행을 마친다.
    다음 clock이 올라가는 순간 
        instruction 수행 결과(state)를 update하고, 
        새로운 instruction을 수행한다.
