#include <unistd.h>

/**
 *_putchar - function to print to the standard output
 *@c: characters to be printed
 *
 *Return: 1 on success, -1 on failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1);
}
