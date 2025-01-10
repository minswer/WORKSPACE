/*
    Recursive = 재귀함수

    -1. 자기 자신을 계속 호출하는 함수
    -2. 
*/

#include <stdio.h>

//   무한 호출 재귀함수의 예시

void fruit(void);

void fruit(void) {
    printf("APPLE");
    fruit();        // 재귀함수 : APPLE 출력을 무한 출력함(fruit 함수 무한 호출출)
}

int main() {
    fruit();
}