#include <stdio.h>

/*
    * ũ�Ⱑ ū �迭�� ��� �Ű������� ����ϰ� �Ǹ�, c���� call-by-value�� �迭�� �����Ͽ� �Ű������� ������
    * �̴� ����� ��ȿ�����̱⿡, �Ű������� ������ ������ ����Ͽ� �迭�� �������� �ʰ� �����ϴ°� �� ȿ������
    * 
    *  => �迭�� �������� �迭�� �����ּҿ� ��������
*/

void arrSum(int arrNum[9999]);

void arrSum(int *pArr) {
    for(int i=0; i<9999; i++) {
        printf("%d����: %d", i, pArr[i]);
    }
}
int main() {
    int arrNum[9999] = {0};
    arrSum(arrNum);
}