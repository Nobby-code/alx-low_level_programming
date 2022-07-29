#include  "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 *
 * @size: size of the hash table
 * Return: the pointer to the created hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	unsigned long int i;

	/* table creation */
	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;

	ht->array = malloc(sizeof(hash_table_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}

	return (ht);
}
