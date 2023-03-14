#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - caoncatenates s1 and s2
 * @s1: string one
 * @s2: string two
 *
 * Return concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *array;
	char h;
	int i;
	int j;
	char empty[1];

	empty[0] = '\0';


	array = malloc(sizeof(*s1) + sizeof(*s2) - sizeof(h));

	if (s1 == NULL)
	{
	*s1 = empty[0];
	}

	if (s2 == NULL)
	{
	*s2 = empty[0];
	}

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
