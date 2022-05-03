#include "main.h"

/**
 *_strspn - searching for a string for a set of bytes
 *@s: string to count from
 *@accept: accept string
 *
 * Return: retutn counted number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	i = 0;
	while (accept[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				count++;
			}
			j++;
		}
		i++;
	}

	return (count);
}
