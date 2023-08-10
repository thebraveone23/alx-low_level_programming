#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free a 2-dimensional array.
 * @grid: a pointer to 2-d grid.
 * @height: the hieght array of grid.
 *
 * Return: null
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
