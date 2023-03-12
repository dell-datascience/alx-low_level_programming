#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds two positive numbers
 * @argc: counts of input
 * @argv: value of inputs
 *
 * Return: Success (0)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);

		}
	printf("%d\n", sum);
	}

	return (0);
}
