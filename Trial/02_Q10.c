///* Q10 배열의 모든 요소의 순서를 뒤섞습니다. */
//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- type 형의 x와 y의 값을 교환 ---*/
//#define swap(type, x, y) do {type temp = x; x = y; y = temp;} while (0)
//
///*--- 요솟수 n인 배열 a의 모든 요소의 순서를 셔플 ---*/
//void shuffle(int* numArr, int size);
//
//int main(void) {
//    int size;
//    int *numArr;
//
//    printf("요솟수를 입력하시오 : ");
//    scanf("%d", &size);
//
//    numArr = (int*)calloc(size, sizeof(int));
//
//    for (int i=0; i<size; i++) {
//        printf("%d번째 수를 입력하시오 : ", i+1);
//        scanf("%d", numArr+i);
//    }
//
//    shuffle(numArr, size);
//
//    for (int i=0; i<size; i++) {
//        printf("%d ", numArr[i]);
//    }
//
//    return 0;
//}
//
//void shuffle(int* numArr, int size) {
//    srand(time(NULL));
//    int x, y;
//
//    for (int i=0; i<size; i++) {
//        x = rand() % size;
//        y = rand() % size;
//        if (x == y) {
//            continue;
//        } else {
//            swap(int, numArr[x], numArr[y]);
//        }
//    }
//}