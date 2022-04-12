#include "main.h"
/**
 *print_alphabet - Entry point of the program to print alphabet
 *
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
