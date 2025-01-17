/*
    0~100 범위의 성적을 읽어 들인 후 아래 함수를 이용하여 학점을 부여하고 출력하는 프로그램을 작성한다. 
    입출력은 main() 함수에서 실행한다. 성적에 따른 학점은 다음과 같이 부여한다.
    90~100점: A, 80~89점: B, 70~79점: C, 60~69점: D, 59점 이하: F
*/

#include <stdio.h>

// grade 함수: 포인터를 사용하여 성적에 맞는 학점을 반환
char grade(int *score) {
                            // 포인터로 전달된 성적(score)을 참조하여 조건에 맞는 학점 부여
    if (*score >= 90) {
        return 'A';         // 성적이 90 이상이면 'A' 반환
    } else if (*score >= 80) {
        return 'B';         // 성적이 80 이상 90 미만이면 'B' 반환
    } else if (*score >= 70) {
        return 'C';         // 성적이 70 이상 80 미만이면 'C' 반환
    } else if (*score >= 60) {
        return 'D';         // 성적이 60 이상 70 미만이면 'D' 반환
    } else {
        return 'F';         // 성적이 60 미만이면 'F' 반환
    }
}

int main() {
    int score;

    scanf("%d", &score);

    printf("%c\n", grade(&score));      // grade 함수 호출: score 변수의 주소를 포인터로 전달하여 학점 계산 후 출력

    return 0; 
}
