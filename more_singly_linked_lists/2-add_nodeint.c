#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint - adds a node
 *
 *@head: head of list
 *@str: string to add in node
 *Return: list lenght
 */


listint_t *add_nodeint(listint_t **head, const char *str)
{
	listint_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
