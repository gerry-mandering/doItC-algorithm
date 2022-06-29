#include <stdio.h>

int count;

int is_prime(int number);

int main(void)
{
	for (int i = 1; i <= 1000; i += 2)
	{
		if (is_prime(i))
			printf("%d\n", i);
	}
	
	printf("count = %d\n", count);

	return (0);
}

int is_prime(int number)
{
	int i = 2;

	if (number < 2)
		return (0);

	while (i * i <= number)
	{
		count++;
		if (number % i == 0)
			return (0);
		i++;
	}
	return (1);
}
