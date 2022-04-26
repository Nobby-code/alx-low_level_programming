#include <unistd.h>

/**
 *_putchar - printing a  character to the standard output 
 *@c: character to be printed
 *Return: returns 1 if success, -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
