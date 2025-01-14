#include <stdio.h>
#include <string.h>     // 문자열을 다룰 수 있음

/*
    * char : 문자형(ex. 'A')
    * Stirng : 문자열형형(ex. "ABC")
    * c 언어는 절차지향 언어이기에 문자열 형의 존재가 없음.(그러나 JAVA, Python에는 존재함 - 객체지향 언어이기 때문.)
    * c 언어는 배열과 char 형을 같이 사용하면 구현 가능
    * 
    * 기본 문법 : char 배열명[문자열 길이 + 1] = 문자열; => 엄연히 따지면 문자열형이라는 건 없기에 직접 만듦.
    * ex. char abc[4] = "ABC"
    * [문자열 길이 + 1] 의 이유는 문자열 끝에 '\0'이 자동으로 추가되기 때문.
    ** 여기서 배열이란 기본 자료형을 여러개 묶어서 사용하는 것것
*/


int main() {
    char arr_fruit[20] = "strawberry";      
    // char 배열 선언 및 문자열 초기화(지정)

    printf("딸기: %s\n", arr_fruit);
    // int 형과는 달리 char 형은 '%s'
    // fruit에 대한 배열을 선언했기에 arr_fruit
    // 배열은 선언된 이후에 대입 연산자로 값 입력 불가,
    // strcpy() 함수 사용하면 가능 => 문자열 복사의 기능(string copy)
    // ex. 위 코드에 arr fruit = "apple";   strcpy(arr_fruit ,"apple");   printf("사과: %s\n", arr_fruit); 이렇게 짜면 가능

}