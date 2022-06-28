#include <stdio.h>

void print_sum(int n);

int main(void)
{
	int n; 

	printf("1부터 n까지의 합을 구합니다.\n");
	printf("n의 값 : ");
	scanf("%d", &n);

	print_sum(n);

	return (0);
}

void print_sum(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
		printf("%d", i);
		if (i != n)
			printf(" + ");
		else
			printf(" = %d\n", sum);
	}
}
