#include "lists.h"
#include <stdio.h>

/**
 * list_len - return number of  elements of a linked list_t list
 * @h: singly linked list
 *
 * Return: number of node
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
