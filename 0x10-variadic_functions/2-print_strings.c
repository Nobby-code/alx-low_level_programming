
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - function to print strings
 *@separator: string separator
 *@n: the number of strings
 *
 * Return: Always void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *s;

	va_list str;

	if (separator == NULL)
	{
		s = "";
	}

	s = (char *) separator;

	va_start(str, n);

	if (n > 0)
		printf("%s", va_arg(str, char *));

	for (i = 1; i < n; i++)
	{
		char *ptr;

		ptr = va_arg(str, char *);
		if (ptr == NULL)
			ptr == "(nil)";
		printf("%s%s", s, ptr);
	}
	printf("\n");
	va_end(str);
}

int main(void)
{
	print_strings(", ", 3, "Trecy", "Emma");
}
