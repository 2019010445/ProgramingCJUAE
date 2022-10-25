#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#define ARRAYSIZE 10                                      //배열의 크기 지정


int main(void)                                            //main함수 지정
{
	srand(time(NULL));
	int i;
	int A[ARRAYSIZE];                                     //
	int sum = 0;                                          //
	double avg, var, std = 0;                             //Initialize mean, variance, and standard deviation variables


	int Answer = 0;
	printf("Enter any number : \n");
	scanf_s("%d", &Answer);


	if (Answer > 0)
	{
		for (i = 0; i < ARRAYSIZE; i++)                       //Generate a random integer of 100 or less
		{
			A[i] = rand() % 100;
		}
		for (i = 0; i < ARRAYSIZE; i++)                       
		{
			printf("%d\t", A[i]);
			sum += A[i];
		}
		avg = sum / ARRAYSIZE;                                


		for (i = 0; i < ARRAYSIZE; i++)                       
		{
			sum += (A[i] - avg) * (A[i] - avg);               
		}
		var = sum / ARRAYSIZE;                                

		for (i = 0; i < ARRAYSIZE; i++)                       
		{
			sum += sqrt((A[i] - avg) * (A[i] - avg));         
		}


		std = sqrt(var);                                      



		printf("\n\n");                                       

		printf("Average : %.1lf\n", avg);                     //Output the mean to 1 decimal place
		printf("Variance : %.1lf\n", var);                    //Output variance to 1 decimal place
		printf("Standard deviation : %.1lf\n", sqrt(var));    //Output standard deviation to 1 decimal place
	}
	else
	{
		printf("Again debugging please. \n");
	}
	return 0;

}




