#include <stdio.h>

/**
 * main - print combination of numbers
 *
 * Return: Success (0)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
{
		for (j = i + 1; j <= 9; j++)
{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 89)
{
				putchar(',');
				putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
