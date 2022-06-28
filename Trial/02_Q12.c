///* Q12 신체 검사 데이터용 구조체 배열(시력 분포를 그래프 모양으로 출력) */
//#include <stdio.h>
//#include <stdlib.h>
//
///* 시력 최댓값 2.1 × 10 */
//#define VMAX 21
//
///*--- 신체 검사 데이터 ---*/
//typedef struct {
//	char name[20];		/* 이름 */
//	int height;			/*  키  */
//	double vision;		/* 시력 */
//} PhysCheck;
//
///*--- 키의 평균을 구합니다. ---*/
//double ave_height(PhysCheck dat[], int n);
//
///*--- 시력의 분포를 구합니다. ---*/
//void dist_vision(PhysCheck dat[], int n);
//
//int main(void) {
//    PhysCheck x[] = {
//		{ "박현규", 162, 0.3 },
//		{ "함진아", 173, 0.7 },
//		{ "최윤미", 175, 2.0 },
//		{ "홍연의", 171, 1.5 },
//		{ "이수진", 168, 0.4 },
//		{ "김영준", 174, 1.2 },
//		{ "박용규", 169, 0.0 }
//	};
//
//    int size = sizeof(x) / sizeof(x[0]);
//
//    printf(" ■ □ ■ 신체 검사 목록 ■ □ ■\n");
//	printf("이름                키   시력\n");
//	printf("-----------------------------\n");
//
//    for (int i=0; i<size; i++) {
//        printf("%-23s%-4d%5.1lf\n", x[i].name, x[i].height, x[i].vision);
//    }
//
//    printf("\n평균 키 : %3.2lf\n", ave_height(x, size));
//
//    printf("■ □ ■ 시력 분포 ■ □ ■\n");
//    dist_vision(x, size);
//
//    return 0;
//}
//
//double ave_height(PhysCheck dat[], int n) {
//    double sum=0;
//
//    for (int i=0; i<n; i++) {
//        sum += dat[i].height;
//    }
//
//    return sum / n;
//}
//
//void dist_vision(PhysCheck dat[], int n) {
//    int *distribution = (int*)calloc(VMAX, sizeof(int));
//    int amount=0;
//
//    for (int i=0; i<n; i++) {
//        amount = (int)(dat[i].vision * 10);
//        distribution[amount]++;
//    }
//
//    for (int i=0; i<n; i++) {
//        printf("%d | ", n-i);
//        for (int j=0; j<VMAX; j++) {
//            if (distribution[j] >= n-i) {
//                printf(" *\t");
//            } else {
//                printf("\t");
//            }
//        }
//        printf("\n");
//    }
//
//    printf("-------------------------------------------------------------------------------------------\n");
//    printf("    ");
//    for (int i=0; i<=VMAX; i++) {
//        printf("%.1lf\t", (double)i/10);
//    }
//
//    free(distribution);
//}