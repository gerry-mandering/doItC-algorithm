///* Q13 다양한 조건의 날짜 계산  */
//#include <stdio.h>
//
//typedef struct {
//	int y; /* 년  */
//	int m; /* 월 (1 ~ 12) */
//	int d; /* 일 (1 ~ 31) */
//} Date;
//
///*--- 날짜 x의 n 일 뒤의 날짜를 반환 ---*/
//Date After(Date x, int n);
///*--- 날짜 x의 n일 앞의 날짜를 반환 ---*/
//Date Before(Date x, int n);
//
///*--- year년이 윤년인지 검사하는 함수 ---*/
//int isleap(int year);
//
///*--- y년 m월 d일을 나타내는 구조체를 반환하는 함수 DateOf ---*/
//Date DateOf(int y, int m, int d);
//
///*--- 날짜를 출력합니다. ---*/
//void Print(Date x);
//
//int main(void) {
//    int year, month, date, amount;
//    Date input;
//
//    printf("년도를 입력하시오 : ");
//    scanf("%d", &year);
//    printf("월을 입력하시오 : ");
//    scanf("%d", &month);
//    printf("일을 입력하시오 : ");
//    scanf("%d", &date);
//
//    input = DateOf(year, month, date);
//
//    printf("며칠 앞 / 뒤의 날짜를 구할까요? : ");
//	scanf("%d", &amount);
//
//    printf("%d년 %d월 %d일로부터 %d일 앞은 ", input.y, input.m, input.d, amount);
//    Print(Before(input, amount));
//    printf("%d년 %d월 %d일로부터 %d일 뒤는 ", input.y, input.m, input.d, amount);
//    Print(After(input, amount));
//
//    return 0;
//}
//
//
//Date After(Date x, int n) {
//    int leapYearDays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    int yearDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//    for (int i=0; i<n; i++) {
//        x.d++;
//        if (isleap(x.y)) {
//            if (x.d > leapYearDays[x.m]) {
//                x.d = 1;
//                if (x.m == 12) {
//                    x.m = 1;
//                    x.y++;
//                } else {
//                    x.m++;
//                }
//            }
//        } else {
//            if (x.d > yearDays[x.m]) {
//                x.d = 1;
//                if (x.m == 12) {
//                    x.m = 1;
//                    x.y++;
//                } else {
//                    x.m++;
//                }
//            }
//        }
//    }
//
//    return x;
//}
//
//Date Before(Date x, int n) {
//    int leapYearDays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    int yearDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//    for (int i=0; i<n; i++) {
//        x.d--;
//        if (x.d == 0) {
//            x.m--;
//            if (x.m == 0) {
//                x.m = 12;
//                x.y--;
//            }
//            if (isleap(x.y)) {
//                x.d = leapYearDays[x.m-1];
//            } else {
//                x.d = yearDays[x.m-1];
//            }
//        }
//    }
//
//    return x;
//}
//
//int isleap(int year) {
//    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//        return 1;
//    } else {
//        return 0;
//    }
//}
//
//Date DateOf(int y, int m, int d) {
//    Date input;
//
//    input.y = y;
//    input.m = m;
//    input.d = d;
//
//    return input;
//}
//
//void Print(Date x) {
//    printf("%d년 %d월 %d일 입니다.\n", x.y, x.m, x.d);
//}