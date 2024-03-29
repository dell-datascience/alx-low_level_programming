#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - finds lenght of string
 * @s: input string
 *
 * Return: integer of string length
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}


/**
 * *str_concat - caoncatenates s1 and s2
 * @s1: string one
 * @s2: string two
 *
 * Return: concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	array = malloc(sizeof(char) * _strlen(s1) + sizeof(char) * _strlen(s2) + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(array + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(array + (strlen(s1) + j)) = *(s2 + j);
		j++;
	}
	return (array);
}
