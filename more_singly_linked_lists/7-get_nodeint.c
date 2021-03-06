#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index - gets node at index
 *
 *@head: head of list
 *@index: node to get
 *Return: node or null if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
