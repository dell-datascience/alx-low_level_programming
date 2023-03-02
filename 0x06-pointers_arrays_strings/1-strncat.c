#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenate two strings
 * @dest: parameter one
 * @src: parameter two
 * @n: parameter three
 *
 * Return: return concatenated char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len;

	dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}

