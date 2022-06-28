#include <stdio.h>

void swap(int *a, int *b);
void bubble_sort(int arr[], int size);
double find_median(int arr[], int size);

int main(void)
{
	int arr[3];

	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			for (int k = 1; k <= 3; k++)
			{
				arr[0] = i;
				arr[1] = j;
				arr[2] = k;
				printf("find_median(%d, %d, %d) = %lf\n", i, j, k, find_median(arr, 3));
			}
		}
	}

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
