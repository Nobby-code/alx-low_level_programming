#include <unistd.h>

/**
 *_putchar - is a function to print a character
 *@c: the character to be printed
 *
 *Return: return 1 if successful, -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
