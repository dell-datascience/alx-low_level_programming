#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * add_nodeint - returns the number of elements in a linked listint_t list
 * @head: pointer to point of singly linked list
 * @n: integer value of node
 *
 * Return: number of node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
