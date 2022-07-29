#include "hash_tables.h"

/**
 *hash_table_print - function to print hash table
 *
 *@ht: hash table
 *
 *Return: the table and its content
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;

	hash_node_t *temp = NULL;
	int flag = 1;

	i = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];

			while (temp != NULL)
			{
				if (flag == 0)
				{
					printf(", ");
					printf("'%s': '%s'", temp->key, temp->value);
				}
				else
				{
					printf("'%s': '%s'", temp->key, temp->value);
					flag = 0;
				}
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
