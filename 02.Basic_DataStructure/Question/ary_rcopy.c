#include <stdio.h>
#include <stdlib.h>

void ary_rcopy(int **copied_arr, const int *arr, int size);

int main(void)
{
	int	*arr;
	int	*copied_arr;
	int size;

	printf("요소의 갯수 : ");
	scanf("%d", &size);

	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		puts("메모리 할당에 실패했습니다.\n");
		return (0);
	}

	for (int i = 0; i < size; i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}

	ary_rcopy(&copied_arr, arr, size);

	for (int i = 0; i < size; i++)
	{
		printf("copied_arr[%d] = %d\n", i, copied_arr[i]);
	}

	free(arr);
	free(copied_arr);

	return (0);
}

void ary_rcopy(int **copied_arr, const int *arr, int size)
{
	*copied_arr = (int *)malloc(sizeof(int) * size);
	if (*copied_arr == NULL)
	{
		puts("메모리 할당에 실패했습니다.\n");
		return ;
	}

	for (int i = 0; i < size; i++)
	{
		(*copied_arr)[size - i - 1] = arr[i];
	}
}
