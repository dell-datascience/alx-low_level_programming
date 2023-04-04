#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to singly linked list
 *
 * Return: returns the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *holder;
	int n;

	if (*head == NULL)
		return (0);

	holder = (*head);
	*head = holder->next;
	n = holder->n;
	free(holder);
	return (n);
}
