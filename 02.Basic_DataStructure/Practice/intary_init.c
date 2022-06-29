#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("배열 arr의 요소 개수는 %d입니다.\n", arr_size);

	for (int i = 0; i < arr_size; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return (0);
}
