#include <stdio.h>

int main() {
    // 입력: scanf => gets -> 문자열 입력
    // 출력: printf => puts -> 문자열 출력

    char name[20];
    printf("이름: ");
    gets(name);     // 빈칸을 포함하는 문자열 입력 가능
    puts("입력된 문자열: ");
    puts(name);     // 자동으로 + "\n" 포함됨 + 문자열만 출력 가능능
}