///* Q11 한 해의 지난 날의 수를 구합니다. */
//#include <stdio.h>
//
///*--- year 연도는 윤년인지 알아보는 함수 ---*/
//int isLeapYear(int year);
//
///*--- y년 m월 d일의 그 해의 지난 날의 수를 구합니다. ---*/
//int dayofyear(int y, int m, int d);
//
//int main(void) {
//    int year, month, date;
//
//    while (1) {
//        printf("년도 : ");
//        scanf("%d", &year);
//        printf("월 : ");
//        scanf("%d", &month);
//        printf("일 : ");
//        scanf("%d", &date);
//
//        printf("%d년 %d월 %d일은 %d년이 시작되고 %d일이 지난 날입니다.\n", year, month, date, year, dayofyear(year, month, date));
//        return 0;
//    }
//}
//
//int isLeapYear(int year) {
//    if (year % 4 ==0 && year % 100 != 0 || year % 400 == 0) {
//        return 1;
//    } else {
//        return 0;
//    }
//}
//
//int dayofyear(int y, int m, int d) {
//    int leapYearDays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    int yearDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    int days=0;
//
//    if (isLeapYear(y)) {
//        for (int i=0; i<m-1; i++) {
//            days += leapYearDays[i];
//        }
//    } else {
//        for (int i=0; i<m-1; i++) {
//            days += yearDays[i];
//        }
//    }
//
//    days += d;
//
//    return days;
//}
