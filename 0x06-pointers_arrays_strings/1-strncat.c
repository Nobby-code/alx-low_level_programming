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
	int dlen, i;

	while (dest[dlen])
	{
		dlen++;
	}
	while (i < n && src[i])
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}
	dest[dlen + n + 1] = '\0';

	return (dest);
}
