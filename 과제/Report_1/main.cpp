#include <stdio.h>
#include <string.h>

#define MYPASSWORD "0532"                       //Password definition
#define arraysize 50                            //Set array to size 50

int main(void)
{
	char password[arraysize] = MYPASSWORD;      //Set initial value for password array
	char input[arraysize];                      //Set the array of passwords that I will enter

	printf("Input your password : ");           //print Input your password
	scanf_s("%s", input, 50);                   //Enter the password I'll enter


	while (1)                                   //Repeat until the correct password is entered
	{
		if (strcmp(password, input) == 0)       //When the entered values are the same
			break;                              //Go to line 27
	
		
			printf("Not matched. Retry \n");    //If the initial value and the input value are not the same, output "Not matched. Retry"

			scanf_s("%s", input, 50);           //Re-enter password
	}

	printf("Normal termination");               //Output "Normal termination" if the initial value matches the input value

	return 0;
}