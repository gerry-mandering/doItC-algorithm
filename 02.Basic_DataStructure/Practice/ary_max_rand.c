/*
	<실행결과>

	사람 수 : 5
	height_arr[0] = 181
	height_arr[1] = 193
	height_arr[2] = 169
	height_arr[3] = 165
	height_arr[4] = 186
	최댓값은 193입니다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_max(const int *arr, int arr_size);

int main(void)
{
	int *height_arr;
	int	arr_size, max;

	printf("사람 수 : ");
	scanf("%d", &arr_size);

	height_arr = (int *)calloc(arr_size, sizeof(int));
	if (height_arr == NULL)
		puts("메모리 확보에 실패했습니다.\n");
	else
	{
		srand(time(NULL));
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
