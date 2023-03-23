#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sums a and b
 * @a: input 1
 * @b: input 2
 *
 * Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract a and b
 * @a: input 1
 * @b: input 2
 *
 * Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiples a and b
 * @a: input 1
 * @b:input 2
 *
 * Return: product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b
 * @a: input 1
 * @b: input 2
 *
 * Return: quotient of a and b
*/
int op_div(int a, int b)
{
	if (b)
	{
	return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modullo of a and b
 * @a: input 1
 * @b: input 2
 *
 * Return: remainder of a and b
*/
int op_mod(int a, int b)
{
	if (b)
	{
	return (a % b);
	}
	printf("Errorop\n");
	exit(100);
}
