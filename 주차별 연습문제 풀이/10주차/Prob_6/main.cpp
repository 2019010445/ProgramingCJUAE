#include <stdio.h>
#include <string.h>


int main()
{
	int a;
	float b;
	char c, d[20];

	FILE* fp;

	fp = fopen("test.txt", "w");

	if (fp == NULL)
	{
		puts("The file does not exist..");
	}
	else
	{
		puts("The file has been created, so please check it..");
	}

	printf("Input integer, number,text,string :");
	scanf_s("%d%f%s%s \n", fp, &a, &b, & c, & d);

	fprintf(fp, "%d\n%f\n%s\n%c\n", a, b, c, d);

	fclose(fp);

	return 0;
}