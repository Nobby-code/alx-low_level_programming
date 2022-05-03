#include "main.h"

/**
 *_strlen - length of a string
 *@s: parameter
 *Return: returns an interger type
 *
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
