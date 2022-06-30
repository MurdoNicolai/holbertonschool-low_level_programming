#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *free_dog - frees a variable of type dog
 *
 *@d: pointer to free
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
