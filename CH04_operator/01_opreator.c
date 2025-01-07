#include <stdio.h>

int main() {
    int a, b;
    int sum ,sub, mul, inv;

    a = 10;
    b = 20;

    sum = a + b;
    sub = a - b;    //빼기기
    mul = a*b;      //곱하기
    inv = -a;       //음수
}


// 복합 대입 연산자
// -=, *=, +=, /=, %=
// ex. a = a + 20 -> a+=20(a+20 한 결과를 다시 a에 집어넣으세요.)