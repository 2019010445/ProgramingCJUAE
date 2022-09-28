#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int nA, nB, res;
	char arithmeticoperation;                                                        //Setting variables for integers and operation codes            

	printf("Input your arithmetic operation:\n");                                    //Print out "Enter the formula to calculate"
	scanf_s("%d %c %d", &nA, &arithmeticoperation, 1, &nB);                          // Enter the four-way operation you want to enter

	if (arithmeticoperation == '+')                                             //Determine what the value of the arithmetic symbol is
	{
		res = nA + nB;
		printf("addition: ");
	}
	else if (arithmeticoperation == '-')
	{
		res = nA - nB;
		printf("subtraction: ");
	}
	else if (arithmeticoperation == '*')
	{
		res = nA * nB;
		printf("multiplication:");
	}
	else
	{
		res = nA / nB;
		printf("division:");
	}
	printf("%d %c %d = %d\n", nA, arithmeticoperation, nB, res);
	system("pause");
	return 0;
}

