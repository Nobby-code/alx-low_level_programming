#include "main.h"
/**
 *_strchr - function that locates a character in a string
 *@s: string containing the character
 *@c: character to locate
 *
 * Return: s if found, null otherwise
 */

char *_strchr(char *s, char c)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (c == s[b])
		{
			s = s + b;
			return (s);
		}
	}
	return ('\0');

}
