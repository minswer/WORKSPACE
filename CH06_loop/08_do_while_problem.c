#include <stdio.h>


// do-while 문으로 구구단 출력 프로그램 만들기 


int main(){
 /*   for(int i = 1; i<=9; i++) {
        for (int j = 2; j<=9; j++) {
            printf("%d x %d = %d", i, j, i*j);
        }
    }
*/

for (int i = 2; i <= 9; i++) { // 2단부터 9단까지
        for (int j = 1; j <= 9; j++) {
            printf("%dx%d = %d\t", i, j, i * j);
        }
        printf("\n"); // 각 단이 끝난 후 줄바꿈
    }
}