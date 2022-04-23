#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function to concatenate string
 * @dest: agrgument
 *@src: argument
 *Return: return dest if success
 */

char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;
	while (dest[c1])
	{
		c1++;
	}
	for (c2 = 0; src[c2] != 0, c2++)
	{
		dest[c1] = src[c2];
		c1++;

	}
	dest[c1] = '\0';

	return (dest);
}
