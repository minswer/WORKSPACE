#include <stdio.h>  // 표준 입출력 헤더 파일을 포함합니다. printf 함수 등을 사용하기 위해 필요합니다.

void set_idx(int *v, int n) {
    // set_idx 함수: 배열 v의 원소를 0부터 n-1까지의 값으로 설정합니다.
    int i;

    // 배열 v의 각 원소에 0부터 n-1까지 값을 설정
    for (i = 0; i < n; i++) {
        v[i] = i;  // v[i]에 i 값을 저장합니다.
    }
}

int main() {
    int i;
    int a[5];  // 크기가 5인 정수형 배열 a 선언

    // set_idx 함수 호출. a 배열을 초기화
    set_idx(a, 5);  

    // a 배열의 각 원소를 출력
    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);  
    }
}
