#include <stdlib.h>

/**
 *malloc_checked - malloc but emmidiatly verifies if it worked
 *
 *@b: amount of memory to allocate
 *Return: pointer to allocated memory
 */



void *malloc_checked(unsigned int b)
{
	int *res = malloc(b);

	if (!res)
	{
		exit(98);
	}
	return (res);
}
