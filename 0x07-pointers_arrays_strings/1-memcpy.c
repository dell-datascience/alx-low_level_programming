#include "main.h"
#include <string.h>

/**
 * *_memcpy - copies memeory areas
 * @dest: destination parameter
 * @src: source parameter
 * @n: integer parameter
 *
 * Return: destination parameter
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
