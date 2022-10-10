#include <stdio.h>

int main(void)
{
	int kor = 70;
	int eng = 80;
	int mat = 90;
	int total;

	total = kor + eng + mat;

	printf("kor : %d, eng : %d, mat %d: \n", kor, eng, mat);
	printf("total : %d", total);

	return 0;
}