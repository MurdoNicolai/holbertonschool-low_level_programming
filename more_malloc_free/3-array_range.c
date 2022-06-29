#include <stdlib.h>
/**
 *array_range - return an array of numbers betwin min and max
 *
 *@min: smallest number
 *@max: largest number
 *Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
		return (NULL);
	for (i = min; i <= max; i++)
		array[i - min] = i;
	return (array);
}
