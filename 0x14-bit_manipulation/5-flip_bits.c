
#include "main.h"

/**
 *flip_bits - function to the number of bits you would need to flip
 *in order to get rom one number to another
 *@n: number for first input
 *@m: number for second input
 *
 * Return: returns the result in the second input
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip, val1, val2;

	flip = 0;

	while (!(n == 0 && m == 0))
	{
		val1 = n & 1;
		val2 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (val1 != val2)
			flip = flip + 1;
	}
	return (flip);

}
