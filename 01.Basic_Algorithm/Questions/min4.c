#include <stdio.h>

int find_min(int a, int b, int c, int d);

int main(void)
{
	int a, b, c, d, min;

	printf("네 정수의 최솟값을 구합니다.\n");
	printf("a의 값 : ");
	scanf("%d", &a);
	printf("b의 값 : ");
	scanf("%d", &b);
	printf("c의 값 : ");
	scanf("%d", &c);
	printf("d의 값 : ");
	scanf("%d", &d);

	min = find_min(a, b, c, d);
	printf("최솟값은 %d입니다.\n", min);

	return (0);
}

int find_min(int a, int b, int c, int d)
{
	int	min;

	min = a < b ? a : b;
	min = c < min ? c : min;
	min = d < min ? d : min;

	return (min);
}
