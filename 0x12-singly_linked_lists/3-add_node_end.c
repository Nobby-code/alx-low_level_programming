#include "lists.h"

/**
 *_strlen - function to return the string length
 *@s: the string charcaters
 *
 *Return: return the count
 */

int _strlen(const char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 *add_node_end - function to add a new node at the end of the list
 *@head: the head pointer
 *@str: the string to be printed
 *
 *Return: return the string
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		list_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
	}
	return (newNode);

}
