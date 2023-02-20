#include <unistd.h>

/**
 * main - writse to standard output without printf or puts
 *
 * Return: Success (1)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19'\n", sizeof(message));
	return (1);
}
