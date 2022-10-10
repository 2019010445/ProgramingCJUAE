#include <stdio.h>

int main(void)
{
	double height;
	double weight;

	printf("Input your height and weight : \n");
	scanf_s("%d %d", &height, &weight);



	if ((height >= 187.5) && (weight < 80))
	{
		printf("OK\n");
	}

	else
	{
		printf("cancel\n");
	}

	return 0;
}