#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the sign of a number
 *
 * @n: number to which last digit is needed
 *
 * Return: return last digit of n
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (result < 0)
{
		result = abs(result);
}
	_putchar(result + '0');
	return (result);
}

