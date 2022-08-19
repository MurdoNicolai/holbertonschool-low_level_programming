#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));
	hash_node_t **Narray = malloc(sizeof(hash_node_t) * size);

	if (!new || !Narray)
		return (NULL);
	new->size = size;
	new->array = Narray;
	return (new);
}