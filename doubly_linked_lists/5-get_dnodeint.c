#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - gets node at index
 *
 *@head: head of list
 *@index: node to get
 *Return: node or null if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
