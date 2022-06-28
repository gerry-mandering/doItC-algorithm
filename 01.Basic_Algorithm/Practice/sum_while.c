/*
	<실행결과>
	
	1부터 n까지의 합을 구합니다.
	n의 값 : 5
	1부터 5까지의 합은 15입니다.
*/

#include <stdio.h>

int get_sum(int n);

int main(void)
{
	int n, sum;

	printf("1부터 n까지의 합을 구합니다.\n");
	printf("n의 값 : ");
	scanf("%d", &n);

	sum = get_sum(n);
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return (0);
}

int get_sum(int n)
{
	int sum = 0;

	while (n >= 1)
	{
		sum += n;
		n--;
	}

	return (sum);
}
