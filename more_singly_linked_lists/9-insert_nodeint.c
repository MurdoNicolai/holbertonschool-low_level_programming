#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - gets node at index
 *
 *@head: head of list
 *@idx: node to get
 *@n: value of node
 *Return: node or null if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t count = 0;
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *tmp = *head;



	if (newNode == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		newNode->n = n;
		newNode->next = tmp;
		*head = newNode;
		return (newNode);
	}
	while (tmp != NULL)
	{
		if (idx == 0)
		{
			newNode->n = n;
			newNode->next = tmp;
			*head = newNode;
			return (newNode);
		}
		if (count == idx - 1)
		{
			newNode->n = n;
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
