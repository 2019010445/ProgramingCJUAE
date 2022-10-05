#include <stdio.h>

int rec_func(int n)             //Function that returns the sum of 1 to n
{
    if (n <= 0)                  //Return if the number of iterations is 0 or smaller than
        return 0;
    return n + rec_func(n - 1);
}

int main()
{
    int n;                 //Specify variables to enter

    printf("Enter a constant number to find the sum of 1 to a constant number (n) : ");
    scanf_s("%d", &n);

    int sum;                    //Specify variables to calculate

    sum = rec_func(n);
    printf("%d\n", sum);

    return 0;
}
