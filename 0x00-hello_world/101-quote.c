#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * main - writse to standard output without printf or puts
 *
 * Return: Success (1)
 */
int main(void)
{
	char message1 = "and that piece iof art is useful\"";
	char message2 = "- Dora Korpar, 2015-10-19'\n";
	char message[80];

	strcpy(message, message1);
	strcat(message, message2);

	write(STDOUT_FILENO, message, sizeof(message));
	return (1);
}
