///* Q2 배열 요소의 합계를 구합니다. */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 요솟수 n인 배열 a의 요소의 합계를 구합니다. ---*/
//int sumof(int *height, int size);
//
//int main(void) {
//    int count;
//
//    printf("몇 명인지 입력하시오 : ");
//    scanf("%d", &count);
//
//    int* height = (int*) malloc(sizeof(int) * count);
//
//    for (int i = 0; i < count; ++i) {
//        printf("%d번 사람의 키를 입력하시오(cm) : ", i+1);
//        scanf("%d", height+i);
//    }
//
//    printf("입력된 키의 총 합은 %dcm 입니다.\n", sumof(height, count));
//    return 0;
//}
//
//int sumof(int *height, int size) {
//    int sum=0;
//
//    for (int i=0; i<size; i++) {
//        sum += *(height+i);
//    }
//
//    return sum;
//}
//
