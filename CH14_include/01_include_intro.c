#include <stdio.h>
#define PI 3.14

/*
    * 지시자
    
    1. #include : 지정한 파일을 소스코드에 포함
        ex. #include <stdio.h>
            -> include  디렉토리에서 stdio 헤더파일을 찾아 코드에 복사함

    2. #define : 매크로 상수와 매크로 함수를 만들때 사용함
        ex. #define PI 3.14
            - pi는 상수 3.14로 변경함
        ex. #define SUM(x, y) ((X) + (y))
            - SUM (10, 20)은 ((10) + (20))으로 변경

    3. #if, #else, #elif, #ifdef, #endif : 조건부 컴파일 지시자

    
    
    * c언어 컴파일 과정 3단계

    ex. 소스 파일 (abc.c) 직접 코딩했음

    1. 전처리 과정을 거침 -> 지시자(#include)에 따라 프로그램에 필요한 소스 중 외부에 있는 소스를 불러옴
        => 전처리된 소스 파일(abc.i)
    
    2. 컴파일 -> cpu 가 해석할 수 있는 명령어들로 구성된 기계어로 변환함, 그러나 바로 실행은 불가함
    (프로그램 운영 체제에 의해 실행되므로 설치된 운영체제가 인식할 수 있도록 변경이 필요함)
        2-1. 컴파일(전처리된 소스 파일을 어셈블리어로 바꿈 -> abc.s) + 어셈블(어셈블리어를 다시 기계어로 바꿈 -> abc.o)
        => 개체 파일(obj file)로 변환 -> abc.o

        *** c언어의 컴파일 과정을 4단계로 나눌 경우, 컴파일 - 어셈블 과정으로 쪼개짐짐

    3. 링크 -> start-up 코드(프로그램 실행 전 필요한 준비 작업)와 결합하는 과정을 거침
            -> start-up 코드에서 main() 호출함
            -> main()에 작성된 코드가 실행됨

            => abc.exe(실행파일) 생성됨됨
*/          

int main() {
    printf("%.2lf", PI);
}