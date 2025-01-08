#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("점수는: ");
    scanf("%d", &score);

    if(score < 61) {
        grade = 'F';
        printf("학점은 %c입니다.", grade);
    } else if (score < 71) {
        grade = 'D';
        printf("학점은 %c학점입니다.", grade);
    } else if (score < 81) {
        grade = 'C';
        printf("학점은 %c학점입니다.", grade);
    } else if (score < 91) {
        grade = 'B';
        printf("학점은 %c학점입니다.", grade);
    } else {
        score = 'A';
        printf("학점은 %c학점입니다.", grade);
    }
}


/*
** 유효성 체크
    1.      값이 존재하는지 체크       
    2.      정수형 숫자인지 체크
    3.      0~100 사이의 숫자인지 체크크
*/