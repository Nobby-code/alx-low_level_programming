#include <unistd.h>

/**
 *-Putchar - function to print to the standard output
 *@c: the characters to be printed to the standard output
 *
 *Return: return 1 if success, -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
