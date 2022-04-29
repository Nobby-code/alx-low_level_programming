#include "main.h"

/**
 *_pow_recursion - function to print power of a number
 *@x: base value
 *@y: superscript
 *
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(int x, int y - 1));
}
