#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(30);
	hash_table_set(ht, "Iceland", "Reykjavik");
	printf("\n%ld\n",key_index((unsigned char *) "Iceland",ht->size));
	hash_table_print(ht);
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}