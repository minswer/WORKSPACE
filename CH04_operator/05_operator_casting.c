#include <stdio.h>

/*
    형 변환(casting)

    1. promotion(small type의 값을 big type의 값으로 변환)
        ex. int -> double => 문제 없음(프로그래밍 언어가 자동으로 형 변환환)
    2. casting(big type을 small type의 값으로 변환)
        -> 값의 손실이 생김 => 직접 코드 작성(주의해야함함)
        ex. 3.14 -> int = 3
*/

int main() {
    //프로모션

    double res;
    res = 5;

    printf("%lf", res);

    // 캐스팅

    double pi = 3.14;
    int a;
    a = pi;
    printf("%d", a);
}