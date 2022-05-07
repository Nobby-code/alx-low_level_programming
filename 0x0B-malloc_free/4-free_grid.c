#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - function to free up memory space
 *@grid: First argument
 *@height: Second aegument
 *
 *Return: return free space if successful
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
