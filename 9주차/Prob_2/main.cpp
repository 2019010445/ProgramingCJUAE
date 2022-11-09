#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];                                                          //Array to enter a string
	char res_str[80];                                                      //Array to store abbreviated strings
	const char *star = "**********";                                       //String to populate the ellipsis
	int len;                                                               //Archive length of input string
	printf("Enter word : \n");
	scanf_s("%s", str, 80);
	len = strlen(str);                                                     //Calculating the length of a word entered
	if (len <= 5)                                                          //Copy as is if length is less than 5
	{
		strcpy(res_str, str);
	}
	else                                                                   //If the length is greater than 5
	{
		strncpy(res_str, str, 5);                                          //First, copy only five characters
		res_str[5] = '\0';                                                 //Save NULL characters at the end
		strncat(res_str, star, len - 5);                                   //Fill the string with a star
	}
	printf("Input word : %s, Omission word : %s\n", str, res_str);
	return 0;
}