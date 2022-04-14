#include "main.h"
/**
 *largest_number - printing largest
 *@a: first argument
 *@b: second argument
 *@c: third argument
 *Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
