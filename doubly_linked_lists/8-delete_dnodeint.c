#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes node at index
 *
 *@head: head of list
 *@index: node to get
 *Return: -1 if failed or 1 if successe
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *tmp = *head;
	dlistint_t *tmptmp;

	if (*head == NULL)
	{
		return (-1);
	}
	while (tmp != NULL)
	{
		if (index == 0)
		{
			*head = tmp->next;
			if ((tmp->next)->next != NULL)
				((tmp->next)->next)->prev = tmp;
			free(tmp);
			return (1);
		}
		if (count == index - 1)
		{
			tmptmp = tmp->next;
			tmp->next = tmptmp->next;
			if (tmptmp->next != NULL)
				(tmptmp->next)->prev = tmp;
			free(tmptmp);
			return (1);
		}
		tmp = tmp->next;
		count++;
	}
	return (-1);
}
