#include <stdio.h>
/*
    BMI 계산 프로그램
    1, 키와 몸무게 입력 받기
    2. BMI 계산 작성(몸무게 / 키(m)^2)
    3. 출력(18.5 미만, 18.5~23미만, 23~26미만, 26~30미만, 30)

    다시 보기 : 기말고사 때의 출제 가능성성
*/
int main() {
    int height, weight;

    printf("키(cm)를 입력하세요: ");
    scanf("%d", &height);

    printf("몸무게를 입력하세요: ");
    scanf("%d", &weight);

// 키를 cm단위로 입력받기에 m단위로 처리 후 BMI를 소수점 둘째 자리까지 처리.
// (m 단위의 키와 BMI 지수는 소수이기에 int 정수형이 아닌 double 소수형을 사용함함)
    double height_m = (double)height / 100;
    double BMI = weight / (height_m * height_m);
    printf("BMI는 %.2lf\n입니다.", BMI);

    if (BMI < 18.5) {
        printf("저체중입니다.");
    } else if(BMI >= 18.5 && BMI < 23) {
        printf("정상 체중입니다.");
    } else if (BMI >= 23 && BMI < 26) {
        printf("과제중입니다.");
    } else if (BMI >= 26 && BMI < 30) {
        printf("비만입니다.");
    } else {
        printf("고도비만입니다.");
    }

}

/* #include <string.h> 를 활용하여 BMI 결과를 문자열로 출력하고 싶을때 가능한 프로그램(고수님)

#include <stdio.h>
#include <string.h>

    int main() {
    int height, weight;
    char result[20]; 
    // BMI 등급을 저장할 문자열(BMI 결과를 문자열로 출력하기 위함함)

    printf("키(cm)를 입력하세요: ");
    scanf("%d", &height);

    printf("몸무게를 입력하세요: ");
    scanf("%d", &weight);

    double height_m = (double)height / 100;
    double BMI = weight / (height_m * height_m);

    if (BMI < 18.5) {
        strcpy(result, "저체중입니다."); // 문자열 복사(strcpy 사용용)
    } else if (BMI >= 18.5 && BMI < 23) {
        strcpy(result, "정상 체중입니다.");
    } else if (BMI >= 23 && BMI < 26) {
        strcpy(result, "과체중입니다.");
    } else if (BMI >= 26 && BMI < 30) {
        strcpy(result, "비만입니다.");
    } else {
        strcpy(result, "고도비만입니다.");
    }

    printf("당신의 BMI는 %.2lf입니다. %s\n", BMI, result);

    return 0;
}



*/