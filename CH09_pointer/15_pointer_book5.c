#include <stdio.h>  // 표준 입출력 함수 사용을 위한 헤더 파일

// ary_set 함수 정의
// v: 배열을 나타내는 포인터, n: 배열의 크기, val: 배열의 요소를 설정할 값
void ary_set(int v[], int n, int val) {
    int i;

    // 배열 v의 앞에서부터 n개의 원소를 val 값으로 설정
    for (i = 0; i < n; i++) 
        v[i] = val;  // v[i]에 val을 대입
}

int main() {
    int i;
    // 정수형 배열 a 초기화 (1, 2, 3, 4, 5)
    int a[] = { 1, 2, 3, 4, 5 };

    // ary_set 함수를 호출하여 a 배열의 세 번째 원소부터 두 개의 값을 99로 설정
    ary_set(&a[2], 2, 99);

    // 배열 a의 모든 원소를 출력
    for (i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, a[i]);  // 배열 a의 각 원소와 그 인덱스를 출력

    return 0;
}
