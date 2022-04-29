#include "main.h"

/**
 *prime2 - mae it possible to evaluate fron 1 to n
 *@a: first argument
 *@b: second argument
 *
 * Return: an integer
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}

/**
 *is_prime_number - to return prime
 *@n: function argument
 *
 *Return: return integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime2(n, 2));
}
