#include <stdio.h>
#include <stdlib.h>
/**
 *int_index - searches for an integer using a compare function
 *@array: array to search
 *@size: array length
 *@cmp: comparaison function
 *Return: return first place we find integer
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (!cmp || !array)
		return (-1);
	for (i = 0; i < size ; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
