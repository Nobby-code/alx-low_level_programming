#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *_calloc - to allocate memory for an array of elements
 *@nmemb: the number of elements
 *@size: the size in bytes
 *
 * Return: return memory allocated if success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	ptr = calloc(nmemb, size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
	free(ptr);
}
