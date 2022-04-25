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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
