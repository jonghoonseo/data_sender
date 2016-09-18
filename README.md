# data_sender

이 저장소는 영제교 프로젝트를 위한  client OSC  전송 모듈을 공유하기 위해 사용됩니다.

## How to migrate
1. src 디렉토리 내에  main.cpp  를 제외한 파일들을 복사한다.
2. 아래 디렉토리들을 include path 에 추가한다.
- ..\..\src\osc\src
- ..\..\src\osc\libs\oscpack\src
- ..\..\src\osc\libs\oscpack\src\osc
- ..\..\src\osc\libs\oscpack\src\ip
- ..\..\src\osc\libs\oscpack\src\ip\win32
    ..\..\src\osc\src;..\..\src\osc\libs\oscpack\src;..\..\src\osc\libs\oscpack\src\osc;..\..\src\osc\libs\oscpack\src\ip;..\..\src\osc\libs\oscpack\src\ip\win32
3. osc_sender.h, common.h 를 include 하여 사용
4. osc_sender.cpp 의 sender.setup() 부분을 보면 server의 ip와 port를 수정할 수 있음
> 추후에 파일에서 읽는 버전으로 수정 예정

