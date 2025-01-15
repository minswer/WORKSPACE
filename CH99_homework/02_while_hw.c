#include <stdio.h>

// 문제 : while 문을 이용하여 1부터 100까지의 값을 사용해서 홀수합, 짝수합을 계산하시오.
// 꼭 해보기 : 라이브 코딩 때의 출제 가능성성

int main() {
int i = 1;
int oddsum = 0;
int evensum = 0;

while (i<=100) {
    if (i%2 == 1) {
        oddsum += i;
    }   else {
        evensum += i;
    }
    i++;
}

printf("홀수 합은 %d, 짝수 합은 %d 입니다.", evensum, oddsum);
    
}