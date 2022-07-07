#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *dlistint_len - function to print length of the list
 *@h: pointer to the list
 *
 *Return: return the count
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
