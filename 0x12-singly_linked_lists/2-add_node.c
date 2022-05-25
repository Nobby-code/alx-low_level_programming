#include "lists.h"

/**
 *str_len - function that returns the length of a string
 *@s: the character string
 *
 *Return: the string
 *Description: This unction returns the length of an
 *input string
 */

int str_len(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 *add_node - a function that adds a new node at the beginning
 *of a list_t
 *@head: tha starting head
 *@str: the string to be added
 *
 * Return: the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = str_len(str);
	new->next = *head;
	*head = new;
	return (new);
}
