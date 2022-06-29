#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - dog description
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Description: basic structure to describe a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


/*dog_t *new_dog(char *name, float age, char *owner);*/
 /* void free_dog(dog_t *d);*/


#endif
