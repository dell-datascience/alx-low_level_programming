#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - return a 2D array of integers
 * @width: width parameter
 * @height: height parameter
 *
 * Return: integer pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int *) * width);

		if (array[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(array[j];
			}
			free(array);
			return (NULL);
		}
	}
	i = 0;
	while (i < heigth)
	{
		j = 0;
		while (j < width)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array);
}
