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
	int dlen = 0, i;

	while (dlen[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
