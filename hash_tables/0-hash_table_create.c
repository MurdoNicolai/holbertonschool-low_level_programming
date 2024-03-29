#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - create an empty hash table
 * @size: size of table to create
 * Return: NULL or the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));
	hash_node_t **Narray = calloc(size, sizeof(hash_node_t *));

	if (!new || !Narray)
		return (NULL);
	new->size = size;
	new->array = Narray;
	return (new);
}
