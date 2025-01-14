#include <stdio.h>

/*
정수형 자료형
    -> char, short, int, long, long long ...(-> 우측으로 갈수록 더 큰 값 표현 가능)
    -> char 문자형 -> 정수형으로 변환
    -> 동일한 type 인데 다양한 범위의 자료형을 사용하는 이유 : 메모리의 낭비를 막고 효율적인 관리를 위하여
    -> 현재는 하드 웨어의 발전으로 인해 int(4byte) 형 대부분 사용
    -> sizeof() : 자료형 크기 확인 가능
    -> 문자값은 정수형으로 치환 가능 => char 사용용
*/


int main() {
    char ch1 = 'A';
    // 문자로 초기화, 저장된 값은 ASCII 코드값
    
    char ch2 = 65;
    // 문자 'A'의 ASCII 코드 값에 해당하는 정수로 초기화

    printf("문자 %c의 ASCII 코드값 : %d\n", ch1, ch1);
    printf("ASCII 코드 값이 %d인 문자 : %c\n", ch2, ch2);
    printf("==========================================");

    short sh = 32767;
    //short의 최대값(-32767 ~ +32767)
    int ln_int = 2147483647;   // int 타입 변수
    long ln_long = 2147483647L; // long 타입 변수

    //int, long 의 최댓값
    long long lln = 123451234513245;
    // 그냥 큰 값 선언언

    // ex. short는 -32767 ~ 32767까지 범위 표현
    // short sh = 32767;
    // sh +1 =?? => -32767

    printf("short형 변수 출력: %,d\n", sh);
    printf("int형 변수 출력: %,d\n", ln_int);
    printf("long형 변수 출력: %,ld\n", ln_long);
    printf("long long형 변수 출력: %,lld\n", lln);

    printf("int 형의 크기: %d byte \n", sizeof(int));
    printf("long 형의 크기: %ld byte \n", sizeof(long));
    printf("long long 형의 크기: %lld byte \n", sizeof(long long));
    

}