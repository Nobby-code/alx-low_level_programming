
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *pprint_numbers - a function to print numbers
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

	va_list v_list;

	if (separator == NULL)
		s = "";


	va_start(v_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(v_list, unsigned int));
		if (i == n)
		{
			break;
		}

		printf("%s", s);
	}
	printf("\n");

	va_end(v_list);
}
