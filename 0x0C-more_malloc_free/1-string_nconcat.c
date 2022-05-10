#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - function to concatenate two strings
 *@s1: destination st
 *@s2: source string
 *@n: Number of strings
 *
 * Return: returns the copied string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		l = i + j;
	else
		l = i + n;
	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (k < 1)
	{
		if (k <= i)
			ptr[k] = s1[k];
		if (k >= i)
		{
			ptr[k] = s2[j];
			j++;
		}
		k++;
	}

	ptr[k] = '\0';
	return (ptr);

}
