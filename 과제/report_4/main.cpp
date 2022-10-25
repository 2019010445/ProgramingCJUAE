#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void GenRandSeed()
{
	// generating the random number using the time seed
	srand((int)(time(NULL)));
	return;
}

// generating the random number
int GenRandNum(int nRange)
{
	int nRes = 0;
	int nNum = rand();
	nRes = ((int)(nNum) % (nRange));
	return nRes;
}

// Function comparing one-dimensional integers entered in an array
int compare(int *ary, int Answer)
{
	int i, j = 0;
	int temp = 0;


	GenRandSeed();

	for (int i = 0; i < Answer; i++)
	{

		ary[i] = rand() % 99;
	}
	

	for (int i = 0; i < Answer; i++)
	{
		for(j = i; j < Answer; j++)
		{
			
			if (ary[i] > ary[j])
			{
				temp = ary[i];
				ary[i] = ary[j];
				ary[j] = temp;
			}
		}
		printf("%d\t", ary[i]);
	}

	return temp;
}

int main()
{
	int Answer = 0;
	printf("Enter any number : \n");
	scanf_s("%d", &Answer);

	
		if (Answer > 0)
		{
			int ary[10] = { 0 };

			printf("Ascending order : \n");
			compare(ary, Answer);
		}

		else
		{
			printf("Again debugging please. \n");
		}
	
	
	return 0;
}