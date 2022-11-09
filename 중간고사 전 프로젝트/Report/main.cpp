#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANGEANSWER 10
#define MINRANGENUMBER 0
#define ADD 1
#define MAXOPPORTUNITIES  4

int main(void)
{
	int Answer, inputnumber;                                                                    //Set the answers you set on your computer and the variables you want to enter
	int count = MINRANGENUMBER;                                                                 //Set variables for the opportunity to answer correctly
	Answer = (rand() % MAXRANGEANSWER) + ADD;                                                      //Set a random positive integer
	srand(time(NULL));                                                                
	printf("UP&DOWN GAME START\n");                                                             //a phrase that signals the start of a game
	printf("Guess a number between 1 and 10. \n");

	while (1)                                                                         
	{
		printf("Input your answer : \n");
		scanf_s("%d", &inputnumber);

		if (inputnumber < MINRANGENUMBER || inputnumber > MAXRANGEANSWER)                           //Processing input status exceptions
		{
			printf("Not in scope, Re-enter please.  \n");
			printf("Input your answer : \n");
			break;
		}
		if (inputnumber == Answer)                                                              //If you get the right answer
		{
			printf("Right answer. Exit the program. \n");
			break;
		}
		else if (inputnumber < Answer)                                                          //When the number of entries is less than the correct answer
		{
			printf("UP\n");
			count += ADD;
			if (count == MAXOPPORTUNITIES)
				break;
		}
		else                                                                                    //When the number of entries is greater than the answer, even though it's not correct
		{
			printf("DOWN\n");
			count += ADD;
			if (count == MAXOPPORTUNITIES)
				break;
		}
	}
	printf("You have used all opportunities you have given. Debug it again.\n");

	return 0;
}
