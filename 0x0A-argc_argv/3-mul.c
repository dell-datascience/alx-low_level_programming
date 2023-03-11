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


	
	if ( argc - 1 == 2)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
