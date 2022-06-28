#include <stdio.h>

void triangleLB(int n);
void triangleLU(int n);
void triangleRU(int n);
void triangleRB(int n);

int main(void)
{
	int size;

	printf("몇 단 삼각형입니까? : ");
	scanf("%d", &size);

	triangleLB(size);
	printf("\n");
	triangleLU(size);
	printf("\n");
	triangleRU(size);
	printf("\n");
	triangleRB(size);

	return (0);
}

void triangleLB(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void triangleLU(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void triangleRU(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j >= i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

void triangleRB(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
