#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length of string
 * @s: string
 *
 * Return: integer value of string length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}

	return (i);
}

/**
 * argstostr - concatenates all arguments of program
 * @ac: argument count
 * @av: argument value
 *
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, total_size = 0;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}

	/* calculate total size of concatenated string */
	for (i = 0; i < ac; i++)
	{
	total_size += _strlen(*(av + i));
	}

	/* allocate memory for result string */
	result = malloc(sizeof(char) * (total_size + ac + 1));
	/* add 1 for null terminator*/

	if (result == NULL)
	{
	return (NULL);
	}

	/* concatenate strings into result string */
	for (i = 0; i < ac; i++)
	{
	for (j = 0; j < _strlen(*(av + i)); j++)
	{
	*(result++) = *(*(av + i) + j);
	}

	*(result++) = '\n';
	}

	*(result - 1) = '\n';
	/* replace last space with null terminator*/

	return (result - total_size - ac);
	/* return pointer to start of concatenated string*/
}


