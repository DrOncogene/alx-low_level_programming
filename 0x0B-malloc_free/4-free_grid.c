#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees a previously created 2D grid
 * @grid: the grid
 * @height: height of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;				
	}
	free(grid);
}
