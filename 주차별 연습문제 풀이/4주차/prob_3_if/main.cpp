#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int nA, nB, res;
	char arithmeticoperation;                                                        //Setting variables for integers and operation codes            

	printf("Input your arithmetic operation:\n");                                    //Print out "Enter the formula to calculate"
	scanf_s("%d %c %d", &nA, &arithmeticoperation, 1, &nB);                          // Enter the four-way operation you want to enter

	if (arithmeticoperation == '+')                                           
	{
		res = nA + nB;                                                         //for addition
		printf("addition: ");
	}
	else if (arithmeticoperation == '-')
	{
		res = nA - nB;                                                         //For Subtraction
		printf("subtraction: ");
	}
	else if (arithmeticoperation == '*')
	{
		res = nA * nB;                                                         //For multiplication
		printf("multiplication:");
	}
	else
	{
		res = nA / nB;
		printf("division:");                                                   //in other cases
	}
	printf("%d %c %d = %d\n", nA, arithmeticoperation, nB, res);
	system("pause");
	return 0;
}

