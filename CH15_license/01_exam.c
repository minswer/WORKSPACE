#include <stdio.h>

void main()
{
    // 임의로 주소를 할당했다고 치면 훨씬 편함
    // ex. p -> 101번지
    // "KOREA" -> 101번지지
    // p+1 = 주소 연산  => char = 1byte => 여기서 +1 = +1byte
	char *p = "KOREA";
    printf("%s\n" , p);        // KOREA -> 101번지부터
    printf("%s\n" , p+3);      // EA    -> 101+3 번지 부터
    printf("%c\n" , *p);       // K     -> 간접 참조 : 101번지 값
    printf("%c\n" , *(p+3));   // E     -> 간접 참조 : 101+3 번지 값값
}