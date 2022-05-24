#include <unistd.h>

/**
 *_putchar - functtion to print to the standard output
 *@c: character to printed
 *
 *Return: returns 1 when success, -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
