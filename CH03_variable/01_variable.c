#include <stdio.h>

/*
변수: 하나의 값을 저장하는 메모리 공간간
1. 선언 + 초기화 => int num = 4;
2. 선언 후 초기화 => int num;   num = 4;
3. 프로그래밍 언어에서의 초기화 = 변수가 할당된 실제 메모리 공간에는 기존의 파일들(잔여물)이 남아있음. 
이에 초기화를 통해 이런 잔여물을 삭제하고 값을 저장함.
4. "=" 대입연산자
    -1. equal의 의미가 아님("== : equal :> 동등연산자자")
    -2. "A = B" 의 경우 B의 값을 A에 대입한다
5. 변수와 상수
    -1. 변수: 한번 생성 후에 값을 여러번 변경 가능(소문자 사용용)
    -2. 상수: 설정 후 변하지 않는 값(고정된 값, ex. 금리, PI값,)
        -1. 상수 선언(const // 자바엔 final) >> 보통 대문자를 사용함
        -2. 상수는 '선언 + 초기화'만 가능함 => const USER_IP = 10;

6. 자료형
    -. 해당 변수에 저장할 값의 형태를 지정(int, float, char, double, array ...)

*/

int main() {
    int a;
    // int형 변수 a 선언
    // 마찬가지로 int a, b, c; 의 경우 변수 a, b, c 선언

    double da;
    //double형 변수 da 선언

    char ch;
    //char형 변수 ch 선언

    a = 10;
    // int 형 변수 a에 대한 10 초기화

    da = 3.14;
    //double 형 변수 da에 대한 변수 3.14 선언
    
    ch = 'A';
    //char형 변수 ch에 대한 변수 'A'선언
}