#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - creates a variable of type dog
 *
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
 *Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc((strlen(name) + strlen(owner) + 2) + sizeof(float));

	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return (NULL);
	return (d);
}
