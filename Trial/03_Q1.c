///* Q1 선형 검색(보초법) */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 요솟수 n인 배열 a에서 key와 일치하는 요소를 선형 검색 (보초법) ---*/
//int search(int *numArr, int n, int key);
//
//int main(void) {
//    int *numArr;
//    int size, target, index;
//
//    printf("요솟수를 입력하시오 : ");
//    scanf("%d", &size);
//
//    numArr = (int*) malloc(sizeof(int) * size);
//
//    for (int i=0; i<size; i++) {
//        printf("%d번째 수를 입력하시오 : ", i+1);
//        scanf("%d", numArr+i);
//    }
//
//    printf("검색할 숫자 : ");
//    scanf("%d", &target);
//
//    index = search(numArr, size, target);
//
//    if (index == -1) {
//        printf("해당 숫자가 존재하지 않습니다.\n");
//    } else {
//        printf("해당 숫자는 배열의 %d번째 숫자입니다.\n", index+1);
//    }
//    free(numArr);
//
//    return 0;
//}
//
//int search(int *numArr, int n, int key) {
//    for (int i=0; i<n; i++) {
//        if (numArr[i] == key) {
//            return i;
//        }
//    }
//    return -1;
//}