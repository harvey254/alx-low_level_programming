#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2D grid
 * @grid: 2D grid
 * @height: height dimension
 * Return: no value
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

