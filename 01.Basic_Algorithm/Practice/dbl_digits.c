#include <stdio.h>

int main(void)
{
	int number;

	do
	{
		printf("2자리 정수를 입력하세요.\n");
		printf("수는 : ");
		scanf("%d", &number);
	} while (!(number > 9 && number < 100)); //while (number < 10 || number > 99);

	printf("변수 number 값은 %d이 되었습니다.\n", number);

	return (0);
}
