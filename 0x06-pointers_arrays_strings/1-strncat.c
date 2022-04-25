#include "main.h"
/**
 **_strncat - function to concat
 *@dest: first argument
 *@src: second argument
 *@n: third argument
 *Return: Return dest if sucessfull
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}
	for (j = 0; src[j] < n; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
