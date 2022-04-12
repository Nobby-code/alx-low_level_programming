#include "main.h"
/**
 *_islowe - Entry point, returns 1 for lowercase, 0 for uppercase
 *
 *Return: 1 for lower, 0 for upper
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
