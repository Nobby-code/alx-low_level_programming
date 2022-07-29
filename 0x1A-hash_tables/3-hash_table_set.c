
#include "hash_tables.h"

/**
 *hash_table_set - Function to add element to the table
 *
 *@ht: pointer to the table where element shuld be added
 *@key: the pointer to the position where to add node
 *@value: the value to add
 *
 * Return: 1 on succes, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp = NULL, *new = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
