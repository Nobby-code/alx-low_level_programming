#include "lists.h"

/**
 *insert_at_index - function to insert node at a specific index
 *@h: pointer to the header node
 *@idx: the index where the node should be inserted
 *@n: the integer number to be inserted
 *Return: return the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;

	unsigned int count = 0;
	new_node = malloc(sizeof(dlistint_t));
	
	if ((new_node == NULL) || (!idx))
	{
        	return (NULL);
	}
	
	temp = *h;
	while(temp)
	{
		new_node->n = n;
		if (count == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			new_node->prev = temp;
			if (new_node->next != NULL)
			{
				new_node->next->prev = new_node;
			}
		}
		temp = temp->next;
		count++;
	}
	return (new_node);
}
