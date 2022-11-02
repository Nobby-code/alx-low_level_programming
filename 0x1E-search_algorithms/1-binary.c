#include "search_algos.h"

/**
 *print_array - function to print array with limits in left and right
 *@array: array to print
 *@left: left limit
 *@right: right limit
 *
 *Return: void (nothing)
 */

void print_array(int *array, size_t i, size_t size)
{

	printf("Searching in array: ");

	while (i < size)
	{
		if (i + 1 == size)
		{
			printf("%d ", array[i]);
		}
		else
		{
			printf("%d, ", array[i]);
		}
		i++;
	}
	printf("\n");
}

/**
 * binary_search: funrion to use binarysearch algorithm
 * array: the array to search the value from
 * size: length of the array
 *value: the value to search from the array
 *
 *Return: return the index of the value, or -1 if absent
 */

int binary_search(int *array, size_t size, int value)
{
	int left =  0, right = size - 1;
	int mid;

	while (left < right)
	{
		print_array(array, left, size);
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
