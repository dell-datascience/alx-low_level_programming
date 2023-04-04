#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to point of singly linked list
 * @idx: index to insert node
 * @n: value of node
 *
 * Return: returns the sum of all the data (n) of a listint_t linked list.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *holder;
	unsigned int i;

	i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
		holder = *head;

	while (i < idx - 1 && holder != NULL)
	{
		holder = holder->next;
		i++;
	}
	if (holder == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next =  *head;
		*head = new;
		return (new);
	}
	new->next = holder->next;
	holder->next = new;

	return (new);
}
