#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to singly linked list
*/
void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head != NULL)
	{
		holder = head->next;
		free(head);
		head = holder->next;
	}
}
