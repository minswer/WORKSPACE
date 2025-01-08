/* 
 switch - case - default

 -여려개의 상수 중 조건에 맞는 상수를 선택하여 실행함
 -
 - 규칙
   -1 조건식은 정수식만 사용
   -2. 기본적으로 case 는 break 문과 함께 사용
   -3. break 는 경우엔 break를 만나기 전까지 모든 case가 실행됨
   -4. default는 조건에 해당하는 case가 없는 경우 실행(약간 else와 비슷함)
   -5. default는 생략가능 + 위치는 상관없으나, 대부분 맨 하단에 위치함.
   -6. if문보다 실행 속도가 훨씬 빠름.
*/

int main() {
    int rank = 2, m = 0;

    switch(rank) {
        case 1:
            m = 100;
            break;
        case 2:
            m = 200;
            break;
        case 3:
            m = 300;
            break;
        default:        //만족하는 case가 없는 경우 실행됨.
            m = 999;
            break;

    }
}
 
