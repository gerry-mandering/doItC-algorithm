//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int size, i, j, min, temp=0;
//    double median;
//
//    printf("숫자를 얼마나 입력할지 입력하시오 : ");
//    scanf("%d", &size);
//
//    int* numArr = (int*)malloc(sizeof(int) * size);
//
//    for (i=0; i<size; i++) {
//        scanf("%d", &numArr[i]);
//    }
//
//    for (i=0; i<size; i++) {
//        min = numArr[i];
//        for (j=i+1; j<size; j++) {
//            if (numArr[j] < min) {
//                min = numArr[j];
//                temp = numArr[i];
//                numArr[i] = min;
//                numArr[j] = temp;
//            }
//        }
//    }
//
//    for (i=0; i<size; i++) {
//        printf("%d ", numArr[i]);
//    }
//
//    if (size % 2 == 0) {
//        median = ((double)numArr[size/2] + (double)numArr[size/2-1]) / 2;
//    } else {
//        median = numArr[size/2];
//    }
//
//    printf("중앙값은 %.2lf 입니다.\n", median);
//
//    return 0;
//}
