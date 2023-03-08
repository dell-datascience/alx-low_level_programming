#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonals of square matrix
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int first_diag;
	int second_diag;

	first_diag =  0;
	second_diag = 0;
	i = 0;

	while (i < size)
	{
		first_diag += a[i * size + i];
		second_diag += a[i * size + (size - i - 1)];
		i++;
	}

	printf("%d, %d\n", first_diag, second_diag);
}
