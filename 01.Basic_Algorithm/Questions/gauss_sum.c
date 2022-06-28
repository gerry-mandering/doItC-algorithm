#include <stdio.h>

int get_gauss_sum(int n);

int main(void)
{
	int n, gauss_sum;

	printf("1부터 n까지의 합을 가우스법칙을 이용해 구합니다.\n");
	printf("n의 값 : ");
	scanf("%d", &n);
	
	gauss_sum = get_gauss_sum(n);
	printf("1부터 %d까지의 합은 %d입니다.\n", n, gauss_sum);

	return (0);
}

int get_gauss_sum(int n)
{
	int gauss_sum;

	if (n % 2 == 0)
		gauss_sum = (1 + n) * (n / 2);
	else
		gauss_sum = (1 + n) * (n / 2) + (n / 2 + 1);

	return (gauss_sum);
}
