#include <stdio.h>
// 문자열 배열과 포인터

int main(){

    char *a = "qwer";
    char *b = "qwtety";
    int i, j;

    for(int i = 0; a[i] != '\0' ; i++){             // i는 총 4번 반복함(0, 1, 2, 3)
        for(int j = 0; b[j] != '\0'; j++){          // j는 총 6번 반복함(0, 1, 2, 3, 4, 5)
            if(a[i] == b[j]) printf("%c", a[i]);    // 정답: qwe  // if 문을 한 문장으로 쓸땐 중괄호 사용 안해도 됌됌 
        }
    }
}