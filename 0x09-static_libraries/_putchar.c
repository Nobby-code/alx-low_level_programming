#include <unistd.h>
/**
 *_putchar - writes character c to stdout
 *@c: the character to print
 *
 *Return: 0 on success, -1 on error 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
