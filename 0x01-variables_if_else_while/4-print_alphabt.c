#include <stdio.h>

/**
 * main -print the alphabets to standard output
 *
 * Return: Success (0)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		if (i == 113)
			break;
		else if (i == 101)
			break;
		putchar(i);
	putchar('\n');
	return (0);
}
