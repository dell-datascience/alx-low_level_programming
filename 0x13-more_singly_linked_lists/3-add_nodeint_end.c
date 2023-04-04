#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * add_nodeint_end - returns the number of elements in a linked listint_t list
 * @head: pointer to point of singly linked list
 * @n: integer value of node
 *
 * Return: number of node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *holder;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	new->n = n;
	new->next = NULL;
	holder = *head;

	while (holder->next != NULL)
	{
		holder = holder->next;
	}
	holder->next = new;
	return (new);
}
