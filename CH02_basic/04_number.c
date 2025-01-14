#include <stdio.h>
//format => 외워놓자자
// 1. 정수(%d)  = decimal
// 2. 실수(%lf) = float
// 3. 문자(%c) = '  = character(char)
// 4. 문자열(%s) = " " = string(str)


int main() {
    printf("%d\n", 10);
    // %d 자리에 10을 출력함함

    printf("%.1lf\n", 3.45);
    // %.1lf 위치에 3.45를 소수점 첫 번째자리까지 반올림하여 출력함.

    printf("%d와 %d의 합은 %d입니다.", 10, 20, 10+20); 
    // 첫번째 %d=10, 두번째 %d=20

    
}