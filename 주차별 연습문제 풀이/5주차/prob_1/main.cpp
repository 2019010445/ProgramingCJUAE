#include <stdio.h>                                         

int main(void)                                              
{
	int i, j;                                                 //Set variables for multiplication tables
	
	printf("Enter the number of steps to obtain : ");         //Print out "Enter a list to find
	scanf_s("%d", &i);                                        //Scanning the search party
	

	for (j = 1; j <= 9; j++)                                  //Repeat from 1 to 9
		{
			printf("%d * %d = %d\n", i, j, i * j);            //Outputs the multiplication table result
		}
	
	return 0;
}