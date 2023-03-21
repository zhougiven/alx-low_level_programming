#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array of integers.
 * Each element of the grid should be initialised to 0.
 * The function should return NULL on failure.
 * If width or height is 0 or negative, return NULL.
 * @height: height of the grid.
 * @width: width of the grid.
 * Return: Pointer (Success).
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(grid[j]);
				j++;
			}
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
