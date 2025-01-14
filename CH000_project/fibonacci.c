#include <stdio.h>

/*
    피보나치 수열 프로그램
    - 피보나치 수열이란 첫째 및 둘째 항이 1이며, 그 뒤의 모든 항은 바로 앞 두 항의 합인 수열
    ex. 1 1 2 3 5 8 13 ...

    ** 라이브 코딩때 이정도 난이도의 문제 출제 예정
*/

int main() {
    int a = 1;
    int b = 1;
    int fib;

    printf("%d %d", a, b);

    //무한반복(0을 주면 false, 1 이상의 정숫값을 주면 true)
    while(1) {
        fib = a + b;
        printf(" %d", fib);
     
        a = b;
        b = fib;

        if (fib > 13) {
            break;
        }
    }   
}