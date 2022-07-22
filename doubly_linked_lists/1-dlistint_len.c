#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - retrun listlentgh
 *
 *@h: list to evaluate
 *Return: amount of nodes
 */

size_t dlistint_len(const dlistint_t *h)
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
