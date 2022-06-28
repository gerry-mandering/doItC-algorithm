/*
	<실행결과>

	세 정수의 최댓값을 구합니다.
	a의 값 : 1
	b의 값 : 3
	c의 값 : 2
	최댓값은 3입니다.
*/

#include <stdio.h>

int find_max(int a, int b, int c);

int main(void)
{
	int	a, b, c, max;

	printf("세 정수의 최댓값을 구합니다.\n");
	printf("a의 값 : ");
	scanf("%d", &a);
	printf("b의 값 : ");
	scanf("%d", &b);
	printf("c의 값 : ");
	scanf("%d", &c);

	max = find_max(a, b, c);
	printf("최댓값은 %d입니다.\n", max);

	return (0);
}

int find_max(int a, int b, int c)
{
	int	max;

	max = a > b ? a : b;
	max = max > c ? max : c;

	return (max);
}
