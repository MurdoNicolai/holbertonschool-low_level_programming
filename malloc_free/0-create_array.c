#include <stdlib.h>
#include <stddef.h>
/**
 *create_array - initialises an aray of char with specified char
 *
 *@size: size of array
 *@c: char to fill array
 *Return: poiter to array or NULL if fail
 */



char *create_array(unsigned int size, char c)
{
	char* array;
	unsigned int i;

	if (size == 0 || !(array = (char*) malloc(size * sizeof(char))))
		return NULL;
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
