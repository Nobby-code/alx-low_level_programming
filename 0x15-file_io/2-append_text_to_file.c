#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *append_text_to_file - a function that appends text at the
 *end of a file
 *@filename: the name of the file to be appended to
 *@text_content: the string to be added at the end of the file
 *
 * Return: returns 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, wf;

	if (filename == NULL)
		return (-1);
	i = 0;

	while (text_content)
	{
		if (text_content[i] != '\0')
		{
			i++;
		}
		else
		{
			return (-1);
		}
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wf = write(fd, text_content, i);

	if (fd == -1 || wf == -1)
		return (-1);
	close(fd);
	return (1);
}

int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage %s filename text\n", av[0]);
		exit(1);
	}
	res = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n" , res);
	return (0);
}
