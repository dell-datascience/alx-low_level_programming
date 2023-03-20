#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _strlen - gets string length
 * @s2: string
 *
 * Return: integer lenght of string
*/
unsigned int _strlen(char *s2)
{
	unsigned int i;

	i = 0;

	while (*s2 != '\0')
	{
	s2++;
	i++;
	}
	return (i);
}

/**
 * *string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: integer parameter
 *
 * Return: pointer to new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int len1;
	unsigned int len2;
	unsigned int len_total;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
	{
	n = len2;
	}
	len_total = len1 + n;
	array  = malloc(sizeof(char) * (len_total + 1));
	if (array == NULL)
	{
	printf("malloc failed");
	return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
	*(array + i) = *(s1 + i);
	}
	j = 0;
	while (j < n && *(s2 + j) != '\0')
	{
	*(array + (len1 + j)) = *(s2 + j);
	j++;
	}
	*(array + len_total) = '\0';
	return (array);
}
