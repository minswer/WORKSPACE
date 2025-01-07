#include <stdio.h>

/*
    printf() : 출력 함수
    scanf() : 입력 함수(사용자로부터 값을 입력받음) => scanf("%d", &n);
    -> 여기서 %d(int형 변환문자), 그리고 &n(사용자로부터 받은 입력값을 정수형으로 변환하여 저장할 변수 n에 저장)

*/

int main() {
    int a;

     scanf("%d", &a);

     printf("입력값: %d\n", a);
}