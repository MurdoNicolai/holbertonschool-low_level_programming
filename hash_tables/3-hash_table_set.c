#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 *
 * @ht: the hash table
 * @key: key
 * @value: value to but in table
 * Return: 1 or 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int keyID = key_index((unsigned char *)key, ht->size);
	hash_node_t *new = malloc(sizeof(hash_node_t));

	new->key = malloc(sizeof((char *)key));
	new->value = malloc(sizeof((char *)value));
	if (!(new) || !(new->key) || !(new->value))
		return (0);
	strcpy(new->value,(char *)value);
	strcpy(new->key,(char *)key);
	if (1/*!ht->array[keyID]*/)
	{
		new->next = NULL;
		ht->array[keyID] = new;
		return (1);
	}
	new->next = ht->array[keyID];
	ht->array[keyID] = new;
	return (1);
}
