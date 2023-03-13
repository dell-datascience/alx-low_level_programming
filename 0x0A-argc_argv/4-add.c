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

	if (argc < 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (argc-- && argc > 0)
	{
		for (i = 1; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (sum);
}
