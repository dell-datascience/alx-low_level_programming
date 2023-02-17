#include <stdio.h>

/**
 * main - print the aphabete to std output
 *
 * Return: Success (0)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 90; i++)
		putchar(i);
	for (i = 65; i <= 90; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
