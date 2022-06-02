#include <unistd.h>

/**
 *_putchar - a function to print to the standard output
 *@c: characters to be printed to the standard output
 *
 *Return: 1 if succeee,, -1 on failure
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
