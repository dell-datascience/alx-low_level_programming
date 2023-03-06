#include "main.h"
#include <string.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer parameter
 * @b: character parameter
 * @n: integer parameter
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);
}
