/*
    Parameter = 매개변수

    -1. 함수의 입력값
    -2. 여려 개 사용 가능(,로 구분함)
    -3. 같은 이름의 매개 변수는 사용 불가 -> (반환되는 형태가 다르더라도 변수의 이름이 같으면 불가능)
    -4. 매개변수를 사용하지 않을 때엔 void룰 사용함
    -5. 
*/


#include <stdio.h>

int get_num(void);      // 숫자 호출 함수수

int get_num(void) {
    return 5;
}

int main() {
    printf("%d", get_num());
}