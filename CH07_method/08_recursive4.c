#include <stdio.h>
// 0j 시스템 재귀함수 예제문제

void printA(int n) {
    if (n == 0) {
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("A");
    }
    printf("\n");

    printA(n - 1); 
}

int main() {
    int n;
    scanf("%d", &n); // 정수 입력
    printA(n);       // 함수 호출
    return 0;
}
