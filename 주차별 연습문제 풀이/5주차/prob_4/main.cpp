#include <stdio.h>

int rec_func(int n)             //Function that returns the sum of 1 to n
{
	if (n == 10) return 10;     // Return if the number of iterations is 10
	return n + rec_func(n + 1);
}

int main()
{
	int number;                 //Specify variables to enter
	printf("Enter a constant number to find the sum of 1 to a constant number (n) : ");
	scanf_s("%d", &number);
	int sum;                    //Specify variables to calculate
	sum = rec_func(1);
	printf("%d\n", sum);

	return 0;
}