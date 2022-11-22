#include <stdio.h>
#include <stdlib.h>

typedef struct train Train;                                      //Override struct train as Train

struct train
{
	int seats;                                                   //the number of seats in a car
	struct train* next;                                          //Pointer to connect the following carriages
};

int main(void)
{
	Train* head = NULL, * tail = NULL;
	int i;
	for (i = 0; i < 5; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));
			tail = tail->next;
		}
	}

	return 0;
}