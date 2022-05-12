#include <unistd.h>

/**
 *_putchar - to print tothe standard output
 *@c: the character to be printed to the standard output
 *Return: returns 1 if success, -1 otherwise
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
