#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *pop_listintn - delete head
 *
 *@head: headlist delete
 *Return: value
 */

int pop_listint(listint_t **head)
{
	int r = *head->n;
	listint_t *tmp;

	if (!head)
		return (0);
	tmp = *head;
	*head = *head->next;
	free(tmp);
	return (r);
}
