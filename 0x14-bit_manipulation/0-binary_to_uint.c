#include <stdio.h>
#include <stdlib.h>

/**
 *binary_to_uint - function to convert binary to integer
 *@b: the pointer to character to be converted
 *
 *Return: returns the conveted value
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0, pow = 0;

	int i;

	i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
			value = value + pow;
		i--;
		pow = pow + pow;
	}
	return (value);
}
