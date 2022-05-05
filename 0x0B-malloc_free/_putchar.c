#include <unistd.h>

/**
 *_putchar - To print character to the standard output
 *@c: charater to be printed to the standard output
 *
 *Return: 1 on success, -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
