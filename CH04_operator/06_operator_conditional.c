/*
    삼항 연산자(conditional operator)

    - 3 개의 항을 사용하는 연산자
    - (조건) ? 값1: 값2
        -> 조건이 true => 값1
        -> 조건이 false => 값2
    
*/

#include <stdio.h>

int main() {
    int a = 10, b = 20, res;

    res = (a > b) > a : b;
    printf("큰 값: ", res);
}