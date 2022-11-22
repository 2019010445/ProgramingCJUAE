#include <stdio.h>
#include <string.h>

void line_up(char* pa, char* pb, char* pc);
void swap(char* ap, char* bp);

int main(void)
{
	char w1[20]; // �ܾ� 1
	char w2[20]; // �ܾ� 2
	char w3[20]; // �ܾ� 3

	printf("�� �ܾ� �Է� : ");
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