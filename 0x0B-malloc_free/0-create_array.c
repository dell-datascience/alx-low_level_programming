#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create an array of chars
 * @size: parameter one
 * @c: parameter two
 *
 * Return: a pointter to an array or NULL if otherwise
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));

	if (!size)
	{
	return (NULL);
	}

	if (array == NULL)
	{
	return (NULL);
	}
	i = 0;

	while (i <  size)
	{
	array[i] = c;
	i++;
	}
	return (array);
}
