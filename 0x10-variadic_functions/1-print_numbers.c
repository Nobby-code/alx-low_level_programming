
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - a function to print numbers
 *@separator: character to separate numbers
 *@n: the number of characters
 *
 *Return: No return value
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *s;

	unsigned int i;

	va_list list;

	if (separator == NULL)
		s = "";

	s = (char *) separator;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(list, unsigned int), s);
	
		if (i == n)
			break;
	}
	printf("\n");

	va_end(list);
}
