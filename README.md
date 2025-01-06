## 1. 마크다운(MD)
    
    - README.md는 프로젝트 설명서와 비슷
    - md는 마크다운 언어(MARKDOWN)의 약자
    - 이 언어는 문자를 생성할때 많이 사용 + 매우 쉬움(15min)
    - 이모지(EMOJI)와 함꼐 많이 사용

## 2. 프로그래밍 언어
    
    - 컴퓨터와 대화를 하기 위해 필요한 언어
        + 자연어(Natural Language) : 인간이 사용하는 언어(한국어, 영어, 일어 등)
        + 프로그래밍 언어 (Programming Language) : (c, c++, JAVA 등등)
        + 기계어 (Machine Language) : 컴퓨터가 사용하는 언어(이진법에 기반한 0과 1로 구성된 언어)
    - 자연어("Hello 출력하는 코드 작성해줘") -> 컴퓨터(못 알아먹음 -> 동작X) => 이걸 이해하게끔 하는게 자연어 처리 분야야
    - 개발자가 기계어로 코드를를 작성해서 컴퓨터에 전달 -> 컴퓨터(알아먹음 -> 동작O) -> 인간의 능력X
    - 자연어 -> 프로그래밍 언어 (printf("Hello); -> 컴파일러의 번역 ) -> 기계어
    - 프로그래밍 언어 작성 수단(VSCODE), 컴파일러(MinGW or MSYS)

### 2-1. 프로그래밍 언어의 종류
   
    - 자연어
    - (자연어에 가까워질 수록 인간 친화적인 언어(개발자에 편리함) - High Level Language - JAVA, PYTHON) 
    - 프로그래밍 언어 
    - (기계어에 가까워질 수록 기계 친화적인 언어(개발자에 불편함) - Low Level Language - 어셈블리, c)
    - 기계어

### 2-2. 프로그래밍 언어의 역사
  
    -1. c언어(절차지향 언어) : UNIX에서 사용하기 위해 개발된 언어
    -2. c++ (절차지향 + 객체지향 언어) 
    -3. JAVA(100% 객체지향 언어) 
    -4. c#(c++++ = 100% 객체지향 언어)

### 2-3. 프로그래밍 언어 사용(여러 언어를 다양하게 배워야 분야에 국한되지 않고 진출 가능)
  
    -1. c언어 계열: 임베디드(초소형 기계), 기계(로봇, 공장, 드론). 게임. 복잡합 수식 계산
    -2. JAVA: 서비스(WEB, APP)
    -3. PYTHON: 서비스(인공지능, 데이터분석, WEB)
    -4. JAVASCRIPT: 서비스(WEB)  
    * 어떤 언어를 주력으로 사용하든, 꼭 C 언어는 공부해야함(포인터 정도까지는 해야함).
    * HIGH-LEVEL 언어들은 메모리 관리를 언어가 자동으로 해줌(메모리 상관없이 그냥 개발만 하면 됨)
    * LOW-LEVEL 언어들은 이런 메모리 관리 등을 개발자가 직접 해줘야 함.
    * 초급 개발자 시기엔 언어 한가지 사용 후 한가지 기능만 처리하면 ok
    * 그러나 중급 이상 시기엔 기능은 당연하고 퍼포먼스가 상당히 중요(따라서 이런 메모리 관리 같은 것도 할 줄 알아야 함함)

### 2-4. 프로그래밍 언어의 종류
  
    -1. 절차 지향
        - 순서: 절차(위에서 아래로) 개발하고 실행 = 간단명료
        - 재사용 X, 유지보수 X(어려움) => 간단한 구조의 프로그램을 만들때 많이 사용용
    -2. 객체 지향
        - 모든 것들을 객체로 사용
        - 재사용, 유지보수 OO => 복잡한 구조의 프로그램 개발 가능 및 많이 사용중
        - 이로 인해, 현재 대부분의 프로그램들은 객체 지향으로 개발발

### 2-5. 운영체제(OS)
    - PC 4대 운영체제(Windows, MACos, UNIX, LINUX)


### 2-6. c언어 실행 과정
    -1. Hello.c(소스 파일) = 코드 작성
    -2. 컴파일러(gcc) = 소스 파일을 기계어로 번역
    -3. hello.exe(컴파일러가 소스 파일(hello.c)을 번역해서 나온 결과물 - 실행 파일)
    * 인터프리터(interpreter): 코드라인 1줄씩 번역(PYTHON) => 컴파일러에 비해 다소 속도가 많이 느림.(하드웨어 성능 상승 후 Python 사용성 증가가)
    * 컴파일러: 코드라인 전체 통번역 => exe(실행파일) 생성 후엔 컴파일 X(이미 결과물 생성했으니깐 또다른 생성물 생성 X)

## 3. 버전 관리 도구(입사시 바로 사용 => 미리 사용법을 익혀놓으면 유용함)
    - 버전 관리의 목적
    - 협업의 목적
    - git => 버전 관리 도구
    - github => git을 웹 클라우드 기반(서버 상관없음)에서 동작을 서비스
    - gitlab => git을 각 서버 기반으로 동작(각 서버는 해당 서버에서만 접속할 수 있도록 조절) 
    - 비트버킷 + 소스트리 => 아틀라시안(해외)
    * git 사용법은 약간 유닉스랑 비슷
    * git init = 현 주소
    * git status = 보유 파일
    * git add = github에 추가

### 3-1. 초기 git 프로젝트 생성
    + github(웹 클라우드 기반 : global)
    + pc or notebook(local)
    + global => remote(원격 연결) =>> local
    + commit : local에 버전 생성
    + push : local에서 생성된 버전을 github에 업로드
    + pull : github로부터 파일을 다운로드드

    -1. 로컬: git 설치
    -2. github:: github repositery 생성
    -3. 로컬: git config --global user.email "이메일 주소" // user.name"닉네임"
    -4. git init(팀장의 역할-초기화)
    -5. git add [file] (git add . = 모든 파일 업로드)
    -6. git commit -m(message) "init project"
    -7. git remote add origin https://github.com/minswer/WORKSPACE.git
    -8. git remote -v
    -9. git push -u(최초에만) origin(원격 저장소) master(my branch)
    + git branch [name] => branch 생성
