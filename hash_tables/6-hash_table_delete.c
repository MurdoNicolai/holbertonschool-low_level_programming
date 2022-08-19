#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	hash_node_t *next;

	if (!ht)
		return;
	for (i = ht->size - 1; i - 1 > 0; i--)
	{
		p = ht->array[i];
		while (p)
		{
			next = p->next;
			free(p->key);
			free(p->value);
			free(p);
			p = next;
		}
	}
	free(ht->array);
	free(ht);
}