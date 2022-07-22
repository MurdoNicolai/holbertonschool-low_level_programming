#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_dlistint - sums a list
 *
 *@head: list to sum
 *Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
