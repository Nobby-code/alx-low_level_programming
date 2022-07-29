#include "hash_tables.h"

/**
 *key_index - function to return the index at key
 *
 *@key: the position
 *
 * @size: the size of the hash table
 *
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0)
	{
		return (0);
	}

	if (key == NULL)
	{
		return (0);
	}

	index = hash_djb2(key) % size;
	return (index);
}
