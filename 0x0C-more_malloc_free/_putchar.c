#include <unistd.h>

/**
 *_putchar - Function to print to the standard output
 *@c: the character to be printed
 *
 *Return: Return the character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
