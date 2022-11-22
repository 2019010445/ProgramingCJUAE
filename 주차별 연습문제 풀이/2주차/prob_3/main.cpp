#include <stdio.h>

int main(void)
{
	int kor = 3; // kor credit
	int eng = 5; // eng credit
	int mat = 4; // mat credit
	int credits = (kor + eng + mat); // add kor, eng, mat credits

	double kscore = 3.8; // kor grade
	double escore = 4.4; // eng grade
	double mscore = 3.9; // mat grade
	double grade = (kscore * 3 + escore * 5 + mscore * 4) / ((double)(credits)); // calculating crerdits

	int res = ((credits > 10) && (grade > 4)); // if credits over 10 and grade over 4 is true than output 1 or not is false than output 0
	printf("%d", res);

	return 0;

}