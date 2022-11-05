#include "search_algos.h"
#include <math.h>

/**
 *jump_search - searching using jump search algorithm
 *@array: the array to search for
 *@size: the array size
 *@value: the value to search for
 *
 * Return: returns the searched value, -1 if none
 */


int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t jump = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		i += jump;
		if (i >= size)
			break;
	}
	i -= jump;

	printf("Value found between indexes [%d] and [%d]\n",
			(int)i, (int)(i + jump));

	while (array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		i++;
		if (i == size)
			return (-1);
	}

	if (array[i] == value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		return (i);
	}
	return (-1);
}
