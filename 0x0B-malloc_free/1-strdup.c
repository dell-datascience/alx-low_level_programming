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

	array = malloc(sizeof(str));

	if (str == NULL)
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
