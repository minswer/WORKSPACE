#include <stdio.h>

/*
    * 크기가 큰 배열의 경우 매개변수로 사용하게 되면, c언어는 call-by-value로 배열을 복사하여 매개변수로 전달함
    * 이는 상당히 비효율적이기에, 매개변수에 포인터 변수를 사용하여 배열을 복사하지 않고 전달하는게 더 효율적임
    * 
    *  => 배열의 변수명은 배열의 시작주소와 동일함함
*/

void arrSum(int arrNum[9999]);

void arrSum(int *pArr) {
    for(int i=0; i<9999; i++) {
        printf("%d번지: %d", i, pArr[i]);
    }
}
int main() {
    int arrNum[9999] = {0};
    arrSum(arrNum);
}