#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parametery
 * @array: array parameter
 * @size: size parameter
 * @action: pointer function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
