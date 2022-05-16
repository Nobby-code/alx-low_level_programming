
#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - function to iterate an array
 *@array: the array to be iterated
 *@size: size of the array
 *@action: the pointer function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
