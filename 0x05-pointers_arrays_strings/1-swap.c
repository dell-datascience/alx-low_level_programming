#include "main.h"

/**
 * swap_int - swap two numbers
 * @a: first parameter
 * @b: secod parameter
 *
 */
void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;

	*a = *b;

	*b = holder;
}
