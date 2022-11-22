#include <stdio.h>

typedef struct book                                                             //Use typedef first
{
	char title[100];
	char author[20];
	int page;
	int price;
}book;                                                                          //Data Type Name

void print_book(book* bp)                                                       //A function that outputs information from a book
{
	int i = 0;

	for (i + 0; i < 3; i++)
	{
		printf("Title : %s\n", (bp + i)->title);
		printf("Author : %s\n", (bp + i)->author);
		printf("Page : %d\n", (bp + i)->page);
		printf("Price(WON) : %d\n\n", (bp + i)->price);
	}
}

int main(void)
{
	book a[3] = {                                                               //Size of arrangement 3 because it's 3 books
		{"mechanical material science","Kim Jung Gyu",527,28000},
		{"Core Material Dynamics","James M.Gere",500,30720},
		{"Lehne's Pharmacology for Nursing Care","Burchum",836,44000}
	};

	print_book(a);

	return 0;
}