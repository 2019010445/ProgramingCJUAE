#include < stdio.h>

int main(void)
{
	int kor = 3;
	int eng = 5;
	int mat = 4;
	int credits = (kor + eng + mat);

	double kscore = 3.8;
	double escore = 4.4;
	double mscore = 3.9;
	double grade = (kscore * 3) + (escore * 5) + (mscore * 4) / ((double) (credits));

	int res = ((credits > 10) && (grade > 4));
	printf("%d", res);

	return 0;

}