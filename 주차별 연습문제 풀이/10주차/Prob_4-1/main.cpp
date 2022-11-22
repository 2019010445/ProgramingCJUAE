#include <stdio.h>

struct marriage                                          //Declaration of Structure
{
	char name[20];                                       //Variable to store name
	int age;                                             //Variable to store age
	char sex;                                            //Variables to store gender
	double height;                                       //Variable to store keys
};

struct marriage m1 = { "Andy",22, 'm',187.5 };
struct marriage* mp = &m1;

int main(void)
{
	printf("name : %s\n", mp->name);
	printf("age : %d\n", mp->age);
	printf("sex : %c\n", mp->sex);
	printf("height : %.1lf\n", mp->height);

	return 0;
}