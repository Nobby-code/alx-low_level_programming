#include "hash_tables.h"

/**
 * hash_table_get - retrieve data associated with the key
 *
 *@ht: the table
 *@key: the key
 *
 * Return: returns the value retrieved
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *temp;

	temp = NULL;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];

	if (temp != NULL)
	{
		while (strcmp(temp->key, key) != 0)
		{
			temp = temp->next;
		}
		return (temp->value);
	}

	return (NULL);
}
