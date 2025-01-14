#include <stdio.h>

// 배열 길이 계산
// -> c언어는 sizeof()를 이용하여 직접 계산

// * c언어 이외의 객체지향 언어들은 배열을 객체로 표현함.
// 기본적으로 배열이릉.length -> 배열 길이 / len(배열이름 -> 배열길이) 
int main() {
    int score[5];
    sizeof(score);           // 20byte
    sizeof(score[0]);        // 4byte
    int count = sizeof(score) / sizeof(score[0]);

    for (int i = 0; i < count; i++) {
        printf("배열 길이 : %d\n", count);
    }

    return 0;
}