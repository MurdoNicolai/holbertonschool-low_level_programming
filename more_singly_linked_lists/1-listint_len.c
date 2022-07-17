#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_len - retrun listlentgh
 *
 *@h: list to evaluate
 *Return: amount of nodes
 */

size_t listint_len(const listint_t *h)
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
