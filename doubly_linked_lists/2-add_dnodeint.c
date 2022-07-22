#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_dnodeint - adds a node
 *
 *@n:  number to add in node
 *@head: first node of list
 *Return: list lenght
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	temp->prev = newNode;
	*head = newNode;
	return (newNode);
}
