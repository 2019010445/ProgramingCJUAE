#include <stdio.h>

int main(void)
{
	int hour, min, sec;    //Variables to store hours, minutes, and seconds
	double time = 3.76;    //Reset time

	hour= (int) time;     
	time -= hour;
	time *= 60.0;
	min = (int)time;
	time -= min;
	time *= 60.0;
	sec = (int)time;
	printf("3.76 hour is % d hour % d min % d sec.\n", hour, min, sec);

	return 0;

}