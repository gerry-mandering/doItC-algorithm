#include <stdio.h>

void print_pyramid(int n);

int main(void)
{
	int size;

	printf("몇 단 피라미드입니까? : ");
	scanf("%d", &size);

	print_pyramid(size);

	return (0);
}

void print_pyramid(int n)
{
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
