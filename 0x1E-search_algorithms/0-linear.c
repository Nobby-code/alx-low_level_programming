#include "search_algos.h"

/**
 * linear_search - searching for an element in an array
 * @array: the array to search from
 * @size: the size of an array
 * @value: value to search
 *
 * Return: returns the index of the value, or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] ==  value)
			return (i);
	}
	return (-1);
}
