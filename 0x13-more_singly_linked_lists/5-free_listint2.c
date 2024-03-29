#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to singly linked list
*/
void free_listint2(listint_t **head)
{
	listint_t *holder;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		holder = (*head)->next;
		free(*head);
		*head = holder;
	}
}
