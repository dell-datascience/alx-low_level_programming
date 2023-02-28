#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in revers
 * @s: string parameter
 *
 */
void print_rev(char *s)
{
	int n;

	n = 0;

	while (*(s + n) != '\0')
	{
	n++;
	}
	n -= 1;

	while (n >= 0)
	{
	_putchar(s[n]);
	n--;
	}

	_putchar('\n');

}
