#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint2 - frees a list
 *@head: head of list
 *Return: void
 */


void free_listint2(listint_t **head);
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = *head->next;
		free(tmp);
	}
	*head = NULL;
}
