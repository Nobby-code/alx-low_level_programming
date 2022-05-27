
#include "lists.h"

/**
 *get_nodeint_at_index - getting the node at a given ines
 *@head: head pointer
 *@index: the index of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *new_node;

	new_node = head;

	i = 0;
	while (new_node)
	{
		if (i != index)
		{
			new_node = new_node->next;
		}
		return (new_node);
		i++;
	}
	return (NULL);
}
