// ���� ���� ���α׷�
// 3������ ������ �Է� �ް�, �̸� �迭�� ������
// ������ ����� ����Ͽ� �����

#include <stdio.h>

int main() {
    char name[20];      //�̸���
    int score[3];       // ����
    int total = 0;      // ���� = 0
    double avg;         // ���(�Ҽ���)

    // 1. �Էº�
    printf("�̸�: ");
    scanf("%s", &name);

    // 2. 3���� ���� ���� �Է¹��� -> 3�� �ݺ�
    for (int i=0; i<3; i++) {      // i(0~2 : �迭 �ε�����ŭ)
        printf("����: ");
        scanf("%d", &score[i]);     // ������ �Է¹޾� score �迭�� ������
    }

    // 3. ����
    for (int i=0; i<3; i++) {
        total += score[i];
    }

    avg = total/3.0;

    printf("%s ���� ������ %d, ����� %.2lf�Դϴ�", name, total, avg);

}