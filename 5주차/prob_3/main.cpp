#include <stdio.h>

int sum(int x, int y)               //Specify a function for addition
{
	int temp;

	temp = x + y;

	return temp;
}

int sub(int x, int y)               //Specify a function for subtraction
{
	int temp;

	temp = x - y;

	return temp;
}

int mul(int x, int y)               //Specify a function for multiplication
{
	int temp;

	temp = x * y;

	return temp;
}

int divi(int x, int y)              //Specify a function for division
{
	int temp;

	temp = x / y;

	return temp;
}

int rem(int x, int y)               //Specify a function for the remaining operations
{
	int temp;

	temp = x % y;

	return temp;
}

int main(void)
{
	int nA, nB, res;                  //Specify variables to enter
	char arithmeticoperation;         //Specify variables for the math symbol

	printf("Input your arithmetic operation: ");
	scanf_s("%d %c %d", &nA, &arithmeticoperation, 1, &nB);

	if (arithmeticoperation == '+')       //If statement to obtain result value for addition
	{
		res = sum(nA, nB);
		printf("addition: ");
	}
	else if (arithmeticoperation == '-')  //If statement to obtain result value for subtraction
	{
		res = sub(nA, nB);
		printf("subtraction: ");
	}
	else if (arithmeticoperation == '*')    //If statement to obtain result value for multiplication
	{
		res = mul(nA, nB);
		printf("multiplication: ");
	}
	else if (arithmeticoperation == '/')     //If statement to obtain result value for division
	{
		res = divi(nA, nB);
		printf("division: ");
	}
	else                                     //If this is not the case, run the remaining operations
	{
		res = rem(nA, nB);
		printf("remaining operations: ");
	}
	printf("%d %c %d = %d\n", nA, arithmeticoperation, nB, res);

	return 0;
}