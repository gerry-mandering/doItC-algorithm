/*
	<실행결과>

	몇 단 삼각형입니까? : 5
	*
	**
	***
	****
	*****
*/

#include <stdio.h>

int main(void)
{
	int size;

	printf("몇 단 삼각형입니까? : ");
	scanf("%d", &size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return (0);
}
