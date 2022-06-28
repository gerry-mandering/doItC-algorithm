/*
	<실행결과>

	1부터 n까지의 합을 구합니다.
	n의 값 : -6
	n의 값 : 0
	n의 값 : 10
	1부터 10까지의 합은 55입니다.
*/

#include <stdio.h>

int get_sum(int n);

int main(void)
{
	int n, sum;

	printf("1부터 n까지의 합을 구합니다.\n");
	do
	{
		printf("n의 값 : ");
		scanf("%d", &n);
	} while (n <= 0);

	sum = get_sum(n);
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return (0);
}

int get_sum(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	return (sum);
}
