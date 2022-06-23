#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

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
			free(array[i]);
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

	return (array);
}
