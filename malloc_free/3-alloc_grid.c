#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 *free_grid2 - free a 2d grid
 *
 *@grid: grid to free
 *@height: height of grid
 *Return: void
 */

void free_grid2(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

/**
 *alloc_grid - creates a 2 dimentional array with zeros
 *
 *@width: length of 1 dimentional array
 *@height: amount of 1 dementional arrays
 *Return: pointer to result
 */


int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **) malloc((height) * sizeof(char *));
	if (!array)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc((width) * sizeof(int));
		if (!array[i])
		{
			free_grid2(array, i + 1);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	if (!array)
	{
		free(array);
		return (NULL);
	}
	return (array);
}
