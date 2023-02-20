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
	int k;
	int l;

	for (i = 0; i <= 9 ; i++)
{
		for (j = 0; j <= 8; j++)
{
			if (i != 8 || j != 9)
{
				putchar(i + '0');
				putchar(j + '0');
				putchar(' ');
}
			for (k = j + 1; k <= 9; k++)
{
				putchar(k + '0');

				if (i != 7 || j != 8 || k != 9)
{
					putchar(',');
					putchar(' ');
}
}
}
}
	putchar('\n');
	return (0);
}
