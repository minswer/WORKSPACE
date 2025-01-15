#include <stdio.h>
/*
    * const = 상수 =>> 포인터에서도 표현 가능함
        -> 포인터에서의 const의 의미는??

            ->> < 포인터 변수가 가리키는 변수를 간접참조 연산자로 변환이 불가함 > 을 의미함
            ->> 포인터 변수를 read_only 로 사용하는 것과 동일함 => 값을 변경하는 것만 불가하기 때문
*/
int main(){
    int a=10, b=20;
    const int *pa = &a;         // pa <-> a

    printf("변수 a 출력 : %d\n", *pa );
    pa = &b;                    // pb <-> b
    printf("변수 b 출력: %d\n", *pa);

    pa = &a;                    // pa<->a
    a = 80;
    printf("변수 a 출력: %d\n", *pa);
    // const 포인터 변수는 간접 참조 연산자로 값을 변경하는 것만 불가함
    // *pa = 99 ->> X
    // => const를 언제 붙이는게 가장 좋을까?
    //  

}