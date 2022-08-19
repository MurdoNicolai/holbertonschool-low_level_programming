#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - retrieves the value assosiated with key
 * @ht: hashtable to retrieve frome
 * @key: key to use
 * Return: the founc value ot NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;

	if (!ht)
		return (0);
	tmp = ht->array[key_index((unsigned char *)key, ht->size)];
	for (; tmp; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}
	return (NULL);
}
