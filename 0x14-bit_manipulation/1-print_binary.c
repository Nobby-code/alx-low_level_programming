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

void prinnt_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
	}

	else if(n == 1)
	{
		putchar('0' + 1);
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
