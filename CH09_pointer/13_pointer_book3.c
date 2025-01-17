// 세 정수를 입력 받아 오름차순 정렬하는 프로그램

#include <stdio.h>  // 표준 입출력 함수를 사용하기 위해 stdio.h 헤더 파일을 포함

// 두 정수 값을 서로 교환하는 함수
void swap(int* px, int* py) {
    int temp = *px;   // px가 가리키는 값(*px)을 임시 변수 temp에 저장
    *px = *py;        // py가 가리키는 값(*py)을 px가 가리키는 위치에 저장
    *py = temp;       // 임시 변수 temp에 저장된 값을 py가 가리키는 위치에 저장
}

// 세 개의 정수를 오름차순으로 정렬하는 함수
void sort3(int* n1, int* n2, int* n3) {
    // 첫 번째와 두 번째 값을 비교하고, 필요시 교환
    if (*n1 > *n2) swap(n1, n2);
    // 두 번째와 세 번째 값을 비교하고, 필요시 교환
    if (*n2 > *n3) swap(n2, n3);
    // 두 번째와 세 번째 값을 다시 비교하고, 필요시 교환
    if (*n2 > *n3) swap(n2, n3);
}

int main() {
    int na, nb, nc;  // 세 개의 정수를 저장할 변수 na, nb, nc 선언

    puts("3개의 정수를 입력하시오: ");  // 사용자에게 정수 3개를 입력하라는 메시지 출력
    printf("정수a : "); scanf("%d", &na);  // 첫 번째 정수 입력받아 na에 저장
    printf("정수b : "); scanf("%d", &nb);  // 두 번째 정수 입력받아 nb에 저장
    printf("정수c : "); scanf("%d", &nc);  // 세 번째 정수 입력받아 nc에 저장

    sort3(&na, &nb, &nc);  // 입력받은 세 정수를 오름차순으로 정렬하는 함수 호출

    puts("오름 차순 정렬.");  // 정렬 후 메시지 출력
    printf("정수a는 %d입니다.\n", na);  // 정렬된 첫 번째 정수 출력
    printf("정수b는 %d입니다.\n", nb);  // 정렬된 두 번째 정수 출력
    printf("정수c는 %d입니다.\n", nc);  // 정렬된 세 번째 정수 출력
}
