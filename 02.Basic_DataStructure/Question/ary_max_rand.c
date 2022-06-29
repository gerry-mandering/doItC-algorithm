#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_max(const int *arr, int arr_size);

int main(void)
{
	int *height_arr;
	int	arr_size, max;

	srand(time(NULL));
	arr_size = rand() % 16 + 5;
	printf("사람 수 : %d\n", arr_size);

	height_arr = (int *)calloc(arr_size, sizeof(int));
	if (height_arr == NULL)
		puts("메모리 확보에 실패했습니다.\n");
	else
	{
		for (int i = 0; i < arr_size; i++)
		{
			height_arr[i] = rand() % 51 + 150;
			printf("height_arr[%d] = %d\n", i, height_arr[i]);
		}

		max = get_max(height_arr, arr_size);
		printf("최댓값은 %d입니다.\n", max);

		free(height_arr);
	}
	return (0);
}

int get_max(const int *arr, int arr_size)
{
	int max;

	max = arr[0];
	for (int i = 1; i < arr_size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return (max);
}
