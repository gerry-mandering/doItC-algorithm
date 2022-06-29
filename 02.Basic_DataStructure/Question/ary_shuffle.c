#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type, x, y) do { type temp = x; x = y; y = temp; } while(0)

void shuffle(int *arr, int size);

int main(void)
{
	int	*arr;
	int	size;

	printf("요소의 갯수 : ");
	scanf("%d", &size);

	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		puts("메모리 할당에 실패했습니다.\n");
		return (0);
	}

	printf("요소를 입력하시오.\n");
	for (int i = 0; i < size; i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}

	shuffle(arr, size);

	printf("\n<Shuffled>\n");
	for (int i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	free(arr);

	return (0);
}

void shuffle(int *arr, int size)
{
	int random_index;

	srand(time(NULL));
	
	for (int i = 0; i < size; i++)
	{
		random_index = rand() % size;
		swap(int, arr[i], arr[random_index]);
	}
}
