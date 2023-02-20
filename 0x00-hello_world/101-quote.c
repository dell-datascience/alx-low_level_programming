#include <stdlib.h>
#include <stdio.h>

/**
 * main - writse to standard output without printf or puts
 *
 * Return: Success (1)
 */
int main(void)
{
	fwrite(STDOUT_FILENO, "and that piece of art is useful\"");

	fwrite(STDOUT_FILENO, " - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
