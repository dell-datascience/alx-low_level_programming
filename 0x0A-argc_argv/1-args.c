#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: argument count
 * @argv: argument value
 *
 * Return: Success (0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
