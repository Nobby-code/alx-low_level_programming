#include "main.h"

/**
 *puts2 - prints every character of a string
 *@str: argument
 *Return: void means success
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (1 % 2 == 0)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
