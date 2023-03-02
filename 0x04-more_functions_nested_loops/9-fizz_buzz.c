#include "main.h"
#include <stdio.h>

/**
 * fizzbuzz - prints the numbers from 1 to 100 in fizz-BUZZ style
 *
 * Return: None
 */
void fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - entry point
 *
 * Return: Sucess (0)
 */
int main(void)
{
	fizzbuzz();

	return (0);
}
