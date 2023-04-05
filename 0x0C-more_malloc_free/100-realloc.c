#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to created array
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return ptr;
	}
	if (ptr == NULL || new_size > old_size)
	{
		free(ptr);
		return (new);
	}
	return (0);
}
