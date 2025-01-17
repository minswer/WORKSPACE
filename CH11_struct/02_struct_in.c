/*
구조체 안의 구조체
*/

#include <stdio.h>

struct profile {
    int age;                    // 8 -> int + padding
    double height;              // 8 -> double              => pf
};

struct student {
    struct profile pf;          // student 구조체 안의 멤버 변수로 profile 구조체 선언언
    int id;                     
    double grade;                               // 8 -> pf
};          // ; 꼭 사용해야함                   // 8 -> int + padding
                                                // 8 -> double              => student

int main(){
    struct student s1;
    s1.pf.age = 37;
    s1.pf.height = 183.2;
    s1.id = 99;
    s1.grade = 4.2;

    printf("나이: %d\n", s1.pf.age);
    printf("키: %d\n", s1.pf.height);
    printf("학번: %d\n", s1.id);
    printf("학점점: %d\n", s1.grade);

}