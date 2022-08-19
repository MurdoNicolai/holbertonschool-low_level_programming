#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 *
 * @ht: hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	int d = 0;


	if (!ht)
	{
		printf("\n");
		return;
	}
	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			if (d)
				printf(", ");
			printf("'%s': '%s'", p->key, p->value);
			p = p->next;
			d = 1;
		}
	}
	printf("}\n");
}
