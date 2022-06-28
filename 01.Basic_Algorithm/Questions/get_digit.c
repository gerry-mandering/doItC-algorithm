#include <stdio.h>

int get_digit(int number);

int main(void)
{
	int number, digit;

	printf("입력한 숫자의 자릿수를 구합니다.\n");
	printf("숫자를 입력하시오 : ");
	scanf("%d", &number);

	digit = get_digit(number);
	printf("그 수는 %d자리입니다.\n", digit);

	return (0);
}

int get_digit(int number)
{
	int digit = 1;

	if (number < 0)
		number *= -1;

	while (number > 9)
	{
		digit++;
		number /= 10;
	}

	return (digit);
}
