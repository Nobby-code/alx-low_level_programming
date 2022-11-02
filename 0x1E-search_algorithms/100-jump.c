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
	size_t i, low = 0;
	size_t jump = sqrt(size);

	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		else if (array[i] < value)
		{
			low = i;
		}
		else
		{
			break;
		}

		for (i = low; i < size; i++)
		{
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
