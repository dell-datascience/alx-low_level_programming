#include <stdio.h>

/**
 * main - prints function name
 * @argc: argumanet count
 * @argv: argument value
 *
 * Return: Success (0)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
