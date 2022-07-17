#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - delete head
 *
 *@head: headlist delete
 *Return: value
 */

int pop_listint(listint_t **head)
{
	int r;
	listint_t *tmp;

	if (!head || !(*head))
		return (0);
	tmp = *head;
	*head = tmp->next;
	r = tmp->n;
	free(tmp);
	return (r);
}
