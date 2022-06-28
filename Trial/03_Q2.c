///* Q2 선형 검색(검색 과정 출력) */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 요솟수 n인 배열 a에서 key와 일치하는 요소를 선형 검색 ---*/
//int search(int *numArr, int n, int key);
//
//int main(void) {
//    int *numArr;
//    int size, target, index;
//
//    printf("<선형 검색>\n");
//    printf("요솟수를 입력하시오 : ");
//    scanf("%d", &size);
//
//    numArr = (int*) malloc(sizeof(int) * size);
//
//    for (int i=0; i<size; i++) {
//        printf("numArr[%d] : ", i);
//        scanf("%d", numArr+i);
//    }
//
//    printf("검색할 숫자를 입력하시오 : ");
//    scanf("%d", &target);
//
//    index = search(numArr, size, target);
//
//    if (index != -1) {
//        printf("\n%d는 numArr[%d]에 있습니다.\n", target, index);
//    } else {
//        printf("\n%d는 numArr에 없습니다.\n", target);
//    }
//
//    free(numArr);
//
//    return 0;
//}
//
//int search(int *numArr, int n, int key) {
//    printf("   |");
//    for (int i=0; i<n; i++) {
//        printf("%3d", i);
//    }
//    printf("\n---+");
//    for (int i=0; i<n; i++) {
//        printf("---");
//    }
//    printf("\n");
//
//    for (int i=0; i<n; i++) {
//        printf("   |");
//        for (int j=0; j<=i; j++) {
//            if (j == i) {
//                printf("  *\n");
//            } else {
//                printf("   ");
//            }
//        }
//        printf("%3d|", i);
//        for (int k=0; k<n; k++) {
//            printf("%3d", numArr[k]);
//        }
//        printf("\n");
//        if (numArr[i] == key) {
//            return i;
//        }
//    }
//
//    return -1;
//}