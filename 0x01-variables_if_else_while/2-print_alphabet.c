#include <stdio.h>

/**
 * main - print the aphabete to std output
 *
 * Return: Success (0)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
