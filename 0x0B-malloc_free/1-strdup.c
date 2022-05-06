#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - function to return length
 *@s: char type
 *Return: length of the string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		return (a);
}
/**
 *_strdup - function that duplicates a string
 *@str: the string to be duplicated
 *
 *Return: to return the duplicated string if success
 */

char *_strdup(char *str)
{
	unsigned int i;
	int size;

	char *spc;

	if (str == NULL)
		return (NULL);
	size = _strlen(str) + 1;

	spc = malloc(size * sizeof(char));

	i = 0;
	while (i < size)
		if (spc == NULL)
			return (NULL);
		spc[i] = str[i];
		i++;
	return (spc);
}
