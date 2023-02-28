#include <stdio.h>

/**
 * main - prints fibonacci
 *
 * Return: (0)
 */
int main(void)
{
	unsigned long int lead;
	unsigned long int lag;
	unsigned long int fib;
	int i;

	lead = 1;
	lag = 2;

	printf("%lu, %lu", lead, lag);

	for (i = 3; i < 50; i++)
	{
	fib = lead + lag;

	printf(", %lu", fib);
	lead = lag;
	lag  = fib;

	}
	printf("\n");

	return (0);
}
