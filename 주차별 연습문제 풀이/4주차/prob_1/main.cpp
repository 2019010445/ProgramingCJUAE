#include <stdio.h>
#include <stdlib.h>

#define MINCHESTSIZE 90
#define MAXCHESTSIZE 100     //Defines the max,min size of the bust

int main(void)
{
	int nchestsize;       
	char chsize;              //Set variables for bust size, clothing size

	printf("input your chest size:\n");          //Print out "Enter your chest size"
	scanf_s("%d", &nchestsize);                 //Enter the size of the chest size

	if (nchestsize <= MINCHESTSIZE)                //Size clothes according to the size of your chest
	{
		chsize = 'S';
	}
	else if ((nchestsize > MINCHESTSIZE) && (nchestsize <= MAXCHESTSIZE))
	{
		chsize = 'M';
	}
	else
	{
		chsize = 'L';
	}

	printf("Your size : %c", chsize);        //The value entered in accordance with the output size clothes.
	return 0;                    

}