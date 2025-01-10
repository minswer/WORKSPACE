/*
    *return 반환값

    -1. 기본적으로 함수 종료의 의미(호출한 곳으로 돌아가기)
    -2. 반환값이 있는 경우, 함수의 데이터 변환 타입을 정의해야함
    -3. 반환값이 없는 경우엔, void로 정의함
    -4. return or 반환값 모두 생략은 가능함
    -5. 


*/

#include <stdio.h>

void voidFnc();
char intFnc();

void voidFnc() {
    printf("HELLO");
    return;
}

char intFnc() {
    return 'A';
}

int main() {
    voidFnc();
    intFnc();
}