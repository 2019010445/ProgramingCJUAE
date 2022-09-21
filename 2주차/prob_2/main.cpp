#include <stdio.h>

int main(void)
{
	char ch; // to save character

	printf("Input Caracter:\n"); // notice Input message
	scanf_s("%c", &ch); // enter character in ch
	printf("Your Input To Ascii Code:%d\n", ch); // convert and output
}