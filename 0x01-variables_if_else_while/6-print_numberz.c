#include <stdio.h>
/**
 *main - program to print 0-9 using putchar
 *
 *Return: 0 - when the program runs successful
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
