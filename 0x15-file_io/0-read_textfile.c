
#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stddef.h>

/**
 *read_textfile - function to read file
 *@filename: the name of the file to be written
 *@letters: the letterdrs in  a file
 *
 *Return: returns the letter
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *mem;
	ssize_t wf, of, rf, af;

	of = open(filename, O_RDONLY);
	rf = read(of, mem, letters);
	wf = write(STDOUT_FILENO, mem, rf);

	if (filename == NULL || mem == NULL)
		return (0);
	if ((of || rf || wf) == -1)
	{
		free(mem);
		return (0);
	}
	close(of);
	return (wf);
}

int main(int ac, char **av)
{
	return (0);
}
