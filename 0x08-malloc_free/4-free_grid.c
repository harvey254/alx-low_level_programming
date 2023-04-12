#include <stdlib.h>
#include "main.h"
/**
 * free_grid - 
 * @grid:
 * @height
 */

void free_grid(int **grid, int height) {
    // Free memory for each row of the 2D array
    for (int i = 0; i < height; i++) {
        free(grid[i]);
    }

    // Free memory for the array of integer pointers
    free(grid);
}

