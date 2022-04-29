#include "main.h"

/**
 *_puts_recursion - function to print out characters
 *@s: char to be printed
 *
 *Return: return void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s++);
}
