#include "main.h"

/**
 *getSqrt - function to make getting squareroot possible
 *@a: first argument
 *@b: second argument
 *
 * Return: return an integer value of the square
 */

int getSqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (getSqrt(a, b + 1));
}


/**
 *_sqrt_recursion - function to return sqrt
 *@n: digit to get  its squareroot
 *
 *Return: sqrt
 */

int _sqrt_recursion(int n)
{
	return (getSqrt(n, 1));
}
