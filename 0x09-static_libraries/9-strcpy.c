#include "main.h"

/**
 **_strcpy - copy the string from source to destionation
 *@dest: a point to character that will be changed
 *@src: a point of character that will be copied
 *Return: character success
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
