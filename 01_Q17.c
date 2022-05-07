///* Q17 특수문자 '*'로 피라미드를 출력 */
//#include <stdio.h>
//
///*--- 특수문자 '*'로 피라미드를 출력 ---*/
//void pyramid(int n);
//
//int main(void) {
//    int n;
//
//    do {
//        printf("피라미드의 높이를 입력하시오 : ");
//        scanf("%d", &n);
//    } while (n<2);
//
//	printf("\n<피라미드>\n"); pyramid(n);
//}
//
//void pyramid(int n) {
//    for (int i=0; i<n; i++) {
//        for (int j=0; j<n-i-1; j++) {
//            printf(" ");
//        }
//        for (int k=0; k<i*2+1; k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//}