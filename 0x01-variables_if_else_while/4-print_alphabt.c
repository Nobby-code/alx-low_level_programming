#include <stdio.h>
/**
 * main - entry point of the program
 *
 *Return: 0 after executing the functon
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
return (0);
}
