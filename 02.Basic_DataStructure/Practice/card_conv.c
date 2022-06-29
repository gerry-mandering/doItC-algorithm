#include <stdio.h>
#include <stdlib.h>

char *base_convert(int number, int base, int base_digit);
int get_base_digit(int number, int base);

const char base_char[36] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(void)
{
	int		number, base, repeat, base_digit;
	char	*converted_num_arr;

	do
	{
		printf("10진수를 기수 변환합니다.\n");

		do
		{
			printf("변환하는 음이 아닌 정수 : ");
			scanf("%d", &number);
			if (number < 0)
				printf("음이 아닌 정수를 입력하시오.\n");
		} while (number < 0);

		do
		{
			printf("어떤 진수로 변환할까요?(2 ~ 36) : ");
			scanf("%d", &base);
			if (!(base >= 2 && base <= 36))
				printf("진수를 다시 입력하시오.\n");
		} while (!(base >= 2 && base <= 36));
		
		base_digit = get_base_digit(number, base);
		converted_num_arr = base_convert(number, base, base_digit);

		printf("%d진수로는 ", base);
		for (int i = 0; i < base_digit; i++)
		{
			printf("%c", converted_num_arr[i]);
		}
		printf("입니다.\n");

		free(converted_num_arr);

		do
		{
			printf("한 번 더 할까요?(1 == 예/ / 0 == 아니오) : ");
			scanf("%d", &repeat);
		} while (repeat != 0 && repeat != 1);
	} while (repeat != 0);

	return (0);
}

int get_base_digit(int number, int base)
{
	int base_digit = 1;

	while (number >= base)
	{
		base_digit++;
		number /= base;
	}

	return (base_digit);
}

char *base_convert(int number, int base, int base_digit)
{
	char * converted_num_arr;

	converted_num_arr = (char *)malloc(sizeof(char) * base_digit);
	if (converted_num_arr == NULL)
	{
		puts("메모리 할당에 실패했습니다.\n");
		return NULL;
	}

	while (number > 0)
	{
		converted_num_arr[--base_digit] = base_char[number % base];
		number /= base;
	}

	return (converted_num_arr);
}
