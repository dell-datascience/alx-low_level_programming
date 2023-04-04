#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list_t list
 * @h: singly linked list
 *
 * Return: number of node
*/
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
