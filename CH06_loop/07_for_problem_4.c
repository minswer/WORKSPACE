#include <stdio.h>


// ¦�� ��, Ȧ�� �� ������ϱ� 
int main() {
    int evensum = 0;        //¦����
    int oddsum = 0;         //Ȧ����

    for (int i = 1; i <= 100; i++) {
        //Ȧ¦ �Ǻ� �ڵ�
        if (i % 2 == 0) {
            evensum += i;
        } else {
            oddsum += i;
        }
    } 
    printf("¦�� ���� %d, Ȧ�� ���� %d", evensum, oddsum);
}