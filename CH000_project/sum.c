#include <stdio.h>


/*
 1. 정숫값 입력 받기. (예: 412)
 2. 각 자릿수 쪼개어 더하는 프로그램
 3. 출력 : 4 + 1 + 2 = 7
*/
int main() {
    int num;
    int total = 0;

    printf("숫자 입력: ");
    scanf("%d", &num);

    while(num > 0) {        // 조건 : 정수값을 입력받았을때
        total += (num%10);          // 각 자릿수는 나머지 구하는 식을 이용하여 계산산
        num /= 10;                  
   }
    printf("각 자릿수의의 합은: %d", total);
}