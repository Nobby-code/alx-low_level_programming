#include "main.h"

/**
 *_strlen_recursion - to print the length of a string
 *@s: string to print its length
 *
 *Return: string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == 0)
	{
		return (0);
	}
	length = _strlen_recursion(s + 1);
	return (length);
}
