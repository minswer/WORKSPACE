#include <stdio.h>


/*
    *(삼각형 별 찍기 코드)

*/
int main(){
    for(int i = 1; i <= 5; i++) {           // 1. i(i = 1 ~ 5)번 반복
        for(int j = 1; j <= i; j++ ) {      // 2. i의 크기만큼 별 찍기
        printf("*");
        }
        printf("\n");                    
    }

    printf("--------------------------------- \n");

//역삼각형 별 찍기기

    for(int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}