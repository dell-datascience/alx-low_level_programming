#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * *string_toupper - changes lowercase letter to uppercase
 * @s: parameter pointer
 *
 * Return: uppercase characters
 */
char *string_toupper(char *s)
{
	int i;
	int j;

	j = strlen(s - 1);

	for (i = 0; i < j && s[i] != '\0'; i++)
	{
		if (s[i] > 'a' && s[i] < 'z')
			s[i] -= 32;
	}
	return (s);
}
