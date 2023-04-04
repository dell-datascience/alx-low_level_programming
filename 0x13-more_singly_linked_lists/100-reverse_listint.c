#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - ireverses a listint_t linked list
 * @head: pointer to point of singly linked list
 *
 * Return: returns the sum of all the data (n) of a listint_t linked list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *previous, *next;

	previous = NULL;
	next = NULL;
	current  = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	return (*head);
}
