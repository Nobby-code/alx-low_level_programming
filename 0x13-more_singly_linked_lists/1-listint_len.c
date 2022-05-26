
#include "lists.h"

/**
 *listint_len - function t return the number of elements in a link
 *@h: header
 *
 *Return: return the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
