#include <stdio.h>

int main(void)
{
	int seats = 70;
	int aud = 65;
	double rate;
	
	rate = (double)aud / (double)seats * 100.0;

	printf("%.1lf%%\n", rate);

	return 0;
}