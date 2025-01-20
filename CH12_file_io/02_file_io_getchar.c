#include <stdio.h>

/*
    scanf() 와 getchar()의 차이점

    -1. scanf
        - 형식화된 입력을 처리하기 위해 사용함
        - 형식 지정자(%d, %lf ...)를 통해 입력 형식 지정함
        - 공백을 무시하며 데이터를 토큰(문자 하나가 아님) 단위로 읽음
        - 여러 값을 한번에 입력 가능함
        - 

    -2. getchar()
        - 사용자 입력을 한 문자씩 읽음
        - 공백과 개행 문자를 포함한 모든 입력을 읽음
        - 버퍼에서 입력을 한 글자씩 처리하기 때문에 간단한 입력 작업에 적합함
        - 많은 데이터를 입력받는데 부적합함
        - 
*/
int main() {
    int ch;

    while (1) {
        ch = getchar();

        // ctrl + z = EOF(Windows)
        if (ch == EOF) {
            break;
        }
        putchar(ch);
    }
}