#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_binary - function to convert binary to decimal number
 *@n: the binary number to be converted
 *
 *Return: void, meaning no eturn value
 *
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	else if (n == 1)
	{
		putchar('1');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
