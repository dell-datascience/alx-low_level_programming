#include "main.h"
#include <stdio.h>

/**
 * set_string - sets value of pointer to a char
 * @s: double pointer
 * @to: pointer
 */
void set_string(char **s, char *to)
{
	s = &*s;
	*s = to;
}
