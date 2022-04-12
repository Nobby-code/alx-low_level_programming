#include "main.h"
/**
 *_abs - Entry of the function to return abs
 *@n: takes in an integer value
 *
 *Return: returns the integer n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
