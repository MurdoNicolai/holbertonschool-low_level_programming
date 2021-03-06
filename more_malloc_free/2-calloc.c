#include <stdlib.h>
/**
 *_calloc - same as calloc: alocates memory and intialises it to 0
 *@nmemb: number of ellements
 *@size: size of 1 element
 *Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(nmemb * size);
	if (!res)
		return (0);
	for (i = 0; i < nmemb * size; i++)
		res[i] = 0;
	return (res);
}
