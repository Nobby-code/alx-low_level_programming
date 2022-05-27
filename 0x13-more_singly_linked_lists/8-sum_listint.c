
#include "lists.h"

/**
 *sum_listint - function to add the nodes
 *@head: pointer to the first node
 *
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int total = 0;

	node = head;

	if (head == NULL)
		return (0);
	while (head)
	{
		total = total + head->n;
		node = head->next;
		head = node;
	}
	return (total);

}
