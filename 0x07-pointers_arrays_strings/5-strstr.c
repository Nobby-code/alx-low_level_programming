#include "main.h"

/**
 *_strstr - function to search
 *@heystack: characters to search from
 *@needle: accepted characters
 *
 * Return: return heystack if true, NULL if no character
 */

char *_strstr(char *heystack, char *needle)
{
	int a =  0, b = 0;

	while (heystack[a])
	{
		while (needle[b])
		{
			if (heystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (heystack + a);
		}
		a++;
	}

	return ('\0');
}
