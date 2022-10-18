#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#define ARRAYSIZE 100                                     //배열의 크기 지정


int main(void)                                            //main함수 지정
{

	int A[ARRAYSIZE];                                     //
	int sum = 0;                                          //
	double avg, var, std = 0;                             //평균, 분산, 표준편차 변수의 초기화

	int calculating();                                    //평균, 분산, 표준편차 구하는 함수

	printf("\n\n");                                       //2줄 띄움

	printf("Average : %.1lf\n", avg);                     //평균을 소수점 1자리까지 출력
	printf("Variance : %.1lf\n", var);                    //분산을 소수점 1자리까지 출력
	printf("Standard deviation : %.1lf\n", sqrt(var));    //표준편차를 소수점 1자리까지 출력

	return 0;

}



int calcuating()                                          //평균, 분산, 표준편차 계산하는 함수
{
	srand(time(NULL));

	int i;                                                //변수 지정
	int A[ARRAYSIZE];                                     //배열 A의 크기
	int sum = 0;                                          //
	double avg, var, std = 0;                             //평균, 분산, 표준편차의 초기값 설정

	for (i = 0; i < ARRAYSIZE; i++)                       //
	{
		A[i] = rand() % 100;                              //평균 구하는 식
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
	var = sum / ARRAYSIZE;                                // 분산 = 합 / 무작위 생성된 숫자의 개수

	for (i = 0; i < ARRAYSIZE; i++)                       //
	{
		sum += sqrt((A[i] - avg) * (A[i] - avg));         //
	}


	std = sqrt(var);                                      //

	return i;                                             //calculating 함수의 값 반환
}



