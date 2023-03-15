#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length of string
 * @s: string
 *
 * Return: integer value of string
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
 * @av: argumrnt value
 *
 * Return: point to a new string
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i;
	int j;
	int total_size;

	total_size = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_size += _strlen(*(av + i));
	}

	result = malloc(sizeof(char) * (total_size + ac + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(*(av + i)); i++)
		{
			*(result++) = *(*(av + i) + j);
		}
		*(result++) = '\n';
	}
	return (result - total_size - ac);
}
