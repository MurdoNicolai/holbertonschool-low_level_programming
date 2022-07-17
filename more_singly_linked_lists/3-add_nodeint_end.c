#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_node_end - adds a node
 *
 *@head: head of list
 *@str: string to add in node
 *Return: list lenght
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (newNode);
}
