#include <stdio.h>

void constructor(void) __attribute__ ((constructor));

/**
 * constructor - execute the function before the main function
 */
void constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
