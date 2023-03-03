#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of integer array
 * @a: array parameter
 * @n: number of element in arraay
 *
 * Return: None
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int holder;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		holder = a[j];
		a[j] = a[i];
		a[i] = holder;
		i++;
		j--;
	}

}
