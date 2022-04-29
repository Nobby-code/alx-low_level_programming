#include "main.h"

/**
 *factorial - gets the factorial of a number n
 *@n: the integers to get the factorial of
 *
 *Return: 1 if n=0 otherwise factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
