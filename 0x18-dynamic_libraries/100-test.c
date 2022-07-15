#include <stdio.h>
#include <stdlib.h>

/**
 *add - function to add two integers
 *@a: integer argument
 *@b: integer argument
 *
 *Return: result
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 *sub - function to get the difference of two integers
 *@a: first argument
 *@b: second argument
 *
 *Return: result
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 *mul - function to multiply two integers
 *@a: the first argument
 *@b: the second argument
 *
 * Return: result
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 *mod - modulus of two integers
 *@a: first argument
 *@b: second argument
 *
 *Return: result
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
