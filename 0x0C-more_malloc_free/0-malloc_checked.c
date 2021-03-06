#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - a function to allocate memory using malloc
 *@b: function argument
 *
 *Return: returns the pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
