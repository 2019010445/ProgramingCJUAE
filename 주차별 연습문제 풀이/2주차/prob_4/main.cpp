#include <stdio.h>

int main(void)
{
	double m;  
	double kg;
	double BMI;

	printf("input height(m) and weight(kg) : ");
	scanf_s("%lf%lf", &m, &kg);

	BMI = (kg) / (m * m);

	(BMI >= 20.0) && (BMI < 25.0) ? printf("standard\n") : printf("need control weight\n");

	return 0;
}