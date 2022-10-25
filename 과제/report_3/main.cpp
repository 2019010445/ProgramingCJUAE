#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define matrixsize 3
#define maxrandnum 100

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


//
int main()
{
	int Answer = 0;
	printf("Enter any number : \n");
	scanf_s("%d", &Answer);

	if (Answer > 0)
	{

		printf("1st matrix : \n");

		GenRandSeed();

		int i, j, k = 0;
		int m1[matrixsize][matrixsize];
		for (int i = 0; i < matrixsize; i++)    //Enter a random integer in the first matrix
		{
			for (int j = 0; j < matrixsize; j++)
			{
				m1[i][j] = rand() % maxrandnum;
				printf("%d\t", m1[i][j]);
			}
			printf("\n");
		}
		printf("\n");


		printf("2nd matrix : \n");

		int m2[matrixsize][matrixsize];
		for (int i = 0; i < matrixsize; i++)           //Enter a random integer in the second matrix
		{
			for (int j = 0; j < matrixsize; j++)
			{
				m2[i][j] = rand() % maxrandnum;
				printf("%d\t", m2[i][j]);
			}
			printf("\n");
		}
		printf("\n");

		printf("1st matrix X 2nd matrix : \n");

		int sum[matrixsize][matrixsize] = { 0 };              //the product of the first matrixand the second matrix
		for (int i = 0; i < matrixsize; i++)
		{
			for (int j = 0; j < matrixsize; j++)
			{
				for (int k = 0; k < matrixsize; k++)
				{
					sum[i][j] += (m1[i][k] * m2[k][j]);
				}
				printf("%d\t", sum[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Again debugging please. \n");
	}
	return 0;
}
