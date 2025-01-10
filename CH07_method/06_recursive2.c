/*
    기사 시험 볼때 무조건 나옴.. ㅠ => 호출 과정에 대한 이해(스택) 필요함
*/

#include <stdio.h>

void fruit(int count);

void fruit(int count) {
    printf("APPLE");

    if (count == 3) {
        return;
    }

    fruit(count + 1);        // 재귀함수 
}

int main() {
    fruit(1);
}