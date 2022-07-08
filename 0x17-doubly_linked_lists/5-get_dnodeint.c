
#include "lists.h"

/**
 *get_dnodeint_at_index - function to get node as specific pos
 *@head: the pointer to the head node
 *@index: the index of the node
 *
 *Return: return the temp
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count;

	count = 0;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}

	return (NULL);
}
