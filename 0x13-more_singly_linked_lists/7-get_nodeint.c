#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - deletes the head node of a listint_t linked list.
 * @head: pointer to singly linked list
 * @index: index of node starting from 0
 *
 * Return: returns the head node’s data (n)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;

	if (head == NULL)
		return (NULL);

	while (n < index)
	{
		head = head->next;
		n++;

		if (head == NULL)
			return (NULL);
	}
	return (head);
}

