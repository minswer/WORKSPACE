/*
    *문자를 저장하는 배열

    -> c언어는 문자열형(string)이 존재하지 않음
    -> 그래서 char 배열을 이용하여 저장함
    -> char 배열은 문자열 길이보다 +1 더 크게 만들기
    -> 마지막에 문자열의 끝이라는 null(\0) 문자 저장
    -> 배열은 값이 비면 0으로 초기화함(0이 ASCII 코드로 표현하면 \0)

    * char 배열은 선언시 초기화하면 남은 배열 요소를 0으로 채우고, 자동으로 문자열 끝에 \0 문자 저장
    ex. char name[4] = 'ABC'
    


        -> 1. 선언과 초기화를 동시에 하는 경우 -> 마지막 \0 문자는 자동으로 생김김    

    char name[4];
    name [0] = "A";
    name [1] = "B";
    name [2] = "C";
    name [3] = "\0"
        -> 2. 선언과 초기화를 따로 하는 경우(마지막 \0 문자는 직접 입력해야함함)


    */

   #include <stdio.h>

   int main() {
        char fruit [6] = "apple";
        char fruit [6] = {'a', 'b', 'c', 'd', 'e'};         //가능은 하지만 비추추

        char fruit [6];
        fruit [0] = 'a';
        fruit [1] = 'p';
        fruit [2] = 'p';
        fruit [3] = 'l';
        fruit [4] = 'e';
        fruit [5] = '\0';
    }