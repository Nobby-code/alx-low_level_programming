#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - entry point of the program
 *
 *Return: 0 after printing the program
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastDig = n % 10;
if (lastDig > 5)
{
printf("The last digit of %d is %d and is greater than 5\n", n, lastDig);
}
else if (lastDig == 0)
{
printf("The last digit of %d is %d and is 0\n", n, lastDig);
}
else if (lastDig < 6 && lastDig !=0)
{
printf("The last digit of %d is %d and is less than 6 and not 0\n", n, lastDig);
}
return (0);
}
