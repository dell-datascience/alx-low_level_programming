#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - free list_t
 * @head: address of singly linked list
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
