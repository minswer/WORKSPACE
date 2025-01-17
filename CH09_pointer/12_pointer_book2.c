// 윤년 계산 프로그램 예제 2번

#include <stdio.h>

// 윤년을 확인하는 함수
// 주어진 연도(y)가 윤년이면 1을, 아니면 0을 반환
// 윤년 조건: 4로 나누어 떨어지며 100으로 나누어 떨어지지 않거나, 400으로 나누어 떨어지면 윤년
int is_leap(int y) {
    return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

// 주어진 연도(y)와 월(m)에 해당하는 날짜 수를 반환하는 함수
// mdays 배열: 각 월에 해당하는 날짜 수를 저장
// 첫 번째 배열은 평년(2월 28일), 두 번째 배열은 윤년(2월 29일)을 반영
int days_of_month(int y, int m) {
    int mdays[][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},  // 평년 (2월 28일)
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},  // 윤년 (2월 29일)
    };

    // 윤년 확인 후 해당 배열을 선택하여 월에 해당하는 날짜를 반환
    return is_leap(y) ? mdays[1][m - 1] : mdays[0][m - 1];
}

// 날짜를 하루 뒤로 가는 함수
void decrement_date(int* y, int* m, int* d) {
    // 일(day)이 1보다 크면 일자를 감소
    if (*d > 1)
        --*d;
    else {
        // 일이 1일인 경우, 월을 하나 줄여야 하므로
        // 월이 1보다 작으면, 연도를 1 감소시키고, 월을 12로 설정
        if (*m < 1) {
            --*y;
            *m = 12;
        }
        // 일을 마지막 날짜로 설정
        *d = days_of_month(*y, *m);
    }
}

// 날짜를 하루 뒤로 가는 함수
void increment_date(int* y, int* m, int* d) {
    // 일이 해당 월의 날짜 수보다 작으면, 일자를 1 증가
    if (*d < days_of_month(*y, *m))
        ++*d;
    else {
        // 일이 해당 월의 마지막 날이면, 월을 증가시켜야 하므로
        if (++*m > 12) {
            ++*y;
            *m = 1;
        }
        // 일을 1로 설정
        *d = 1;
    }
}

int main() {
    int i, n, y, m, d;

    puts("날짜 입력: ");
    printf("연: "); scanf("%d", &y);  
    printf("월: "); scanf("%d", &m);  
    printf("일: "); scanf("%d", &d); 

    // 며칠 뒤로 갈지 입력 받기
    printf("며칠 뒤로 할까요?: "); scanf("%d", &n);

    // n일 만큼 날짜를 감소시킴
    for (i = 0; i < n; i++)
        decrement_date(&y, &m, &d);

    printf("%d 년 %d 월 %d 일이 지났습니다.\n", y, m, d);

    // 며칠 앞으로 갈지 입력 받기
    printf("며칠 앞으로 할까요?: "); scanf("%d", &n);

    // n일 만큼 날짜를 증가시킴
    for (i = 0; i < n; i++)
        increment_date(&y, &m, &d);

    printf("%d 년 %d 월 %d 일이 되었습니다.\n", y, m, d);
}


