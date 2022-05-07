///* Q16 직각이등변삼각형 출력 */
//#include <stdio.h>
//
///*--- 직각이 왼쪽 아래인 경우 ---*/
//void triangleLB(int n);
///*---  직각이 왼쪽 위인 경우 ---*/
//void triangleLU(int n);
///*--- 직각이 오른쪽 위인 경우 ---*/
//void triangleRU(int n);
///*--- 직각이 오른쪽 아래인 경우 ---*/
//void triangleRB(int n);
//
//int main(void) {
//    int n;
//
//    do {
//        printf("직각삼각형의 크기를 입력하시오 : ");
//        scanf("%d", &n);
//    } while (n<2);
//
//	printf("\n<왼쪽   아래가 직각>\n"); triangleLB(n);
//	printf("\n<왼쪽   위가   직각>\n"); triangleLU(n);
//	printf("\n<오른쪽 위가   직각>\n"); triangleRU(n);
//	printf("\n<오른쪽 아래가 직각>\n"); triangleRB(n);
//
//    return 0;
//}
//
//void triangleLB(int n) {
//    for (int i=0; i<n; i++) {
//        for (int j=0; j<=i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//}
//
//void triangleLU(int n) {
//    for (int i=0; i<n; i++) {
//        for (int j=0; j<4-i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//}
//
//void triangleRU(int n) {
//    for (int i=0; i<n; i++) {
//        for (int j=0; j<n; j++) {
//            if (j < i) {
//                printf(" ");
//            } else {
//                printf("*");
//            }
//        }
//        printf("\n");
//    }
//}
//
//void triangleRB(int n) {
//    for (int i=0; i<n; i++) {
//        for (int j=0; j<n; j++) {
//            if (j < 3-i) {
//                printf(" ");
//            } else {
//                printf("*");
//            }
//        }
//        printf("\n");
//    }
//}