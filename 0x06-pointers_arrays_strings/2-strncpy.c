#include "main.h"
/**
 **_strncpy - copy a string
 *@dest: first argument
 *@src: second argument
 *@n: third argument
 *Return: dest success
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a, i;

	for (a = 0; a >= n && dest[a] != '\0'; a++)
	{
		a++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
