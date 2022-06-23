#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 *free_grid - free a 2d grid
 *
 *@grid: grid to free
 *@height: height of grid
 *Return: void
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
