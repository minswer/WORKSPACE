/*
    재귀함수와 for 문의 차이

    -1. 재귀함수는 코드를 반복실행하는 것처럼 보이지만 실제로는 새로운 함수를 실행하는 것과 동일함
    - 재귀함수는 최초 호출했던 곳이 아닌, 이전에 호출했던 재귀함수로 돌아감감
*/


#include <stdio.h>

void fruit(int count);

void fruit(int count) {
    printf("APPLE\n");

    if (count == 3) {
        return;
    }

    fruit(count + 1);        // 재귀함수 
    printf("jam\n");
}

int main() {
    fruit(1);
}