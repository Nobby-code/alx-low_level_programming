#include <stdio.h>
/**
 * main - the entry point of the program
 *
 *Return: 0 after the program is run
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	
	return (0);
}
