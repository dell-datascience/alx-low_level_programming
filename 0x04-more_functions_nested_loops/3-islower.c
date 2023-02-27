#include <ctype.h>
#include "main.h"


/**
 * _isupper - checks for lowercase character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is lower, 0 otherwise
 */
int _isupper(int c)
{
	int result;

	result =  isupper(c);
	if (result != 0)
	return (1);
	else
	return (0);
}
