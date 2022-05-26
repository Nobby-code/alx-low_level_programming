
#include "lists.h"

/**
 *print_listint - function to print items in the list
 *@h: the h struct to be printed
 *
 *Description: This function is a linked list to print
 *all the items in the list using printf function
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->n == '\0')
			printf("NULL");
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
