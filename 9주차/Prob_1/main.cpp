#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];                                                 
	strcpy(str, "wine");                                          //Copy wine to str array
	strcat(str, "apple");                                         //Add apple after wine
	strncpy(str, "pear", 1);                                      //Copy only the first character from string pear to str
	printf("%s, %d\n", str, strlen(str));                         //Find the string and its length of the str array and output it
	return 0;
}

