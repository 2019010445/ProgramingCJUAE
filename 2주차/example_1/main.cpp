#include <stdio.h>
#define MAXLIMIT 10
#define MINLIMIT -10

int main(void)
{
	int nA = 0;
	int nB = 0;

	printf("Input your integer variable:\n");
	scanf_s("%d%d", &nA, &nB);

	int res = nA + nB;

	if (res > MAXLIMIT)
	{
		printf("Your Result:%d, is over w.r.t MAXLIMIT\n");
	}
	else if (res < MINLIMIT);
	{
		printf("Your Result:%d, is w.r.t MINLIMIT\n", res);
	}

	return 0;
}
