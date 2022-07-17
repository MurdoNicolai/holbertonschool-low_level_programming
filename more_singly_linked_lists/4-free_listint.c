#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_list - frees a list
 *@head: head of list
 *Return: void
 */


void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
