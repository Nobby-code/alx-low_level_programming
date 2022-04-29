#include "main.h"

/**
 *_sqrt_recursion - function to return sqrt
 *@n: digit to get  its squareroot
 *
 *Return: sqrt
 */

int _sqrt_recursion(int n)
{
	int a;

	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n || a * a < n)
	{
		return (-1);
	}
	return (_sqrt_recursion(n - 1));
}
