
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_file - function to create file
 *@filename: the name of the file to be created
 *@text_content: string to the file
 *
 * Return: returns 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, wf;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}

	wf = write(fd, text_content, i);

	if (fd == -1 || wf == -1)
	{
		return (-1);

	}
	close(fd);
	return (1);
}
