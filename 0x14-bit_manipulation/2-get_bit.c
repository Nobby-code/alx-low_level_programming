
#include "main.h"
#include <stdio.h>

/**
 *get_bit - Function to return the value of a bit
 *at a given index
 *@n: the integer number
 *@index: the position of the value n
 *
 * Return: the value or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	n = (n >> index);
	return (n & 1);
}
