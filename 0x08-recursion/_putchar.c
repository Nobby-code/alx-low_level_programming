#include <unistd.h>

/**
 *_putchar - print character to the standard output
 *@c: character to be printed
 *
 * Return: return 1 if success, -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
