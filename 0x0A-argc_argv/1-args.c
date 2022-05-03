#include "main.h"
#include <stdio.h>

/**
 *main - the program entry point
 *@argc: the number of arguments
 *@argv: vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (i = 0; *argv; i++, argv++)
		{
			;
		}
		printf("%d\n", i - 1);
	}

	return (0);
}
