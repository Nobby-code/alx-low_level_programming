#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - create array ordered from min to max
 *@min: the minimum value
 *@max: the maximum value
 *
 * Return: If min > max or the func fails - NULL
 * Otherwise - a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);

}
