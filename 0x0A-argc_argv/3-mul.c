#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point of the program
 *@argc: Arguments count
 *@argv: The actual arguments received
 *
 * Return: returns 0 on success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i;

	int mul = 1;

	if (argc == 1  || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 3; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}

	return (0);
}
