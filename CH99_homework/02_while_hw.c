#include <stdio.h>

// ���� : while ���� �̿��Ͽ� 1���� 100������ ���� ����ؼ� Ȧ����, ¦������ ����Ͻÿ�.
// �� �غ��� : ���̺� �ڵ� ���� ���� ���ɼ���

int main() {
int i = 1;
int oddsum = 0;
int evensum = 0;

while (i<=100) {
    if (i%2 == 1) {
        oddsum += i;
    }   else {
        evensum += i;
    }
    i++;
}

printf("Ȧ�� ���� %d, ¦�� ���� %d �Դϴ�.", evensum, oddsum);
    
}