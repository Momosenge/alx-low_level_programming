#include "main.h"
#include <stdlib.h>
/**
 * free_grid - It frees a 2 dimensional grid that was previously created.
 * @grid: It is a double pointer to an array of ints.
 * @height: is the number of rows in the grid.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		return;
	}
	if (grid[0] != NULL)
	{
		free(grid[0]);
	}
	free(grid);
}
