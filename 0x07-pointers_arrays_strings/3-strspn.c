#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: initial segment
 * @accept: bytes to check
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k;
	int i;
	int j;
	int l;

	k = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		l = 0;

		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k += 1;
				l += 1;
			}
		}
		if (l == 0)
		{
			break;
		}
	}
	return (k);
}
