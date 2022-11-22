#include <stdio.h>

struct cracker                                                      //Declaration of Structure
{
	int price;                                                      //Variables to store prices
	int calories;                                                   //Variables to store calories
};

int main(void)
{
	struct cracker basasak;                                         //Declare structural variables
	printf("Enter basasak's price & calories :");                   
	scanf_s("%d%d", &basasak.price, &basasak.calories);             //Enter a value in a variables
	printf("basasak's price : %dWON\n", basasak.price);             //Output input values
	printf("basasak's calories : %dkcal\n", basasak.calories);

	return 0;
}