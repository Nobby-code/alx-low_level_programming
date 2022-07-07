#include "lists.h"

/**
 *free_dlistint - function to free node list
 *@head: pointer to the header
 *
 *Return: freed memory
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node, *freed_node;

	if (head != NULL)
	{
		node = head;
		freed_node = head->next;
		while (freed_node)
		{
			free(node);
			node = freed_node;
			freed_node = freed_node->next;
		}
		free(node);
	}
}
