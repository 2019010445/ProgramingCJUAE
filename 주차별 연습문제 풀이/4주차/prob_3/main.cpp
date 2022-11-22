#include <stdio.h>

int main(void)
{
	int nA = 0;
	int nB = 0;
	int nres = 0;
	char choper;              //Setting variables for integers and operation codes            

	printf("Input your arithmetic operation:\n");                    //Print out "Enter the formula to calculate"
	scanf_s("%d %c %d", &nA, &choper, 1, &nB);                          // Enter the four-way operation you want to enter

	switch (choper)             //Determine what the value of the arithmetic symbol is
	{
	case '+':                 //For addition
	{
		printf("addition:\n");
		int nres = nA + nB;
		printf("%d %c %d = %d\n", nA, choper, nB, nres);
		break;
	}
	case '-':                //For Subtraction
	{
		printf("subtraction:\n");
		int nres = nA - nB;
		printf("%d %c %d = %d\n", nA, choper, nB, nres);
		break;
	}
	case '*':          //For multiplication

	{
		printf("multiplication:\n");
		int nres = nA * nB;
		printf("%d %c %d = %d\n", nA, choper, nB, nres);
		break;
	}
	default:                  //in other cases
	{
		printf("division:\n");
		int nres = nA / nB;
		printf("%d %c %d = %d\n", nA, choper, nB, nres);
		break;
	}
	}

	return 0;
}

