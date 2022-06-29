#include <stdio.h>
#define VMAX 21

typedef struct physical
{
	char	name[20];
	int		height;
	double	vision;
} physical;

double get_avg_height(physical physical_arr[], int size);
void print_vision_distribution(physical physical_arr[], int size);

int main(void)
{
	physical physical_arr[] = {
		{"박현규", 162, 0.3},
		{"함진아", 173, 0.7},
		{"최윤미", 175, 2.0},
		{"홍연의", 171, 1.5},
		{"이수진", 168, 0.4},
		{"김영준", 174, 1.2},
		{"박용규", 169, 0.8}
	};
	int size;
	
	printf("■ □ ■ 신체검사 표 ■ □ ■\n");
	printf("이름	키	시력\n");
	size = sizeof(physical_arr) / sizeof(physical_arr[0]);
	for (int i = 0; i < size; i++)
	{
		printf("%s	%d	%.1lf\n", physical_arr[i].name, physical_arr[i].height, physical_arr[i].vision);
	}

	printf("평균 키 : %.1lf cm\n", get_avg_height(physical_arr, size));

	print_vision_distribution(physical_arr, size);

	return (0);
}

double get_avg_height(physical physical_arr[], int size)
{
	double	sum = 0, avg;

	for (int i = 0; i < size; i++)
	{
		sum += physical_arr[i].height;
	}
	
	avg = sum / (double)size;

	return (avg);
}

void print_vision_distribution(physical physical_arr[], int size)
{
	int count;

	printf("시력 분포\n");
	for (int i = 0; i < VMAX; i ++)
	{
		count = 0;
		for (int j = 0; j < size; j++)
		{
			if ((int)(physical_arr[j].vision * 10) == i)
				count++;
		}
		printf("%.1lf ~ : %d 명\n", i / 10.0, count);
	}
}
