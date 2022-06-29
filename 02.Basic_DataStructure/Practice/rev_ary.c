/*
	<실행결과>

	요소 개수 : 5
	5개의 정수를 입력하세요.
	arr[0] : 10
	arr[1] : 73
	arr[2] : 2
	arr[3] : -5
	arr[4] : 42
	배열의 요소를 역순으로 정렬 했습니다.
	arr[0] = 42
	arr[1] = -5
	arr[2] = 2
	arr[3] = 73
	arr[4] = 10
*/

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

	printf("배열의 요소를 역순으로 정렬 했습니다.\n");
	for (int i = 0; i < arr_size; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	free(arr);

	return (0);
}

void rev_ary(int *arr, int arr_size)
{
	for (int i = 0; i < arr_size / 2; i++)
	{
		swap(int, arr[i], arr[arr_size - i - 1]);
	}
}
