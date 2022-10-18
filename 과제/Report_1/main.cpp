#include <stdio.h>
#include <string.h>

#define MYPASSWORD "0532"                       //password 정의
#define arraysize 50                            //배열의 크기 50으로 설정

int main(void)
{
	char password[arraysize] = MYPASSWORD;      //password 배열에 대해 초기값 설정
	char input[arraysize];                      //내가 입력할 password의 배열 설정

	printf("Input your password : ");           //Input your password 출력
	scanf_s("%s", input, 50);                   //내가 입력할 비밀번호 입력


	while (1)                                   //맞는 비밀번호를 입력할 때 까지 반복
	{
		if (strcmp(password, input) == 0)       //입력한 값이 같을 때
			break;                              //27행으로 이동
	
		
			printf("Not matched. Retry \n");    //초기값과 입력값이 같지 않으면 "Not matched. Retry"를 출력

			scanf_s("%s", input, 50);           //비밀번호 재입력
	}

	printf("Normal termination");               //초기값과 입력값이 일치하면 "Normal termination"출력

	return 0;
}