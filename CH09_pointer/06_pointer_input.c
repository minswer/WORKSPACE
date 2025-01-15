#include <stdio.h>
/*
    * 포인터 대입 규칙
    -> 포인터는 가리키는 변수의 자료형이 같을 때만 대입 가능함
    -> 형 변환을 사용한 포인터의 대입은 언제가 가능함
    ex. double a = 3.4;     -> a는 8번지를 갖음
        double *pd = &a;    -> pd라는 포인터 변수가 a를 가리키게 함
        int *pi =;          -> pi라는 포인터 변수는 int형으로 선언
        pi = (int *)pd;     -> double 형이었던 pd라는 포인터 변수를 int형으로 형 변환
*/
int main() {
    int a = 10;
    int *p = &a;
    double *pd;

    // pd = p; -> 오류남 => pd는 상수라서 좌측항에 위치 x
    
    printf("%lf\n", *pd);
}