#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sums of all the data (n) of a listint_t
 * @head: pointer to point of singly linked list
 *
 * Return: returns the sum of all the data (n) of a listint_t linked list.
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
