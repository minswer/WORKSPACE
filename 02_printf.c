#include <stdio.h>
//지수 표현법
// x10을 e로 표현(ex. -0.0000314 = 3.14e-5)
// %. @lf =  소수점 @ 자리까지 표현현
int main(){
    printf("%1lf\n", 1e6); // =100000.0 = 1곱하기 10의 6제곱 + 소수점 1자리까지 표현

    printf("%. 7lf\n", 3.14e-5); // 0.0000314 = 3.14 곱하기 10의 -5제곱, 소수점 7자리까지 표현현

    printf("%le\n", 0.0000314); // 지수표현 바꿈꿈
}