#include <stdio.h>

/*

*/

struct student {
    int id;
    char name[20];
    double grade;
};

int main() {
    int num1 = 1, num2 = 2, num3 = 3;
    struct student s1 = {315, "홍길동", 2.4};
    struct student s2 = {316, "이순신", 3.2};
    struct student s3 = {317, "세종대왕", 4.2};

    struct student max;
    max = s1;
    if(s2.grade > max.grade) {
        max = s2;
    }
    if (s3.grade > max.grade) {
        max = s3;
    }

    printf("학번(%d), 이름(%s), 학점(%.1lf)", max.id, max.name, max.grade);

}