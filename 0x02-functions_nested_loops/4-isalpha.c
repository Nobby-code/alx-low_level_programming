#include "main.h"
/**
 *_isalpha - Returns 1 if letters, 0 if digits
 *
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return  (1);
	}
	else
	{
		return (0);
	}
}
