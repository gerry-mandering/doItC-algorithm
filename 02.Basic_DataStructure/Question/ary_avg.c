#include <stdio.h>
#include <stdlib.h>

double get_avg(const int *arr, int arr_size);

int main(void)
{
	int		*height_arr;
	int		arr_size;
	double	avg;

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

		avg = get_avg(height_arr, arr_size);
		printf("키의 평균은 %.2lf입니다.\n", avg);

		free(height_arr);
	}

	return (0);
}

double get_avg(const int *arr, int arr_size)
{
	int		sum = 0;
	double	avg;

	for (int i = 0; i < arr_size; i++)
	{
		sum += arr[i];
	}

	avg = (double)sum / arr_size;

	return (avg);
}
