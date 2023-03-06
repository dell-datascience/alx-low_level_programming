#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string parameter
 * @c: character
 *
 * Return: pointer to the first occurence of c in string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
