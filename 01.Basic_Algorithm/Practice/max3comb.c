/*
	<실행결과>

	find_max(3, 2, 1) = 3
	find_max(3, 2, 2) = 3
	find_max(3, 1, 2) = 3
	find_max(3, 2, 3) = 3
	find_max(2, 1, 3) = 3
	find_max(3, 3, 2) = 3
	find_max(3, 3, 3) = 3
	find_max(2, 2, 3) = 3
	find_max(2, 3, 1) = 3
	find_max(2, 3, 2) = 3
	find_max(1, 3, 2) = 3
	find_max(2, 3, 3) = 3
	find_max(1, 2, 3) = 3
*/

#include <stdio.h>

int find_max(int a, int b, int c);

int main(void)
{
	printf("find_max(%d, %d, %d) = %d\n", 3, 2, 1, find_max(3, 2, 1));
	printf("find_max(%d, %d, %d) = %d\n", 3, 2, 2, find_max(3, 2, 2));
	printf("find_max(%d, %d, %d) = %d\n", 3, 1, 2, find_max(3, 1, 2));
	printf("find_max(%d, %d, %d) = %d\n", 3, 2, 3, find_max(3, 2, 3));
	printf("find_max(%d, %d, %d) = %d\n", 2, 1, 3, find_max(2, 1, 3));
	printf("find_max(%d, %d, %d) = %d\n", 3, 3, 2, find_max(3, 3, 2));
	printf("find_max(%d, %d, %d) = %d\n", 3, 3, 3, find_max(3, 3, 3));
	printf("find_max(%d, %d, %d) = %d\n", 2, 2, 3, find_max(2, 2, 3));
	printf("find_max(%d, %d, %d) = %d\n", 2, 3, 1, find_max(2, 3, 1));
	printf("find_max(%d, %d, %d) = %d\n", 2, 3, 2, find_max(2, 3, 2));
	printf("find_max(%d, %d, %d) = %d\n", 1, 3, 2, find_max(1, 3, 2));
	printf("find_max(%d, %d, %d) = %d\n", 2, 3, 3, find_max(2, 3, 3));
	printf("find_max(%d, %d, %d) = %d\n", 1, 2, 3, find_max(1, 2, 3));

	return (0);
}

int find_max(int a, int b, int c)
{
	int	max;

	max = a > b ? a : b;
	max = max > c ? max : c;

	return (max);
}
