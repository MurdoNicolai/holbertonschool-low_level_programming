#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_listint - prints a list
 *
 *@h: list to print
 *Return: amount of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
