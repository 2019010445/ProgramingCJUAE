#include <stdio.h>

int main(void)
{
	char ch;

	printf("Enter Text : ");
	scanf_s("%c", &ch);
	printf("%c ascii code : %d", ch, ch);

	return 0;
}