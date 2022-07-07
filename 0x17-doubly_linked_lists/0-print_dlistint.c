
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_dlistint - print all the elements of a list
 *@h: pointer to the list
 *
 *Return: return the number of nodes
 *
 **/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;

	int count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;

		count++;
	}
	return (count);
}
