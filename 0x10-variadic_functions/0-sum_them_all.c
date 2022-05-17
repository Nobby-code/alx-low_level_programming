
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *sum_them_all - function to add args using vardiadic func
 *@n: humber of argumentd
 *
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list add;

	va_start(add, n);

	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, int);
	}

	va_end(add);
	return (sum);
}
