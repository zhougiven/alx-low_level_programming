#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid function.
 * @height: height of the grid.
 * @grid: variable.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
