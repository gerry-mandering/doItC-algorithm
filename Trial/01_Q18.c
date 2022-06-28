///* Q18 숫자 문자를 정렬하여 역방향 피라미드를 출력 */
//#include <stdio.h>
//
///*--- 숫자 문자를 정렬하여 역방향 피라미드를 출력 ---*/
//void reverse_pyramid(int n);
//
//int main(void) {
//    int n;
//
//    do {
//        printf("피라미드의 높이를 입력하시오 : ");
//        scanf("%d", &n);
//    } while (n<2);
//
//	printf("\n<피라미드>\n"); reverse_pyramid(n);
//}
//
//void reverse_pyramid(int n) {
//    for (int i=0; i<n; i++) {
//        for (int j=0; j<i; j++) {
//            printf(" ");
//        }
//        for (int k=0; k<(n-i)*2-1; k++) {
//            printf("%d", i+1);
//        }
//        printf("\n");
//    }
//}