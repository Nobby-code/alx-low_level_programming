#include "main.h"
/**
 *_isupper - evaluates if a letter is uppercase
 *@c: the argument character to be printed
 *
 *Return: Always 0 success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
