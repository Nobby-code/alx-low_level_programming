#include "main.h"
/**
 *_islower - Entry point, takes int c as the argument
 *int c - Argument for the function
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
