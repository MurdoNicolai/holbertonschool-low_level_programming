#include <stdlib.h>
#include <stddef.h>
#include <string.h>
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

	array = (int **) malloc(width * sizeof(int));

	if (!array)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int));
		if (!array[i])
			return (NULL);
	}
	if (!array)
		return (NULL);
	for (i = 0; i <= height; i++)
	{
		for (j = 0; j <= width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
