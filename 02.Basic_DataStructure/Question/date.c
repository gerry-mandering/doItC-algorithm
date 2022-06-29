#include <stdio.h>

typedef struct Date
{
	int	y;
	int	m;
	int	d;
} Date;

int mdays[][12] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30 ,31, 30, 31},
	{31, 29, 31 ,30, 31, 30, 31, 31,30, 31, 30 , 31}
};

int is_leap(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

Date DateOf(int y, int m, int d)
{
	Date return_Date;

	return_Date.y = y;
	return_Date.m = m;
	return_Date.d = d;
	
	return (return_Date);
}

Date After(Date x, int n)
{
	while (n > 0)
	{
		x.d++;
		if (x.d > mdays[is_leap(x.y)][x.m])
		{
			x.m++;
			x.d = 1;
			if (x.m > 12)
			{
				x.y++;
				x.m = 1;
			}
		}
		n--;
	}

	return (x);
}

Date Before(Date x, int n)
{
	while (n > 0)
	{
		x.d--;
		if (x.d < 1)
		{
			x.m--;
			if (x.m < 1)
			{
				x.y--;
				x.m = 12;
			}
			x.d = mdays[is_leap(x.y)][x.m];
		}
		n--;
	}

	return (x);
}

int main(void)
{
	int		year, month, day;
	int		n, retry;
	Date	Date_p, Date_before, Date_after;

	do
	{
		printf("년 : "); scanf("%d", &year);
		printf("월 : "); scanf("%d", &month);
		printf("일 : "); scanf("%d", &day);

		Date_p = DateOf(year, month, day);
		printf("%d년 %d월 %d일로 부터 n일 앞, 뒤의 날짜를 구합니다.\n", Date_p.y, Date_p.m, Date_p.d);
		printf("n을 입력하시오 : ");
		scanf("%d", &n);

		Date_before = Before(Date_p, n);
		printf("<%d년 %d월 %d일로 부터 n일 앞의 날짜>\n", Date_p.y, Date_p.m, Date_p.d);
		printf("-> %d년 %d월 %d일\n", Date_before.y, Date_before.m, Date_before.d);

		Date_after = After(Date_p, n);
		printf("<%d년 %d월 %d일로 부터 n일 뒤의 날짜>\n", Date_p.y, Date_p.m, Date_p.d);
		printf("-> %d년 %d월 %d일\n", Date_after.y, Date_after.m, Date_after.d);

		printf("다시 할까요?(1 == 예 / 0 == 아니오) : ");
		scanf("%d", &retry);
	} while (retry == 1);

	return (0);
}
