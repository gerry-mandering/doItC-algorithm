///*
//	Q4 배열 요소의 최댓값을 구합니다.
//	인원수를 난수로 생성하여 최댓값을 구합니다.
//    인원을 5 ~ 20 사이의 난수로 결정
//    키는 100 ~ 189 사이의 난수를 생성, 대입
//*/
//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 요솟수 n인 배열 a의 요소의 최댓값을 구합니다. ---*/
//int maxof(int *height, int size);
//
//int main(void) {
//    srand(time(NULL));
//    int count;
//
//    count = rand() % 16 + 5;
//    printf("%2d명의 키 표본을 생성합니다.\n\n", count);
//
//    int *height = (int*) malloc(sizeof(int) * count);
//
//    for (int i=0; i<count; i++) {
//        *(height + i) = rand() % 90 + 100;
//        printf("%2d번째 키 표본은 %dcm 입니다.\n", i+1, *(height + i));
//    }
//
//    printf("\n%2d명의 키 표본 중 최댓값은 %dcm 입니다.\n", count, maxof(height, count));
//    return 0;
//}
//
//int maxof(int *height, int size) {
//    int max;
//
//    max = *height;
//
//    for (int i=1; i<size; i++) {
//        if (*(height + i) > max) {
//            max = *(height + i);
//        }
//    }
//
//    return max;
//}
