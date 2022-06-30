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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(strlen(name) + 1);
	if (!(dog->name))
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(strlen(owner) + 1);
	if (!(dog->owner))
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}

	strcpy(dog->owner, owner);
	strcpy(dog->name, name);
	dog->age = age;
	return (dog);
}
