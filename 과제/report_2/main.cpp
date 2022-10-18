#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#define ARRAYSIZE 100                                     //�迭�� ũ�� ����


int main(void)                                            //main�Լ� ����
{

	int A[ARRAYSIZE];                                     //
	int sum = 0;                                          //
	double avg, var, std = 0;                             //���, �л�, ǥ������ ������ �ʱ�ȭ

	int calculating();                                    //���, �л�, ǥ������ ���ϴ� �Լ�

	printf("\n\n");                                       //2�� ���

	printf("Average : %.1lf\n", avg);                     //����� �Ҽ��� 1�ڸ����� ���
	printf("Variance : %.1lf\n", var);                    //�л��� �Ҽ��� 1�ڸ����� ���
	printf("Standard deviation : %.1lf\n", sqrt(var));    //ǥ�������� �Ҽ��� 1�ڸ����� ���

	return 0;

}



int calcuating()                                          //���, �л�, ǥ������ ����ϴ� �Լ�
{
	srand(time(NULL));

	int i;                                                //���� ����
	int A[ARRAYSIZE];                                     //�迭 A�� ũ��
	int sum = 0;                                          //
	double avg, var, std = 0;                             //���, �л�, ǥ�������� �ʱⰪ ����

	for (i = 0; i < ARRAYSIZE; i++)                       //
	{
		A[i] = rand() % 100;                              //��� ���ϴ� ��
	}
	for (i = 0; i < ARRAYSIZE; i++)                       //
	{
		printf("%d", A[i]);                              //
		sum += A[i];                                      //
	}
	avg = sum / ARRAYSIZE;                                //


	for (i = 0; i < ARRAYSIZE; i++)                       //
	{
		sum += (A[i] - avg) * (A[i] - avg);               //
	}
	var = sum / ARRAYSIZE;                                // �л� = �� / ������ ������ ������ ����

	for (i = 0; i < ARRAYSIZE; i++)                       //
	{
		sum += sqrt((A[i] - avg) * (A[i] - avg));         //
	}


	std = sqrt(var);                                      //

	return i;                                             //calculating �Լ��� �� ��ȯ
}



