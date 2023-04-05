#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to point of singly linked list
 * @idx: index to insert node
 * @n: value of node
 *
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *holder;
	unsigned int i;

	i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		holder = *head;

		while (i <  idx - 1 && holder != NULL)
		{
			holder = holder->next;
			i++;
		}
		new->next = holder->next;
		holder->next = new;
	}

	if (idx == 0)
	{
		new->next =  *head;
		(*head) = (new);
		return (new);
	}

	return (new);

}
