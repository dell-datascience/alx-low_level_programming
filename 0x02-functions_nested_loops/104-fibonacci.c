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
	int count;

	lead = 1;
	lag = 2;
	count = 2;

	printf("%lu, %lu", lead, lag);

	for (i = 3; i < 51; i++)
	{
	fib = lead + lag;
		if (count > 98)
		{
			break;
		}
	printf(", %lu", fib);
	lead = lag;
	lag  = fib;
	count += 1;



	}
	printf("\n");

	return (0);
}
