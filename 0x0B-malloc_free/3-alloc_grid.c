#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - It allocates memory for a 2 dimenssional array of inegers.
 * @width: It is the width of the array.
 * @height: It is the height of the array.
 *
 * Return: a pointer to the allocated array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	grid[0] = calloc(width * height, sizeof(int));
	if (grid[0] == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (int i = 0; i < height; i++)
	{
		grid[i] = grid[0] + width * i;
	}

	return (grid);
}
