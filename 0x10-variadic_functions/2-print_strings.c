#include "variadic_functions.h"

/**
 * print_strings - snumbers, with specified delimeter
 * @n: number of parameters
 * @separator: delimeter pointer
 *
 * Return: integer sum
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list array;
	unsigned int i;
	char *arg_val;

	va_start(array, n);

	for (i = 0; i < n; i++)
	{
	arg_val = va_arg(array, char*);

	if (arg_val != NULL)
	printf("%s", arg_val);
	else
	printf("%p", (void *)arg_val);
	if (separator != NULL && i < n - 1)
	printf("%s", separator);
	}
	va_end(array);
	printf("\n");
}


