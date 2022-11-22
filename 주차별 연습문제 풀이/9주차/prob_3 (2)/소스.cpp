#include <stdio.h>
#include <string.h>

void line_up(char* pa, char* pb, char* pc);
void swap(char* ap, char* bp);

int main(void)
{
	char w1[20]; // 단어 1
	char w2[20]; // 단어 2
	char w3[20]; // 단어 3

	printf("세 단어 입력 : ");
	scanf("%s %s %s", &w1, &w2, &w3);
	line_up(w1, w2, w3);
	printf("%s, %s, %s", w1, w2, w3);

	return 0;
}

void line_up(char* pa, char* pb, char* pc)
{
	if (strcmp(pa, pb) > 0) swap(pa, pb);
	if (strcmp(pa, pc) > 0) swap(pa, pc);
	if (strcmp(pb, pc) > 0) swap(pb, pc);
}


void swap(char* ap, char* bp)
{
	char temp[20];

	strcpy(temp, ap);
	strcpy(ap, bp);
	strcpy(bp, temp);
}