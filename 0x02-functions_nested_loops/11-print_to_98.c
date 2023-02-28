#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: integer n
 *
 * Return: Success (0)
 */
void print_to_98(int n)
{
	int i;

	i = 0;

	if (n > 98)
	{
	for (i = n; i >= 98; i--)
	{
	if (i != n)
	printf(", ");
	printf("%d", i);
	}

	}
	else
	{
	for (i = n; i <= 98; i++)
	{

	if (i != n)
	printf(", ");

	printf("%d", i);
	}
	}
	putchar('\n');
}
