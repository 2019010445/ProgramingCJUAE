#include <stdio.h>

double cm_to_m(int cm);

int main(void)
{
	double res;
	res = cm_to_m(187);
	printf("%.2lfm\n", res);

	return 0;
}

double cm_to_m(int cm)
{
	double m;
	m = cm / 100.0;
	return m;
}