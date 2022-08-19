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
	unsigned long int keyID;
	hash_node_t *new;

	if (!ht)
		return (0);
	keyID = key_index((unsigned char *)key, ht->size);
	if (!ht->array[keyID])
	{
		new  = malloc(sizeof(hash_node_t));
		new->key = malloc(strlen(key) + 1);
		new->value = malloc(strlen(value) + 1);
		if (!(new) || !(new->key) || !(new->value))
			return (0);
		strcpy(new->value, (char *)value);
		strcpy(new->key, (char *)key);
		new->next = NULL;
		ht->array[keyID] = new;
		return (1);
	}
	for (new = ht->array[keyID]; new; new = new->next)
	{
		if (strcmp(new->key, key) == 0)
		{
			new->value = realloc(new->value, strlen(value) + 1);
			if (!(new->value))
				return (0);
			strcpy(new->value, (char *)value);
			return (1);
		}
	}
	new  = malloc(sizeof(hash_node_t));
	new->key = malloc(strlen(key) + 1);
	new->value = malloc(strlen(value) + 1);
	if (!(new) || !(new->key) || !(new->value))
		return (0);
	strcpy(new->value, (char *)value);
	strcpy(new->key, (char *)key);
	new->next = ht->array[keyID];
	ht->array[keyID] = new;
	return (1);
}
