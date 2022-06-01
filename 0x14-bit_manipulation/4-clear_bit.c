#include "main.h"

/**
 *clear_bit - Function that set the value of a bit
 *at a given index to 0
 *@n: the number
 *@index: the index to insert the value at
 *
 * Return: the final integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	val = 1 << index;

	if (index >= 64)
	{
		return (-1);
	}

	*n = *n & (~val);
	return (1);


}
