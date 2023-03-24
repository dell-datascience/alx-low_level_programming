#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 *
 * Return: integer sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list array;
	unsigned int i;
	int sum;

	sum = 0;
	if (n == 0)
		return (0);

	va_start(array, n);

	for (i = 0; i < n; i++)
		sum += va_arg(array, int);

	va_end(array);
	return (sum);
}
