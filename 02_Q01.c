///* Q1 배열 요소의 최솟값을 구합니다. */
//#include <stdio.h>
//#include <stdlib.h>
//
///* --- 요솟수 n인 배열 a 요소의 최솟값을 구합니다. --- */
//int min(int* height, int size);
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
//    printf("가장 작은 키는 %dcm 입니다.\n", min(height, count));
//    return 0;
//}
//
//int min(int* height, int size) {
//    int min;
//
//    min = *height;
//
//    for (int i = 1; i < size; ++i) {
//        if (*(height+i) < min) {
//            min = *(height+i);
//        }
//    }
//
//    return min;
//}
//
