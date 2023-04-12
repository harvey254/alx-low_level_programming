#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - returns a pounter to 2D array of integers
 *@width: integer value
 *@height: integer value
 *Return: pointer to 2D array of integers, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **grid = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}

			free(grid);

			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}

	}

	return (grid);
}

