#include <stdio.h>

int main() {
    // 사용자로부터 나이를 입력받고, 20살 이상이면 주류를 판매하는 시스템

    printf("나이는?:  ");

    int age;
    scanf("%d",&age);

    if(age>20){
        printf("주류 판매 가능");
    } else {
        printf("주류 판매 불가능능");
    }
}