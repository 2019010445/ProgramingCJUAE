#include <stdio.h>
#include <string.h>

#define MYPASSWORD "0532"                       //password ����
#define arraysize 50                            //�迭�� ũ�� 50���� ����

int main(void)
{
	char password[arraysize] = MYPASSWORD;      //password �迭�� ���� �ʱⰪ ����
	char input[arraysize];                      //���� �Է��� password�� �迭 ����

	printf("Input your password : ");           //Input your password ���
	scanf_s("%s", input, 50);                   //���� �Է��� ��й�ȣ �Է�


	while (1)                                   //�´� ��й�ȣ�� �Է��� �� ���� �ݺ�
	{
		if (strcmp(password, input) == 0)       //�Է��� ���� ���� ��
			break;                              //27������ �̵�
	
		
			printf("Not matched. Retry \n");    //�ʱⰪ�� �Է°��� ���� ������ "Not matched. Retry"�� ���

			scanf_s("%s", input, 50);           //��й�ȣ ���Է�
	}

	printf("Normal termination");               //�ʱⰪ�� �Է°��� ��ġ�ϸ� "Normal termination"���

	return 0;
}