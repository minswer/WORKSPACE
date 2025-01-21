#include <stdio.h>

// 
struct good {
    char name[10];              // 변수는 name 과 age
    int age;
};


void main(){
    struct good s[] = {"Kim",28,"Lee",38,"Seo",50,"Park",35};       //  4칸 배열(0번부터 3번번)

    struct good *p;
    p = s;
    p++;        // 2번째 주소 값 출력함함
    
    // 포인터로 구조체에 접근근
    printf("%s\n", p-> name);
    printf("%d\n", p-> age);
}