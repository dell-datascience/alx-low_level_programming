#include "main.h"

/**
 * _sqrt_recursion - return square root of number
 * @n: number
 *
 * Return: square root number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt_helper(n, 1, n));
}


/**
 * _sqrt_helper - breakdown function further to find sqrt
 * @n: interger parameter
 * @low: integer parameter for lower bound
 * @high: integer parameter for high bound
 *
 * Return: integer sqrt
*/
int _sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (mid * mid == n)
		return (mid);

	if (mid * mid < n)
	{
		if (mid + 1 > high)
			return (-1);
		return (_sqrt_helper(n, mid + 1, high));
	}

	else
	{
		if (mid - 1 < low)
			return (-1);
		return (_sqrt_helper(n, low, mid - 1));
	}
}
