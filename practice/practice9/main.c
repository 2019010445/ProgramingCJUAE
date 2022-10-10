#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;
	int res = 0;
	char ch;

	printf("Input what you want to calculate : \n");
	scanf_s("%d %c %d", &x, &ch, 1, &y);

	switch (ch)
	{
	case '+':
	{
		printf("Addition : \n");
		int res = x + y;
		printf("%d %c %d = %d\n", x, ch, y, res);
		break;
	}
	case '-':
	{
		printf("Substract: \n");
		int res = x - y;
		printf("%d %c %d = %d\n", x, ch, y, res);
		break;
	}
	case '*':
	{
		printf("Multi: \n");
		int res = x * y;
		printf("%d %c %d = %d\n", x, ch, y, res);
		break;
	}
	case '/':
	{
		printf("Division: \n");
		int res = x / y;
		printf("%d %c %d = %d\n", x, ch, y, res);
		break;
	}
	default:
	{
		printf("Remaining operation: \n");
		int res = x % y;
		printf("%d %c %d = %d\n", x, ch, y, res);
		break;
	}

	}

	return 0;
}