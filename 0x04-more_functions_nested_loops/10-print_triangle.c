#include "main.h"

/**
 * print_triangle - print triangle
 * @size: parameter
 *
 * Return: None
 */
void print_triangle(int size)
{
	int i;
	int j;
	int column;
	int k;

	i = 0;
	j = 0;
	k = 0;

	column = size - 1;

	if (size <= 0)
		_putchar('\n');

	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < column; j++)
			{
				_putchar(' ');
			}
			column--;
			for (k = 0; k < (i + 1); k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
