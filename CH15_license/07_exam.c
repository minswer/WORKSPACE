#include <stdio.h>


int mp(int base, int exp) {             // mp함수 선언 = base와 exp 변수 선언
    int res = 1;                        // res 변수 초기화 = 1
    for(int i=0; i < exp; i++){         // i = 0; i는 실행 후 1씩 증가 // i는 9까지 반복
        res = res * base;               // res = 1*base => 2 * 2 => 4 * 2 => 16 ....... => 1024
    }

    return res;                         //
}

int main(){
    int res;
    res = mp(2,10);                     // base = 2 / exp = 10
    printf("%d",res);                  // 1024          
    return 0;
}

