#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - Functio to concatenate strings
 *@s1: First argument
 *@s2: Second argument
 *
 * Return: returns the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1 = 0, len2 = 0;

	char *ptr;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	len2++;

	ptr =  malloc(sizeof(char) * (len1 + len2));
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len2; i++, j++)
		ptr[i] = s2[j];

	return (ptr);

}
