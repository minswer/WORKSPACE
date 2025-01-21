#include <stdio.h>

// 

int main() {
    char a[] = "Art";
    char *p = NULL;
    p = a;
    int i = 0;

    printf("%s\n", a);   // Art
    printf("%c\n", *p);  // A
    printf("%c\n", *a);  // A
    printf("%s\n", p);   // Art 

    for(int i=0; a[i] != '\0'; i++)         // 배열 속 문자가 NULL 문자가 아닐 때까지 출력하시오.
        printf("%c", a[i]);
}