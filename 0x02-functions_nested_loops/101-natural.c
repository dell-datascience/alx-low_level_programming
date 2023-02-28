#include "main.h"
#include <stdio.h>

/**
 * main - prints sum  of multiples of 3 or 5
 *
 * Return : Void
 */
int main(void)
{
	int i;
	int n;

	i = 0;
	n  = 0;

	for (i = 1; i < 1024; i++)
{
		if (i % 3 == 0 || i % 5 == 0)
{
			n += i;
}

}
	printf("%d", n);
	printf("\n");

	return (0);
}
