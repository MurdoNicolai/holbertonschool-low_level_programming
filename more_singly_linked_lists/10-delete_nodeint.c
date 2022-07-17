#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - deletes node at index
 *
 *@head: head of list
 *@index: node to get
 *Return: -1 if failed or 1 if successe
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t count = 0;
	listint_t *tmp = *head;
	listint_t *tmptmp;

	if (*head == NULL)
	{
		return (-1);
	}
	while (tmp != NULL)
	{
		if (index == 0)
		{
			*head = tmp->next;
			free(tmp);
			return (1);
		}
		if (count == index - 1)
		{
			tmptmp = tmp->next;
			tmp->next = tmptmp->next;
			free (tmptmp);
			return (1);
		}
		tmp = tmp->next;
		count++;
	}
	return (-1);
}
