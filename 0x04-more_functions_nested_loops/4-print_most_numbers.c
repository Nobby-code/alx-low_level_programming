#include "main.h"
/**
 *print_most_numbers - prints 0-9 except 2 and 4
 *@void: no function argument
 *
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
