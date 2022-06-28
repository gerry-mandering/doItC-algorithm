///* Q9 정수 a, b를 포함한 그 사이의 모든 정수의 합을 구합니다. */
//#include <stdio.h>
//
//int sum(int a, int b);
//
//int main(void) {
//    int a, b;
//
//    printf("숫자 a 와 b를 입력하시오 : ");
//    scanf("%d %d", &a, &b);
//
//    printf("%d와 %d를 포함한 그 사이의 모든 정수 합은 %d입니다.\n", a, b, sum(a, b));
//    return 0;
//}
//
//int sum(int a, int b) {
//    int i, sum=0;
//
//    for (i=a > b ? b : a; i<=(a > b ? a : b); i++) {
//        sum += i;
//    }
//
//    return sum;
//}