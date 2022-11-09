#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20], str2[20], str3[20];                       //Array to store 3 words
	char temp[20];

	printf("Enter 3 words : ");
	scanf("%s%s%s", str1, str2, str3);

	if (strcmp(str1, str2) > 0)                              //If str1 comes after the dictionary than str2, change the two strings             
	{
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);
	}
	else if (strcmp(str1, str3) > 0)                              //If str1 comes after the dictionary than str3, it switches the two strings
	{
		strcpy(temp, str1);
		strcpy(str1, str3);
		strcpy(str3, temp);
	}
	if (strcmp(str2, str3) > 0)                              //If str2 comes after the dictionary than str3, it switches the two strings
	{
		strcpy(temp, str2);
		strcpy(str2, str3);
		strcpy(str3, temp);
	}
	printf("\n\nOutput in the order in which it appears first in the dictionary : %s,%s,%s \n", str1, str2, str3);

	return 0;
}