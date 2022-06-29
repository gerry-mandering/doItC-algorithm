/*
	<실행결과>
	
	arr[0] : 10
	arr[1] : 20
	arr[2] : 30
	arr[3] : 40
	arr[4] : 50
	각 요소의 값
	arr[0] = 10
	arr[1] = 20
	arr[2] = 30
	arr[3] = 40
	arr[4] = 50
*/

#include <stdio.h>

#define SIZE 5

int main(void)
{
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("각 요소의 값\n");
	for (int j = 0; j < SIZE; j++)
	{
		printf("arr[%d] = %d\n", j, arr[j]);
	}

	return (0);
}
