#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2D grid
 * @grid:
 * @height
 */

void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}

