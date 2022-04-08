#include <stdio.h>
/**
 *main - entry point of the program
 *
 *Reurn: 0 after printing the function
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar("%c", ch);
ch++;
}
return (0);
}
