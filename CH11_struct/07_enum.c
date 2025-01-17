#include <stdio.h>

/*
    * 열거형(enum)

    - 열거형 변수는 사용할 수 있는 값을 미리 지정해두고 사용하는 방법
    ex. season {spring, summer, fall, winter};
    - 타입 안정성을 높일 수 있음 -> 유효성 체크할할 필요가 없음음
    - 가독성을 높일 수 있음 -> 0과 1 정수 표현이 아닌 문자열로 표현하기 때문
    - 유지 보수에 용이함 -> 수정 시 열거형만 수정하면, 나머지는 수정할 필요 없음
*/

enum season {Spring, Summer, Fall, Winter};

int main() {
    enum season ss;
    char *pc = NULL;


    ss = Spring;
    switch(ss) {
        case Spring: 
            pc = "inline";
            break;
        
        case Summer: 
            pc = "swimming";
            break;
        
        case Fall: 
            pc = "trip";
            break;
        
        case Winter: 
            pc = "skiing";
            break;
        }

printf("나의 레저활동: %s\n", pc);
}