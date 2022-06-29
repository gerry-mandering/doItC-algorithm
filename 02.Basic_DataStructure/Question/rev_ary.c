#include <stdio.h>
#include <stdlib.h>

#define swap(type, x , y) do { type temp = x; x = y; y = temp; } while(0)

void rev_ary(int *arr, int arr_size);

int main(void)
{
	int *arr;
	int arr_size;

	printf("요소 개수 : ");
	scanf("%d", &arr_size);

	arr = (int *)calloc(arr_size, sizeof(int));
	if (arr == NULL)
	{
		puts("메모리 할당에 실패했습니다.");
		return (0);
	}

	printf("%d개의 정수를 입력하세요.\n", arr_size);
	for (int i = 0; i < arr_size; i++)
	{
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}

	rev_ary(arr, arr_size);

	free(arr);

	return (0);
}

void rev_ary(int *arr, int arr_size)
{
	for (int i = 0; i < arr_size / 2; i++)
	{
		for (int j = 0; j < arr_size; j++)
		{
			printf("%2d ", arr[j]);
		}
		printf("\n");
		printf("arr[%d]과 arr[%d]를 교환합니다.\n", i, arr_size - i - 1);
		swap(int, arr[i], arr[arr_size - i - 1]);
	}
	for (int k = 0; k < arr_size; k++)
	{
		printf("%2d ", arr[k]);
	}
	printf("\n");
	printf("역순 정렬을 종료합니다.\n");
}
