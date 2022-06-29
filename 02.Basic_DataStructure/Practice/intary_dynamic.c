/*
	<실행결과>

	요소 개수 : 4
	4개의 정수를 입력하세요.
	arr[0] : 10
	arr[1] : 73
	arr[2] : 2
	arr[3] : -5
	각 요솟값은 아래와 같습니다.
	arr[0] = 10
	arr[1] = 73
	arr[2] = 2
	arr[3] = -5
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	arr_size;
	int	*arr;

	printf("요소 개수 : ");
	scanf("%d", &arr_size);

	arr = (int *)calloc(arr_size, sizeof(int));
	if (arr == NULL)
		puts("메모리 확보에 실패했습니다.");

	printf("%d개의 정수를 입력하세요.\n", arr_size);
	for (int i = 0; i < arr_size; i++)
	{
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}

	printf("각 요솟값은 아래와 같습니다.\n");
	for (int j = 0; j < arr_size; j++)
	{
		printf("arr[%d] = %d\n", j, arr[j]);
	}

	free(arr);

	return (0);
}
