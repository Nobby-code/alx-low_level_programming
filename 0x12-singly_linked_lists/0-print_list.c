#include "lists.h"

/**
 *print_list - function to return the number of nodes
 *@h: the pointer to nodes
 *
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		i++;

		h = h->next;
	}

	return (i);
}
