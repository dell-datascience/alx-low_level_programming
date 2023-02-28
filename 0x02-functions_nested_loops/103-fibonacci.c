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
	unsigned long int sum;

	sum = 0;
	lead = 1;
	lag = 2;

	sum = lead + lag;
	for (i = 3; i < 4000000; i++)
	{
	fib = lead + lag;
	sum += fib;
	lead = lag;
	lag  = fib;
	if (fib > 4000000)
	{
		break;
	}
	}
	printf("%lu", sum);
	printf("\n");

	return (0);
}
