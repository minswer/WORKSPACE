#include <stdio.h>
#include <string.h>

int main() {
    char name1[4] = "abc";
    // char은 4byte => name2는 16byte 필요함
    // -> 메모리 주소: 100번지 시작(100번지부터 115번지까지가 name2)
    //  -> name2 호출하면 100번지 주소(시작번지 주소)를 가져다 줌
    //   -> 
    char name2[4];


    // name2 = name1;  -> 사용불가
    // 변수는 주소값
    // 예를 들어, name2는 100 번지 주소를 의미함.
    // 대입 연산자의 좌측항은 상수 불가

    strcpy(name2,name1);        // name2 = name1 
    printf("%s", name2);
}