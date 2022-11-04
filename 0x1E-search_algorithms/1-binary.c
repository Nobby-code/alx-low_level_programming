#include "search_algos.h"

/**
 * binary_search - funrion to use binarysearch algorithm
 * @array: the array to search the value from
 * @size: length of the array
 *@value: the value to search from the array
 *
 *Return: return the index of the value, or -1 if absent
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid, i;

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			i < right ? printf("%d, ", array[i]) : printf("%d\n", array[i]);
		}

		mid = (left + right) / 2;

		if (value == array[mid])
		{
			return (mid);
		}

		else if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
