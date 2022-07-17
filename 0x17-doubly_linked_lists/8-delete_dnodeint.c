#include "lists.h"

/**
 *delete_dnodeint_at_index - function to delete node at an index
 *@head: the pointer to the head
 *@index: the position to delete from
 *
 *Return: the list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		temp->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp)
	{
		for (count = 0; count < index; count++)
		{
			temp = temp->next;
		}
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
	return (-1);
}
