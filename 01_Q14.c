///*정사각형 출력하기*/
///*줄 간격 최소로 줄일 것!!*/
//#include <stdio.h>
//
//int main(void) {
//    int size, i, j;
//
//    while (1) {
//        printf("정사각형의 크기를 입력하시오 : ");
//        scanf("%d", &size);
//        if (size<2) {
//            printf("\n크기가 너무 작습니다.\n다시 ");
//        } else {
//            break;
//        }
//    }
//
//
//    for (i=0; i<size; i++) {
//        if (i==0) {
//            printf("┏");
//        } else if (i==size-1) {
//            printf("┗");
//        } else {
//            printf("┃");
//        }
//        for (j=0; j<size-2; j++) {
//            if (i==0 || i==size-1) {
//                printf("━━");
//            } else {
//                printf("  ");
//            }
//        }
//        if (i==0) {
//            printf("┓");
//        } else if (i==size-1) {
//            printf("┛");
//        } else {
//            printf("┃");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}