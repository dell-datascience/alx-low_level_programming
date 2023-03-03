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
	if (s1 > s2)
		return (15);
	else if (s1 < s2)
		return (-15);
	else
		return (0);

}
