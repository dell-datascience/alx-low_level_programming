#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - snumbers, with specified delimeter
 * @n: number of parameters
 * @separator: delimeter
 *
 * Return: integer sum
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list array;
	unsigned int i;


	if (n)
	{
	va_start(array, n);

	for (i = 0; i < n; i++)
	{
	if (separator != NULL)
	{
	printf("%d", va_arg(array, int));
	if (i != n - 1)
	{
	printf("%s", separator);
	}
	}
	else
	printf("%d", va_arg(array, int));
	}
	va_end(array);
	}
	printf("\n");
}
