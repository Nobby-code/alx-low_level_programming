
#include "lists.h"

/**
 *free_listint - function to free the list memory
 *@head: pointer  to the first node
 *
 * Return: no return value(void)
 */

void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	if (head)
	{
		current_node = head;
		next_node = head->next;

		while (next_node)
		{
			free(current_node);
			current_node = next_node;
			next_node = next_node->next;
		}
		free(current_node);
	}
}
