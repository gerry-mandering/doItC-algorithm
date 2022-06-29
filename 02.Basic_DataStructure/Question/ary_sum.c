#include <stdio.h>
#include <stdlib.h>

int	get_sum(const int *arr, int arr_size);

int main(void)
{
	int *height_arr;
	int arr_size, sum;

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

		sum = get_sum(height_arr, arr_size);
		printf("키의 총 합은 %d입니다.\n", sum);

		free(height_arr);
	}

	return (0);
}

int get_sum(const int *arr, int arr_size)
{
	int sum = 0;

	for (int i = 0; i < arr_size; i++)
	{
		sum += arr[i];
	}

	return (sum);
}
