#include <stdio.h>
/*
    BMI ��� ���α׷�
    1, Ű�� ������ �Է� �ޱ�
    2. BMI ��� �ۼ�(������ / Ű(m)^2)
    3. ���(18.5 �̸�, 18.5~23�̸�, 23~26�̸�, 26~30�̸�, 30)

    �ٽ� ���� : �⸻��� ���� ���� ���ɼ���
*/
int main() {
    int height, weight;

    printf("Ű(cm)�� �Է��ϼ���: ");
    scanf("%d", &height);

    printf("�����Ը� �Է��ϼ���: ");
    scanf("%d", &weight);

// Ű�� cm������ �Է¹ޱ⿡ m������ ó�� �� BMI�� �Ҽ��� ��° �ڸ����� ó��.
// (m ������ Ű�� BMI ������ �Ҽ��̱⿡ int �������� �ƴ� double �Ҽ����� �������)
    double height_m = (double)height / 100;
    double BMI = weight / (height_m * height_m);
    printf("BMI�� %.2lf\n�Դϴ�.", BMI);

    if (BMI < 18.5) {
        printf("��ü���Դϴ�.");
    } else if(BMI >= 18.5 && BMI < 23) {
        printf("���� ü���Դϴ�.");
    } else if (BMI >= 23 && BMI < 26) {
        printf("�������Դϴ�.");
    } else if (BMI >= 26 && BMI < 30) {
        printf("���Դϴ�.");
    } else {
        printf("�����Դϴ�.");
    }

}

/* #include <string.h> �� Ȱ���Ͽ� BMI ����� ���ڿ��� ����ϰ� ������ ������ ���α׷�(�����)

#include <stdio.h>
#include <string.h>

    int main() {
    int height, weight;
    char result[20]; 
    // BMI ����� ������ ���ڿ�(BMI ����� ���ڿ��� ����ϱ� ������)

    printf("Ű(cm)�� �Է��ϼ���: ");
    scanf("%d", &height);

    printf("�����Ը� �Է��ϼ���: ");
    scanf("%d", &weight);

    double height_m = (double)height / 100;
    double BMI = weight / (height_m * height_m);

    if (BMI < 18.5) {
        strcpy(result, "��ü���Դϴ�."); // ���ڿ� ����(strcpy ����)
    } else if (BMI >= 18.5 && BMI < 23) {
        strcpy(result, "���� ü���Դϴ�.");
    } else if (BMI >= 23 && BMI < 26) {
        strcpy(result, "��ü���Դϴ�.");
    } else if (BMI >= 26 && BMI < 30) {
        strcpy(result, "���Դϴ�.");
    } else {
        strcpy(result, "�����Դϴ�.");
    }

    printf("����� BMI�� %.2lf�Դϴ�. %s\n", BMI, result);

    return 0;
}



*/