#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to point of singly linked list
 *
 * Return: returns  number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *holder;
	long int delta;
	size_t i;

	i = 0;
	holder = head;
	while (holder != NULL)
	{
		delta = holder - holder->next;
		printf("[%p] %d\n", (void *)holder, holder->n);

		i++;
		if (delta > 0)
			holder = holder->next;
		else
		{
			printf("-> [%p] %d\n", (void *)holder->next, holder->next->n);
			break;
		}
	}

	return (i);
}
