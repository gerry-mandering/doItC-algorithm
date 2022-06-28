///* Q5 배열의 요소를 역순으로 정렬합니다. */
///*
//	!편집자주
//	'정렬'이라는 말 때문에 내림차순이 오름차순으로 정렬(또는 반대로)된다고 생각하면 안 됩니다.
//	이 문제는 주어진 배열의 요소를 앞뒤로 뒤집는 것입니다.
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 요솟수 n인 배열 a의 요소를 차례로 출력 ---*/
//void ary_print(int* numArr, int size);
//
///*--- 요솟수 n인 배열 a의 요소를 역순으로 정렬 ---*/
//void ary_reverse(int* numArr, int size);
//
//int main(void) {
//    int size;
//
//    printf("숫자를 얼마나 입력할지 입력하시오 : ");
//    scanf("%d", &size);
//
//    int *numArr = (int*) malloc(sizeof(int) * size);
//
//    for (int i=0; i<size; i++) {
//        printf("%d번째 숫자를 입력하시오 :", i+1);
//        scanf("%d", numArr+i);
//    }
//
//    ary_reverse(numArr, size);
//    ary_print(numArr, size);
//
//    return 0;
//}
//
//void ary_reverse(int* numArr, int size) {
//    int temp=0;
//
//    for (int i=0; i<size/2; i++) {
//        temp = numArr[i];
//        numArr[i] = numArr[size-1-i];
//        numArr[size-1-i] = temp;
//    }
//}
//
//void ary_print(int* numArr, int size) {
//    for (int i=0; i<size; i++) {
//        printf("%d ", *(numArr+i));
//    }
//    putchar('\n');
//}