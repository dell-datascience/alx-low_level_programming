#include "main.h"
#include <ctype.h>

/*
 * _isdigit : checks for a digit
 *
 * @c: character to be checked
 *
 * Return: (1) if c is lower, (0) otherwise
 */
int _isdigit(int c)
{
	int result;

	result =  isdigit(c);
	if (result != 0)
	return (1);
	else
	return (0);
}
