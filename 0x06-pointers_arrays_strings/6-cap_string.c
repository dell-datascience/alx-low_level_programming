#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * *cap_string - capitalize all words in string
 * @s: parameter pointer
 *
 * Return: uppercase characters
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char delim[] = "\t\n,;.!?\"(){}";

	j = strlen(s - 1);

	for (i = 0; s[i] != '\0'; i++)
	{
		
		if (s[0] >= 97 && s[0] <= 122)
			s[0] -= 32;
				for (j = 0; delim[j] != '\0'; j++)
					if (s[i] == delim[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
						s[i + 1] = s[i + 1] - 32;

	}
	return (s);
}
