#include "lists.h"

/**
 *
 *
 *
 *
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *copy, *new_node;
	unsigned int i;
	unsigned int count = (index - 1);

	copy = *head;
	if (copy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = *head->next;
		free(copy);
		return (1);
	}

	i = 0;
	while (i < count)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
		i++;
	}
	new_node = copy->next;
	copy->next = new_node->next;

	free(new_node);
	return (1);
}
