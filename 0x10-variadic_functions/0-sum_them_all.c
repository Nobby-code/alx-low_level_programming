
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

	unsigned int i;

	int sum = 0;

	va_list add;

	if (n == 0)
		return (0);

	va_start(add, n);


	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, const unsigned int);
	}

	va_end(add);
	return (sum);
}
