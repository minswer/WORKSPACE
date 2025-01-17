#include <stdio.h>

/*
    구조체 안의 함수수
*/

struct vision {         // 구조체 선언 및 정의의
    double left;        // 8 - double
    double right;       // 8 - double
};

struct vision exchange(struct vision robot);            // 함수 선언
struct vision exchange(struct vision robot) {           // 함수 정의의
    double temp;
    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;
    return robot;       // 값 치환환
}

int main() {   
    struct vision robot;

    printf("시력: ");
    scanf("%lf%lf", &(robot.left), &(robot.right));

    robot = exchange(robot);
    printf("변경 후 시력: %lf%lf", robot.left, robot.right);

}