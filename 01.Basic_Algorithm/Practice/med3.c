/*
	<실행결과>

	세 정수의 중앙값을 구합니다.
	a의 값 : 1
	b의 값 : 3
	c의 값 : 2
	중앙값은 2.000000입니다.
*/

#include <stdio.h>

void swap(int *a, int *b);
void bubble_sort(int arr[], int size);
double find_median(int arr[], int size);

int main(void)
{
	int abc[3];
	double median;

	printf("세 정수의 중앙값을 구합니다.\n");
	printf("a의 값 : ");
	scanf("%d", &abc[0]);
	printf("b의 값 : ");
	scanf("%d", &abc[1]);
	printf("c의 값 : ");
	scanf("%d", &abc[2]);

	median = find_median(abc, 3);
	printf("중앙값은 %lf입니다.\n", median);

	return (0);
}

void swap(int *a, int *b)
{
	int temp = *a;
	
	*a = *b;
	*b = temp;
}

void bubble_sort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size - i - 1; j++)
		{
			if (arr[i] > arr[j])
				swap(&arr[i], &arr[j]);
		}
	}
}

double find_median(int abc[], int size)
{
	double median;

	bubble_sort(abc, size);

	if (size % 2 == 0)
	{
		median = (double)(abc[size / 2 - 1] + abc[size / 2]) / (double)2;
	}
	else
	{
		median = abc[size / 2 + 1];
	}
	
	return (median);
}
