#include <stdio.h>

int main() {
    // �Է�: scanf => gets -> ���ڿ� �Է�
    // ���: printf => puts -> ���ڿ� ���

    char name[20];
    printf("�̸�: ");
    gets(name);     // ��ĭ�� �����ϴ� ���ڿ� �Է� ����
    puts("�Էµ� ���ڿ�: ");
    puts(name);     // �ڵ����� + "\n" ���Ե� + ���ڿ��� ��� ���ɴ�
}