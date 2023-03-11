#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argumanet count
 * @argv: argument value
 *
 * Return: Success (0)
 */
int main(int argc, char *argv[])
{

	int product;
	int i;

	product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%d\n", product);
	return (0);
}
