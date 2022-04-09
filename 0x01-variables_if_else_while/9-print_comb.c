#include <stdio.h>
/**
 *main - Entry point of the program to print 1-9
 *
 *return: 0 when the code runs successfully
 */
int main(void)
{
int i;
for (i = 0; i <= 9 ; i++)
{
	putchar(i + '0');
	putchar(',');
	putchar (" ");
}
putchar("\n");
return (0);
}
