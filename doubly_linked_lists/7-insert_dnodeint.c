#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - gets node at index
 *
 *@h: head of list
 *@idx: node to get
 *@n: value of node
 *Return: node or null if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t count = 0;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;



	if (newNode == NULL)
	{
		return (NULL);
	}
	if (*h == NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}
	while (tmp != NULL)
	{
		if (idx == 0)
		{
			newNode->n = n;
			newNode->next = tmp;
			newNode->prev = NULL;
			tmp->prev = newNode;
			*h = newNode;
			return (newNode);
		}
		if (count == idx - 1)
		{
			newNode->n = n;
			newNode->prev = tmp;
			newNode->next = tmp->next;
			tmp->next = newNode;
			if(newNode->next != NULL)
				(newNode->next)->prev = newNode;
			return (newNode);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
