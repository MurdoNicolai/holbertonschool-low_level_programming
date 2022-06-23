#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 *_strdup - initialises an aray of char with copy of given string
 *
 *@str: given string to copy
 *Return: poiter to array or NULL if fail
 */



char *_strdup(char *str)
{
	char *array;
	unsigned int size;
	unsigned int i;

	if (!str)
		return (NULL);
	size = strlen(str) + 1;
	array = (char *) malloc(size * sizeof(char));
	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = str[i];
	return (array);
}
