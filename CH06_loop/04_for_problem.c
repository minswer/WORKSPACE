#include <stdio.h>

// 1부터 100까지 더하는 코드드
int main() {

    int total = 0;

    for(int i = 0; i<101; ++i) {        // == for(int i = 0; i<=100; i++)
        total += i;                     // == total = total + i;
    }

    printf("1부터 100까지의 합은 %d", total);
}