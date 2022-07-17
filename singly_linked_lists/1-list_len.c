#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - retrun listlentgh
 *
 *@h: list to evaluate
 *Return: amount of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
