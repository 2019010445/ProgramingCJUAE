#include <stdio.h>


int main()
{
	int i, j;           //Specify a variable to use in the 'for statement' Use 'i' as a real number, and 'j' as a number to determine if 'i' is a real number
	int number;         //Variable to store entered numbers
	int  count = 0;     //Counting variables to replace lines for every five numbers

	printf("Enter an integer greater than or equal to 2 :");
	scanf_s("%d", &number);
	
	for (i = 2; i <= number; i++)        //Find all decimals less than or equal to 2 or more inputs
	{
		for (j = 2; j <= i; j++)         //Check whether it is a prime number or not
		{
			if ((i % j) == 0)            //When dividing 'i' by 'j', check if it is divided
			{
				if (i > j)break;         //Divide by a number less than "i" and escape
				else                     //If it is not divided by a number less than 'i', output the value
				{
					printf("%5d", i);
					count++;
					if (count % 5 == 0)
						printf("\n");
				}
			}
		}
	}

	return 0;
}

