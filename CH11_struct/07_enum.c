#include <stdio.h>

/*
    * ������(enum)

    - ������ ������ ����� �� �ִ� ���� �̸� �����صΰ� ����ϴ� ���
    ex. season {spring, summer, fall, winter};
    - Ÿ�� �������� ���� �� ���� -> ��ȿ�� üũ���� �ʿ䰡 ������
    - �������� ���� �� ���� -> 0�� 1 ���� ǥ���� �ƴ� ���ڿ��� ǥ���ϱ� ����
    - ���� ������ ������ -> ���� �� �������� �����ϸ�, �������� ������ �ʿ� ����
*/

enum season {Spring, Summer, Fall, Winter};

int main() {
    enum season ss;
    char *pc = NULL;


    ss = Spring;
    switch(ss) {
        case Spring: 
            pc = "inline";
            break;
        
        case Summer: 
            pc = "swimming";
            break;
        
        case Fall: 
            pc = "trip";
            break;
        
        case Winter: 
            pc = "skiing";
            break;
        }

printf("���� ����Ȱ��: %s\n", pc);
}