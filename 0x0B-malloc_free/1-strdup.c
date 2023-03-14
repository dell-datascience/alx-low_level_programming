#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns memory containing sting copy
 * @str: sting input
 *
 * Return: pointer containing string copy
*/
char *_strdup(char *str)
{
	char *array;
	int i;
	int j;

	j = 0;
	while (*(str + j))
		j++;
	j++;

	array = malloc(sizeof(char) * j);

	if (!str)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (*(str + i) != '\0')
	{
		*(array + i) = *(str + i);
		i++;
	}
	return (array);

}
