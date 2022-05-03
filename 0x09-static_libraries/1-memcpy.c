#include "main.h"
/**
 *_memcpy - copying a memory area
 *@dest: destination of the copied area
 *@src: location to be copied
 *@n: size of characters to be copied
 *
 *Return: return the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
