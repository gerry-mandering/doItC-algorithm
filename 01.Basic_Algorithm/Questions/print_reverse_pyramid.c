#include <stdio.h>

void print_reverse_pyramid(int n);

int main(void)
{
	int size;

	printf("몇 단 피라미드 입니까? : ");
	scanf("%d", &size);

	print_reverse_pyramid(size);

	return (0);
}

void print_reverse_pyramid(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (n - i) * 2 - 1; k++)
		{
			printf("%d", i + 1);
		}
		printf("\n");
	}
}
