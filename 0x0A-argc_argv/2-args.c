#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: argumanet count
 * @argv: argument value
 *
 * Return: Success (0)
 */
int main(int argc, char *argv[])
{	
	int i;
	
	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", (argv[i]));
	}
	return (0);
}
