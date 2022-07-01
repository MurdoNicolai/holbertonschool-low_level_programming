#include <stdio.h>
#include <stdlib.h>
/**
 *array_iterator - uses a function on each element of array
 *@array: contains all inputs to function
 *@size: array length
 *@action: function to use
 *Return: void
 */



void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || !array)
		exit(1);
	for (i = 0; i < size; i++)
		action(array[i]);
}
