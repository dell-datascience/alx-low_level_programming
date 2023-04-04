#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to point of singly linked list
 * @idx: index to insert node
 * 
 * Return: returns the sum of all the data (n) of a listint_t linked list.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{   
    listint_t *holder, *pop;
    unsigned int i;

    i = 0;

    if (*head == NULL)
        return (-1);

    holder = *head;
    if (index == 0)
    {
        (*head) = (*head)->next;
        holder->next = NULL;
        free(holder);
        return (1);
    }
    else 
    {
        for (i = 0; i < index - 1; i++)
        {
            holder = holder->next;
        }
        pop = holder->next;
        holder->next = holder->next->next;
        pop->next = NULL;
        free(pop);
        return (1);
    }
    return (-1);
    
}
