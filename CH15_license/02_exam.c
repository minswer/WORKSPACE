#include <stdio.h>

void main(){
	int i=0, c=0;			// i 와 c의 초기값 = 0
	
    while (i<10){			// for (int i=0; i<10; i++) { c = c*i; }의 구조와 같음음
		i++;				// 실행한 후 초기값에 1씩 더함 => 0부터 9까지
		c *= i;				// c = c*i	-> c = 0 	-> c*i = 0
    }

	printf("%d",c);			// 정답 : 0
}