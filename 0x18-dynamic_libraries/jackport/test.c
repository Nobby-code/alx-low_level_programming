#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *printf - function to inject
 *@format: the text format
 *
 *Return: result
 */
int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 + 9\n", 17);
 	write(1, "\nCongratulations, you won the Jackpot!", 37);
	exit(EXIT_SUCCESS);
}
