#include "main.h"
#include <ctype.h>

/*
 * _isupper - checks for upper case characters
 *
 * @c: parameter
 *
 * Return: (1) if c is uppercase or (0) otherwise
 */
int _isupper(int c)
{
	int result;

	result = isupper(c);
	if  (result != 0)
		return (1);
	else
		return (0);

}
