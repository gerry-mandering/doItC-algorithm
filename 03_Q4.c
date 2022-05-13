///* Q4 2진 검색 (검색 과정 출력) */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 요소수 n인 배열 a에서 key와 일치하는 요소를 2진 검색 ---*/
//int bin_search(int *numArr, int n, int key);
//
//int main(void) {
//    int *numArr;
//    int size, key, index, i=0;
//
//    printf("<이진 검색>\n");
//    printf("요솟수를 입력하시오 : ");
//    scanf("%d", &size);
//
//    numArr = (int*)malloc(sizeof(int) * size);
//
//    printf("숫자를 오름차순으로 입력하시오.\n");
//    while (i < size) {
//        printf("numArr[%d] : ", i);
//        scanf("%d", &numArr[i]);
//        if (i>0) {
//            if (numArr[i] <= numArr[i-1]) {
//                printf("오름차순이 아닙니다. 다시 입력하십시오.\n");
//                continue;
//            }
//        }
//        i++;
//    }
//
//    printf("검색할 숫자를 입력하시오 : ");
//    scanf("%d", &key);
//
//    index = bin_search(numArr, size, key);
//    if (index == -1) {
//        printf("\n숫자 %d은(는) 존재하지 않습니다.\n", key);
//    } else {
//        printf("\n숫자 %d은(는) numArr[%d]에 있습니다.\n", key, index);
//    }
//
//    free(numArr);
//
//    return 0;
//}
//
//int bin_search(int *numArr, int n, int key) {
//    int middle, start=0, end=n-1, i;
//
//    printf("   |");
//    for (i=0; i<n; i++) {
//        printf("%4d", i);
//    }
//    printf("\n---+");
//    for (i=0; i<n; i++) {
//        printf("----");
//    }
//    printf("\n");
//
//    do {
//        middle = (end + start) / 2;
//
//        printf("   |");
//		for (i = 0; i < 4 * start; i++) printf(" ");
//		printf(" <-");
//		for (i = 0; i < 4 * (middle - start); i++) printf(" ");
//		printf("+");
//		for (i = 0; i < 4 * (end - middle) - 2; i++) printf(" ");
//		printf("->\n");
//
//		printf("%3d|", middle);
//		for (i = 0; i < n; i++)
//			printf("%4d", numArr[i]);
//		putchar('\n');
//
//        if (key > numArr[middle]) {
//            start = middle + 1;
//        } else if (key < numArr[middle]) {
//            end = middle - 1;
//        } else {
//            return middle;
//        }
//    } while (end >= start);
//
//    return -1;
//}