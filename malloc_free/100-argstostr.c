#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 *argstostr - concatenates all arguments into a single string
 *
 *@av: array of arguments
 *@ac: number of arguments
 *Return: pointer to array or NULL if fail
 */



char *argstostr(int ac, char **av)
{
	char *array;
	unsigned int size = 0;
	int i;
	unsigned int j;

	array = (char *) malloc(size * sizeof(char));
	if (!av || ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		size += strlen(av[i]) + 1;
		array = (char *) realloc(array, (size) * sizeof(char));
		if (!array)
			return (NULL);
		for (j = 0; j <= strlen(av[i]); j++)
		{
			array[size - strlen(av[i]) + j - 1] = av[i][j];
			if (j == strlen(av[i]))
				array[size - 1] = 10;
		}
	}
	array = (char *) realloc(array, (size - i) * sizeof(char));
	array[size] = 0;
	return (array);
}
