/*
	<실행결과>

	*x = 57
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *x;

	x = (int *)calloc(1 ,sizeof(int));
	if (x == NULL)
	{
		puts("메모리 할당에 실패했습니다.\n");
	}
	else
	{
		*x = 57;
		printf("*x = %d\n", *x);
		free(x);
	}

	return (0);
}
