/*
	<실행결과>
	년 : 2017
	월 : 4
	일 : 15
	2017년의 105일째 입니다.
	다시 할까요?(1 == 예 / 0 == 아니오) : 0
*/

#include <stdio.h>

int mdays[][12] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30 ,31, 30, 31},
	{31, 29, 31 ,30, 31, 30, 31, 31,30, 31, 30 , 31}
};

int is_leap(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int dayofyear(int y, int m, int d)
{
	int days = d;

	for (int i = 1; i < m; i++)
	{
		days += mdays[is_leap(y)][i - 1];
	}

	return (days);
}

int main(void)
{
	int year, month, day;
	int retry;

	do
	{
		printf("년 : "); scanf("%d", &year);
		printf("월 : "); scanf("%d", &month);
		printf("일 : "); scanf("%d", &day);
		printf("%d년의 %d일째 입니다.\n", year, dayofyear(year, month, day));
		printf("다시 할까요?(1 == 예 / 0 == 아니오) : ");
		scanf("%d", &retry);
	} while (retry == 1);

	return (0);
}
