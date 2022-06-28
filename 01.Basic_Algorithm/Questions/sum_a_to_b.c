#include <stdio.h>

int sum_between(int a, int b);

int main(void)
{
	int a, b, sum;

	printf("정수 a, b를 포함하여 그 사이의 모든 정수의 합을 구합니다.\n");
	printf("a의 값 : ");
	scanf("%d", &a);
	printf("b의 값 : ");
	scanf("%d", &b);
	
	sum = sum_between(a, b);
	printf("정수 %d와 %d를 포함한 그 사이의 모든 정수의 합은 %d입니다.\n", a, b, sum);

	return (0);
}

int sum_between(int a, int b)
{
	int min = a < b ? a : b;
	int max = a > b ? a : b;
	int sum = 0;

	for (int i = min; i <= max; i++)
	{
		sum += i;
	}

	return (sum);
}
