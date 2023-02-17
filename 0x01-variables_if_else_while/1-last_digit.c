#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign n a random number
 * Return: Success (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int a = n % 10;

	if (a > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	else if (a == 0)
		printf("Last digit of %d is %d and is 0\n", n, a);
	else
		printf("Last digit of %d is %d and is less 6 and not 0\n", n, a);
	return (0);
}
