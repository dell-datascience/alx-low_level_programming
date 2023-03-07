#include "main.h"
#include <stdio.h>

/**
 * _strstr -  function that locates a substring.
 *
 * @haystack: initial string
 * @needle: substring
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystack_place_holder;
	char *needle_place_holder;

	while (*haystack != '\0')
	{
		haystack_place_holder = haystack;
		needle_place_holder = needle;

		while (*needle_place_holder == *haystack && *needle_place_holder != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			needle_place_holder++;
		}
		if (*needle_place_holder == '\0')
			return (haystack_place_holder);
		haystack++;
	}
	return (NULL);
}
