#include <stdio.h>

int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		if (i == 0)
			printf("   |");
		else
			printf("%2d |", i);
		for (int j = 1; j <= 9; j++)
		{
			if (i == 0)
				printf("%2d ", j);
			else
				printf("%2d ", i + j);
		}
		if (i == 0)
			printf("\n---+--------------------------");
		printf("\n");
	}
	return (0);
}
