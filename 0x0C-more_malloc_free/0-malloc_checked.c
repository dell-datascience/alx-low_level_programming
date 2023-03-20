#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocated memory using malloc
 * @b: integer parameter
 *
 * Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);

	if (array == NULL)
	{
	exit(98);
	}

	return (array);
}

