
#include "lists.h"

/**
 *pop_listint - function to remove from front a node
 *@head: head pointer
 *
 * Return: the remaining nodes
 */

int pop_listint(listint_t **head)
{
	int node_val;
	listint_t *first_node;

	if (*head == NULL)
		return (0);


	first_node = *head;
	node_val = (*head)->n;
	*head = (*head)->next;
	free(first_node);
	return (node_val);
}
