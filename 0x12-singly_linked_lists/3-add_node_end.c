#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string parameter
 *
 * Return: integer value
*/
int _strlen_recursion(const char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * *add_node_end - adds a new node at the beginning of a list
 * @head: address of singly linked list
 * @str: srting data of node
 *
 * Return: address of the new element or NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *holder;
	unsigned int len;

	len = _strlen_recursion(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	holder = *head;
	while (holder->next != NULL)
		holder = holder->next;
	holder->next = new;
	return (new);
}

