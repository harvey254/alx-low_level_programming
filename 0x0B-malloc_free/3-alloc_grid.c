#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - 
 * @width
 * @height
 * Return:
 */

int **alloc_grid(int width, int height) {
    // If width or height is 0 or negative, return NULL
    if (width <= 0 || height <= 0) {
        return NULL;
    }

    // Allocate memory for the 2D array of integers
    int **grid = (int**) malloc(sizeof(int*) * height);
    if (grid == NULL) {
        return NULL;
    }
    for (int i = 0; i < height; i++) {
        grid[i] = (int*) malloc(sizeof(int) * width);
        if (grid[i] == NULL) {
            // Free previously allocated memory before returning NULL
            for (int j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }
        // Initialize each element of the grid to 0
        for (int j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}

