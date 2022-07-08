
#include "lists.h"

/**
 *sum_dlistint - function to return elements of a list
 *@head: pointer to the head pointer of the list
 *
 *Return: retutn the sum
 *
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
