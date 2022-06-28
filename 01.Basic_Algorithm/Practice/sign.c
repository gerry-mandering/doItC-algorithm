/*
	<실행결과>

	정수를 입력하세요. : 5
	이 수는 양수입니다.

	정수를 입력하세요. : -5
	이 수는 음수입니다.

	정수를 입력하세요. : 0
	이 수는 0입니다.
*/

#include <stdio.h>

void print_sign(int input)
{
	if (input == 0)
		printf("이 수는 0입니다.\n");
	else if (input > 0)
		printf("이 수는 양수입니다.\n");
	else
		printf("이 수는 음수입니다.\n");
}

int main(void)
{
	int number;

	printf("정수를 입력하세요. : ");
	scanf("%d", &number);

	print_sign(number);

	return (0);
}
