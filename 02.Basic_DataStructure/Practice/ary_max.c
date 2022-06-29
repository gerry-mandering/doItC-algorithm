/*
	<실행결과>
	
	사람 수 : 5
	5 사람의 키를 입력하세요.
	height_arr[0] : 172
	height_arr[1] : 153
	height_arr[2] : 192
	height_arr[3] : 140
	height_arr[4] : 165
	최댓값은 192입니다.
*/

#include <stdio.h>
#include <stdlib.h>

int	get_max(const int *arr, int arr_size);

int main(void)
{
	int *height_arr;
	int arr_size, max;

	printf("사람 수 : ");
	scanf("%d", &arr_size);

	height_arr = (int *)calloc(arr_size, sizeof(int));
	if (height_arr == NULL)
		puts("메모리 확보에 실패했습니다.\n");
	else
	{
		printf("%d 사람의 키를 입력하세요.\n", arr_size);
		for (int i = 0; i < arr_size; i++)
		{
			printf("height_arr[%d] : ", i);
			scanf("%d", &height_arr[i]);
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
