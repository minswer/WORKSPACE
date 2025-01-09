#include <stdio.h>


// Â¦¼ö ÇÕ, È¦¼ö ÇÕ °è»êÇÏÇÏ±â 
int main() {
    int evensum = 0;        //Â¦¼öÇÕ
    int oddsum = 0;         //È¦¼öÇÕ

    for (int i = 1; i <= 100; i++) {
        //È¦Â¦ ÆÇº° ÄÚµå
        if (i % 2 == 0) {
            evensum += i;
        } else {
            oddsum += i;
        }
    } 
    printf("Â¦¼ö ÇÕÀº %d, È¦¼ö ÇÕÀº %d", evensum, oddsum);
}