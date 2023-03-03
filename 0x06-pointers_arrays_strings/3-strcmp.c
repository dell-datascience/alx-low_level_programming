#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings
 * @s1: destination string
 * @s2: source string
 *
 * Return: -15 if s1 < s2, 15 if s1 > s2, or 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	
	j = s1[i] - s2[i];

	return (j);
}
