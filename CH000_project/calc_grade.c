// 성적 계산기 프로그램
// 3과목의 성적을 입력 받고, 이를 배열에 저장함
// 총점과 평균을 계산하여 출력함

#include <stdio.h>

int main() {
    char name[20];      //이름름
    int score[3];       // 점수
    int total = 0;      // 총합 = 0
    double avg;         // 평균(소수점)

    // 1. 입력부
    printf("이름: ");
    scanf("%s", &name);

    // 2. 3과목에 대한 점수 입력받음 -> 3번 반복
    for (int i=0; i<3; i++) {      // i(0~2 : 배열 인덱스만큼)
        printf("점수: ");
        scanf("%d", &score[i]);     // 점수를 입력받아 score 배열에 저장함
    }

    // 3. 계산부
    for (int i=0; i<3; i++) {
        total += score[i];
    }

    avg = total/3.0;

    printf("%s 님의 총점은 %d, 평균은 %.2lf입니다", name, total, avg);

}