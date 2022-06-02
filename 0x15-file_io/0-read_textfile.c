
#include "main.h"
#include <stdlib.h>

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
	ssize_t wf, of, rf;

	if (filename == NULL)
		return (0);
	mem = malloc(sizeof(char) * letters);

	if (mem == NULL)
		return (0);

	of = open(filename, O_RDONLY);
	rf = read(of, mem, letters);
	wf = write(STDOUT_FILENO, mem, rf);

	if (of == -1 || rf == -1 || wf == -1 || wf != rf)
	{
		free(mem);
		return (0);
	}
	free(mem);
	close(of);

	return (wf);
}
