#include <stdio.h>

int main(){
    int arr[3];          // 
    int s = 0;          
    *(arr+0)=1;         // arr[0] == 1

    arr[1] = *(arr+0)+2;            // arr[1] == 3
    arr[2] = *arr+3;                // arr[2] == 4

    for(int i=0; i<3; i++){
        s=s+arr[i];                 // arr[0]부터 arr[2]까지의 값을 더하세요 => 초기 s값은 0이기에에
    }

    printf("%d",s);  // 1 + 3 + 4 = 8
}