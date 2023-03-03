#include "main.h"
#include  "string.h"

/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: limit of src string
 *
 * Return: return destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = strlen(dest);

	for (i = 0; i < dest_len - 1 && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[dest_len] = '\0';
	return (dest);
}
