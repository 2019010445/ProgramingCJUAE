#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int num;                                        //Student Number
	char name;                                      //Student Name
	int kor, eng, mat;                              //a score of three subjects
	int total;                                      //a total score of three subjects
	double avg;                                     //the average of three subjects
	char grade;                                     //credits in a subject
}student;

void input_data(student *pary);                     //Function that receives scores from three subjects: class, name, and class
void calc_data(student * pary);                     //Functions that calculate total scores, averages, and credits
void sort_data(student* pary);                      //Functions that sort in descending order of total points
void print_data(student* pary);                     //Function that sorts and outputs the entered values

int main(void)
{
	student ary[5];                                 //the grades of five students

	input_data(ary);                                //Enter your grade, name, and scores for 3 subjects
	calc_data(ary);                                 //Total, Average, Credit Calculation
	
	printf("\n# Pre-alignment Data..\n");           //Output before sorting
	print_data(ary);
	sort_data(ary);
	printf("\n# Data after sorting..\n");           //Output after sorting
	print_data(ary);

	return 0;
}

void input_data(student* pary)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("Student Number : ");
		scanf_s("%d", &pary->num);
		printf("Student Name : ");
		scanf_s("%s", &pary->name,5);
		printf("kor, eng, mat score : ");
		scanf_s("%d%d%d", &pary->kor, &pary->eng, &pary->mat);
		pary++;
	}
}

void calc_data(student* pary)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		pary->total = pary->kor + pary->eng + pary->mat;
		pary->avg = pary->total / 3.0;

		if (pary->avg >= 90.0) pary->grade = 'A';
		else if (pary->avg >= 80.0) pary->grade = 'B';
		else if (pary->avg >= 70.0) pary->grade = 'C';
		else pary->grade = 'F';
		pary++;
	}
}

void sort_data(student* pary)
{
	student temp;
	int i, j;
	int max;

	for (i = 0; i < 4; i++)
	{
		max = i;
		for (j = i + 1; j < 5; j++)
		{
			if (pary[max].total < pary[j].total)
			{
				max = j;
			}
		}
		if (max != i)
		{
			temp = pary[max];
			pary[max] = pary[i];
			pary[i] = temp;
		}
	}
}

void print_data(student* pary)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%5d%7d%5d%5d%5d%5d%7.1lf%5c\n", pary->num, pary->name, pary->kor, pary->eng, pary->mat, pary->total, pary->avg, pary->grade);
		pary++;
	}
}