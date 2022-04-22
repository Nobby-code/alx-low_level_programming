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
	int a, b;

	a = 0;
	b = 0;
	while (src[b])
	{
		b++;
	}
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
	}

	return (dest);
}
