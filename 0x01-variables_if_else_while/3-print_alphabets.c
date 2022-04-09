#include <stdio.h>
/**
 * main - the entry point of the program
 *
 *Return: 0 after the program is run
 */
int main(void)
{
chat ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
return (0);
}
