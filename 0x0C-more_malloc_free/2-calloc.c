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

	int len, i;

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

	for (i = 0; i < len; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}

int main(void)
{
	int *p = _calloc(20, 4);
	printf("%d", *p);
}
