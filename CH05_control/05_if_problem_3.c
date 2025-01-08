#include <stdio.h>
//두 수를 입력 받아 각 값의 크기를 비교하는 프로그램
int main() {
    int a, b;

    printf("정숫값1을 입력하세요.: ");
    scanf("%d", a);
    printf("정숫값2를 입력하세요.: ");
    scanf("%d", &b);

    if (a> b) {
        printf("%d가 %d보다 큽니다.", a, b);
    } else if (a = b) {
        printf("%d와 %d는 같습니다.", a, b);
    } else {
        printf("%d가 d보다 작습니다.", a, b);
    }
}