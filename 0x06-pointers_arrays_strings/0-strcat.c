#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenate two strings
 * @dest: parameter one
 * @src: parameter two
 *
 * Return: return concatenated char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len;
	int src_len;

	dest_len = strlen(dest);
	src_len = strlen(src);

	for (i = 0; i < src_len && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}
