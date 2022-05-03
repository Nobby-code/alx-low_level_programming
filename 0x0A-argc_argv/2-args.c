#include "main.h"
#include <stdio.h>

/**
 *main - function entry point
 *@argc: arguments count
 *@argv: the actual arguments
 *
 *Return: return the arguments
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
