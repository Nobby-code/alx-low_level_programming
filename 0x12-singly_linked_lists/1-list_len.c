#include "lists.h"

/**
 *list_len - print the length of a link
 *@h: length size
 *
 *Return: returns length
 */

size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
