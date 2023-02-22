#include <ctype.h>
#include "main.h"


/**
 * _isalpha - checks for lowercase character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is lower, 0 otherwise
 */
int _isalpha(int c)
{
	int result;

	result =  isalpha(c);
	if (result != 0)
	return (1);
	else
	return (0);
}
