/*
    * 함수(method)

    - 특별한(반복적인) 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합
    - 기능을 수행하는 코드 단위
    - 반복적인 작업을 피하기 위해 사용함
    - ex) 아침마다 코드 10줄을 작성하여 보고서를 제출해야함 -> 미리 함수 코드 작성해놓음 -> 함수 호출 -> 스케줄링 -> 보고서 제출
    - main(), printf(), scanf() -> 소괄호를 사용함, 카멜 케이스를 사용함
    
    
    
    * C 언어에서의 사용법

    -1. 함수 정의 : 함수를 코드로 구현함
    -2. 함수 호출 : 정의된 함수를 사용하기 위해 호출하는 단계
    *일반적인 객체지향 프로그램에선 여기까지만 함.
    -3. 함수 선언 : 프로그램 상단에 어떤 함수를 사용할지 컴파일러에게 정보를 전달하는 역할
    -

    * 함수의 종류류
    -1. C 프로그래밍 언어에서 기본적으로 제공하는 함수(main, printf, scanf) -> 내장 함수(built-in 함수)
    -2. 외부에서 개발해놓은 코드의 묶음 -> 외장 함수(library 함수) -> 라이브러리의 개수로 언어의 인기 척도 측정 가능
    -3. 사용자가 직접 개발해서 사용하는 함수 -> 사용자 정의함수

    * 함수의 문법

    - 데이터 반환 타입 함수(매개 변수 1, 매개개 변수 2, ...) {
        실행문;
        return 반환값;
    }
    - ex) int sum(int a, int b) {       // a+b의 합을 구하는 함수
        (반횐되는 total 값이 정수형임을 알 수 있도록 반횐되는 데이터 값의 형태를 알려주는 함수를 적어줘야함.)
        total = a + b;
        return total;
    }

    * 함수의 종료

    -1. return - > 만나면 종료함.
    -2. } -> 만나면 종료함

    * 함수의 키워드

    -1. 매개 변수 : 함수의 입력값을 받는 변수수, 여려개 사용 가능(,를 이용하여 구분함.) = parameter, arguments
        -> 매개변수가 없는 함수도 존재 가능
    -2. return : 함수의 종료를 의미함.
        -> 함수의 종료 : 함수 호출부(return -)에서 내가 정의해 놓은 함수를 호출했던 쪽으로 돌아감.
        -> return 반환값 => 호출했던 곳으로 돌아가되, 반환값을 가지고 돌아감.
        -> return과 반환값 모두 생략 가능함. -> return이 없을 경우에도 함수는 종료함.
    -3. 매개변수, 데이터 반환 타입이든 생력 가능함 -> void 를 사용하면
        ->> 'void' => 매개변수와 데이터 반환 타입을 사용하지 않겠다는 의미
    ex. void sum(int a, int b) {
            printf("hello");    
    }
    * 

*/



#include <stdio.h>

// 3. 함수 선언
// 컴파일러에게 함수를 사용하겠다고 선언함함
int sum(int x, int y);

//1. 함수 정의 (사용자 정의 함수수)
int sum(int x, int y) {
    int temp;
    temp = x + y;
    return temp;
}

// 메인함수
int main() {
        int a = 10;
        int b = 5;
        int result;

    // 2. 함수 호출
    // 생성된 함수를 호출해서 사용함함
    result = sum(a, b);
    printf("반환값 : %d", result);
}