#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - add node at the end 
 * 
 *@head: head of list
 *@n num to add in node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
	}
	newNode->n = n;
	newNode->prev = temp;
	newNode->next = NULL;
	if (temp)
		temp->next = newNode;
	*head = newNode;
	return (newNode);
}