#include <stdio.h>

int find_max(int a, int b, int c, int d);

int main(void)
{
	int	a, b, c, d, max;

	printf("네 정수의 최댓값을 구합니다.\n");
	printf("a의 값 : ");
	scanf("%d", &a);
	printf("b의 값 : ");
	scanf("%d", &b);
	printf("c의 값 : ");
	scanf("%d", &c);
	printf("d의 값 : ");
	scanf("%d", &d);

	max = find_max(a, b, c, d);
	printf("최댓값은 %d입니다.\n", max);

	return (0);
}

int find_max(int a, int b, int c, int d)
{
	int	max;

	max = a > b ? a : b;
	max = max > c ? max : c;
	max = max > d ? max : d;

	return (max);
}
