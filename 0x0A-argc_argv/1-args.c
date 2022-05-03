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
	int i, count = 0;

	for (i = 0 ; i < argc ; i++)
	{
		count = argc - 1;
	}
	printf("%d\n", count);

	return (0);
}
