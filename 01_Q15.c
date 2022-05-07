///*직사각형 출력하기*/
///*줄 간격 최소로 줄일 것!!*/
//#include <stdio.h>
//
//int main(void) {
//    int weight, height, i, j;
//
//    while (1) {
//        printf("직사각형의 너비와 높이를 입력하시오 : ");
//        scanf("%d %d", &weight, &height);
//        if (weight<2 || height<2) {
//            printf("\n크기가 너무 작습니다.\n다시 ");
//        } else {
//            break;
//        }
//    }
//
//
//    for (i=0; i<height; i++) {
//        if (i==0) {
//            printf("┏");
//        } else if (i==height-1) {
//            printf("┗");
//        } else {
//            printf("┃");
//        }
//        for (j=0; j<weight-2; j++) {
//            if (i==0 || i==height-1) {
//                printf("━━");
//            } else {
//                printf("  ");
//            }
//        }
//        if (i==0) {
//            printf("┓");
//        } else if (i==height-1) {
//            printf("┛");
//        } else {
//            printf("┃");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}