#include <stdio.h>
/**
 *main - entry point of the program to print hexadeximal
 *
 *Return: 0 when the function runs successfully 
 */
int main(void)
{
int num;
char letter;
for (num = 0; num <= 9; num++)
{
putchar(num + '0');
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
