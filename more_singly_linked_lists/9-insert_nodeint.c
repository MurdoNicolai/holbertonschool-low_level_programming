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



	if (newNode == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (count == index)
		{
			newNode->n = n;
			newNode->next = *head->next;
			*head->next = newNode;
			return (newNode);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
