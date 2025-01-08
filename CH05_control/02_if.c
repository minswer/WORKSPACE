#include <stdio.h>

/*
   *if문의 기본 문법
   
    if(조건) {
        실행문;
    } else if(조건) {
        실행문;
    } else {
        실행문;
    } 

    무조건 if로 시작
    if 와 else는 1번, else if는 자주 사용 가능
    if 와 else if의 조건이 참이면 해당 블록문이 실행됨
    if 조건문 시작해서 아래로 실행됨
        - 조건이 거짓이면 다음 else if()문이 실행됨
        - 조건이 참이면 다음 else if()문은 실행 안된 채로 끝남남
        - 모든 조건이 거짓이라면 else 실행행


    if 문의 조합

    1. if()

    2. if() ~ else 

    3. if() ~ elseif()

    4. if() ~ elseif() ~ else

*/

int main() {
    int a = 20;

    if (a>20) {
        printf("a가 20보다 크다.");
    } else {
        printf("a는 20보다 작다.");
    }

    if(a>10) {
        printf("10");
    } 
    if (a>5) {
        printf("5");
    } 
    if (a>1) {
        printf("1");
    }
}