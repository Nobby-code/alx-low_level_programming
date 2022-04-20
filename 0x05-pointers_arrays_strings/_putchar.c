#include <unistd.h>

/**
 *_putchar - printing a character to the standard output
 *@c: character to print
 *Return: success 1, -1 on error
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
