#include <stdio.h>

int main(void)
{
	int size;

	printf("사각형을 출력합니다.\n");
	printf("입력할 수 : ");
	scanf("%d", &size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return (0);
}
