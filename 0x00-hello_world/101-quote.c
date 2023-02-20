#include <unistd.h>

/**
 * main - writse to standard output without printf or puts
 *
 * Return: Success (1)
 */
int main(void)
{
	const void* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19'\n";

		write(STDOUT_FILENO, message, sizeof(message));
		return (1);
}
