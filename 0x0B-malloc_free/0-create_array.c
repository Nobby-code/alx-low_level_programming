#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function to create an array of characters
 *@size: the number of characters to be printed
 *@c: the actual character
 *
 * Return: return 0 on success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *buffer;
	
	buffer = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		buffer[i] = c;
	
	return (buffer);
}
	

/**
 *main - the program entry point
 *@void: No return type
 *
 *Return: Do not return anything
 *
 */
int main(void)
{
       
	char *val = create_array(98, 'H');

	printf("%s\n", val);	

	return (atoi(val));
}

