#include "main.h"
/**
 *_strpbrk - searching a string
 *@s: source string
 *@accept: accepted characters
 *
 * Return: return s if true, null if false
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
