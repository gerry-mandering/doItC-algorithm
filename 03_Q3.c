///* 연습 3-3 배열에서 임의의 값과 일치하는 모든 요소의 인덱스를 추출 */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 배열 a에서 값이 key인 모든 요소의 인덱스를 idx에 저장 ---*/
//int search_idx(int *numArr, int n, int key, int *indexArr);
//
//int main(void) {
//    int *numArr, *indexArr;
//    int size, target, match;
//
//    printf("요솟수를 입력하시오 : ");
//    scanf("%d", &size);
//
//    numArr = (int*) malloc(sizeof(int) * size);
//    indexArr = (int*) malloc(sizeof(int) * size);
//
//    for (int i=0; i<size; i++) {
//        printf("%d번째 수를 입력하시오 : ", i+1);
//        scanf("%d", numArr+i);
//    }
//
//    printf("검색할 숫자 : ");
//    scanf("%d", &target);
//
//    match = search_idx(numArr, size, target, indexArr);
//
//    if (match == -1) {
//        printf("숫자 %d은(는) 존재하지 않습니다.\n", target);
//    } else {
//        printf("숫자 %d은(는)", target);
//        for (int i=0; i<match; i++) {;
//            printf(" numArr[%d]", indexArr[i]);
//            if (i < match-1) {
//                printf(",");
//            }
//        }
//        printf("에 있습니다.\n");
//    }
//    free(numArr);
//    free(indexArr);
//
//    return 0;
//}
//
//int search_idx(int *numArr, int n, int key, int *indexArr) {
//    int match=0, i;
//
//    for (i=0; i<n; i++) {
//        if (numArr[i] == key) {
//            *(indexArr + match) = i;
//            match++;
//        }
//    }
//
//    if (match == 0) {
//        return -1;
//    } else {
//        return match;
//    }
//}