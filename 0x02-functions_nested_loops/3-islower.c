#include <ctype.h>
#include "main.h"


/**
 * _islower - checks for lowercase character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is lower, 0 otherwise
 */
int _islower(char c)
{
	int result;

	result =  islower(c);
	if (result != 0)
	return (1);
	else
	return (0);
}
