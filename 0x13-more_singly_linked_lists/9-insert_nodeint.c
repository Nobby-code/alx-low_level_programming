
#include "lists.h"

/**
 *insert_nodeint_at_index - a function that inserts a node at
 *a specific position
 *@head: the head pointer
 *@idx: the index position to add the node
 *@n: the value to be added
 *
 * Return: return the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *copy;
	unsigned int i;

	copy = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node = copy;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}

	new_node->next = copy->next;
	copy->next = new_node;

	return (new_node);

}
