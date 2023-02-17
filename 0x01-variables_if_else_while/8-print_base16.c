#include <stdio.h>
/**
 * main - print hexadecimal numbers
 *
 * Return: Success (0)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (j = 97; j <= 102; j++)
		putchar(i);
	putchar('\n');
	return (0);
}
