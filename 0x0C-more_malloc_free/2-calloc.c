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
	void *ptr;

	int len = 0, i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	len = nmemb * size;
	ptr = malloc(len);
	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < len)
	{
		ptr[i] = '\0';
		i++;
	}

	return (ptr);
}
