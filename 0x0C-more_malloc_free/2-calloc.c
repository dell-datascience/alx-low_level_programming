#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * *_calloc - allocates memory for an arrray using malloc
 * @nmemb: number of array elements
 * @size: bytes of each element
 *
 * Return: pointer to array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	array = calloc(size, nmemb);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	return (array);
}
