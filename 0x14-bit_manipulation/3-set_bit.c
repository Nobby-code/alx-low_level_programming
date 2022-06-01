#include "main.h"

/**
 *set_bit - function to set the value of a it to a given number
 *@n: the number to be set
 *@index: the index too inset the number
 *
 *Return: 1 on success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	if (index >= 64)
		return (-1);

	val = 1 << index;
	*n = *n | val;
	return (1);
}
