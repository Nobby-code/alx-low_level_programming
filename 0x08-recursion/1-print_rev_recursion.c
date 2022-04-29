#include "main.h"
/**
 *_print_rev_recursion - function to print a reverse
 *@s: Characters to be reversed
 *
 *Return: void means success
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
