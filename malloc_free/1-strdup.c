#include <stdlib.h>
#include <stddef.h>
/**
 *_strdup - initialises an aray of char with copy of given string
 *
 *@str: given string to copy
 *Return: poiter to array or NULL if fail
 */



char *_strdup(char *str)
{
	char *array;
	unsigned int size = strlen(str);
	unsigned int i;

	array = (char *) malloc(size * sizeof(char));
	if (size == 0 || !(array))
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = str[i];
	return (array);
}
