///* Q3 배열 요소의 평균값 */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 요솟수 n인 배열 a의 요소의 평균을 ---*/
//double averageOf(int *height, int size);
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
//    printf("입력된 키의 평균은 %.2lfcm 입니다.\n", averageOf(height, count));
//    return 0;
//}
//
//double averageOf(int *height, int size) {
//    double average, sum=0;
//
//    for (int i=0; i<size; i++) {
//        sum += *(height+i);
//    }
//    average = sum / size;
//    return average;
//}