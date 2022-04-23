#include "main.h"
/**
 * *_strcat - function to concatenate string
 * @dest: agrgument
 *@src: argument
 *Return: return dest if success
 */

char *_strcat(char *dest, char *src)
{
	char len1, len2;

	len1 = 0;
	while (dest[len1])
	{
		len1++;
	}
	for (len2 = 0; src[len2] != 0, len2++)
	{
		dest[len1] = src[len2];
		len1++;

	}
	dest[len1] = '\0';

	return (dest);
}
