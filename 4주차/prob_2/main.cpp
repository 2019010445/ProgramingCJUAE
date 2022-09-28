#include <stdio.h>
#include <stdlib.h>

#define MINCHESTSIZE 85
#define MAXCHESTSIZE 95
#define ADULTMINCHESTSIZE 90
#define ADULTMAXCHESTSIZE 100
#define AGELIMIT 20                        //Define age and chest circumference

int main(void)
{
	int chestsize,age;
	char chsize;                           //Set the variables for chest circumference and age

	printf("Input your chest size , age:\n");               //Print out "Enter your bust circumference and age"
	scanf_s("%d%d", &chestsize, &age);                //Enter chest circumference and age

	if (age < AGELIMIT)              //If you are under 20 years old, do the following
	{
		if (chestsize < MINCHESTSIZE)
		{
			chsize = 'S';
		}

		else if ((MINCHESTSIZE <= chestsize) && (chestsize < MAXCHESTSIZE))
		{
			chsize = 'M';
		}

		else
		{
			chsize = 'L';
		}

	}
	else                      //If you are over 20 years old, do the following
	{
		if (chestsize<ADULTMINCHESTSIZE)
		{
			chsize = 'S';
		}

		else if ((ADULTMINCHESTSIZE <= chestsize) && (chestsize < ADULTMAXCHESTSIZE))
		{
			chsize = 'M';
		}

		else
		{
			chsize = 'L';
		}
	}
	printf("Your size : %c",chsize);               //Print out the size of the corresponding clothes
	return 0;
}